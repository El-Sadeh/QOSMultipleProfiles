#include<random>
#include <iostream>

#include <dds/pub/ddspub.hpp>
#include <dds/sub/ddssub.hpp>
#include <rti/util/util.hpp> // for sleep()

#include "MultipleProfiles.hpp"
#include <dds\core\QosProvider.hpp>


/***********************************    This class is  for the data reader   **********************************/
class PercisionCommandReaderListener : public dds::sub::NoOpDataReaderListener<PercisionCommand> {
public:


	PercisionCommandReaderListener(PercisionCommand* pointerToData) : count_(0)
	{
		recentDataHolder = pointerToData;
	}

	void on_data_available(dds::sub::DataReader<PercisionCommand>& reader)
	{
		// Take all samples
		dds::sub::LoanedSamples<PercisionCommand> samples = reader.take();

		for (dds::sub::LoanedSamples<PercisionCommand>::iterator sample_it = samples.begin();
			sample_it != samples.end(); sample_it++) {

			if (sample_it->info().valid()) {
				count_++;
				recentData = (sample_it->data());
				*recentDataHolder = recentData;
				std::cout << sample_it->data() << std::endl;
			}
		}
	}

	int count() const
	{
		return count_;
	}

	PercisionCommand recentData;	// A place to hold the pointer to send
	PercisionCommand *recentDataHolder;
private:

	int count_;
};
/************************************************** End of class for reader ****************************************/







void publisher_main(int domain_id, int sample_count)
{
    // Create a DomainParticipant with default Qos
    dds::domain::DomainParticipant participant (domain_id);


	//***********************  Data reader setup block  ***************************
// Create a Topic -- and automatically register the type
	dds::topic::Topic<PercisionCommand> percisionTopic(participant, "Example PercisionCommand");

	auto eladQosProvider = dds::core::QosProvider
	("mySystemProfiles.xml");
	//GS - needs to be a relative path so it will work on different PCs

	//Create a  'PercisionCommand' variable and a pointer to that variable.
	//The purpose: to enable access from the listener. 
	PercisionCommand percision;		//Will hold the most recent resolution (LOW or HIGH)
	percision.requestedResolution(Resolution::LOW); //Initialize the resolution.
	PercisionCommand* pointerToLastDataRecieved = &percision;	//Create a pointer to 'percision'


	// Create a DataReader with default Qos (Subscriber created in-line)
	PercisionCommandReaderListener listener(pointerToLastDataRecieved);
	dds::sub::DataReader<PercisionCommand> reader(
		dds::sub::Subscriber(participant),
		percisionTopic,
		dds::core::QosProvider::Default().datareader_qos(),
		&listener,
		dds::core::status::StatusMask::data_available());
	//********************* End of data reader setup block **************************



	//*********************   data writer setup block   **************************
    // Create a Topic -- and automatically register the type
    dds::topic::Topic<ResolutionCommand> humidityTopic (participant, "Example ResolutionCommand");

    // Create a DataWriter with default Qos (Publisher created in-line)
    dds::pub::DataWriter<ResolutionCommand> writer(dds::pub::Publisher(participant), humidityTopic);

	
	short intRandomHumidity;
    ResolutionCommand sample;

	//creating a random generator
	std::default_random_engine generator;
	std::uniform_int_distribution<short> distributionForFloat(0, 10000);
	std::uniform_int_distribution<short> distributionForInt(0, 100);

    for (int count = 0; count < sample_count || sample_count == 0; count++) {
        // Modify the data to be written here

		//When the requested resolution is HIGH:
		if ((pointerToLastDataRecieved->requestedResolution()) == Resolution::HIGH)
		{
			//Generate a float number in the range [0.00,100.00]
			intRandomHumidity = (short)distributionForFloat(generator);
			sample.humidity().floatHumidity(((float)intRandomHumidity) / 100);

		}
		else  //When the requested resolution is LOW:
		{
			//Generate a short int number in the range [0,100]
			sample.humidity().shortHumidity(((short)distributionForInt(generator)));
		}
		
		std::cout << "Writing ResolutionCommand, count " << count << std::endl;
		writer.write(sample);

        rti::util::sleep(dds::core::Duration(1));
    }
}

int main(int argc, char *argv[])
{

    int domain_id = 0;
    int sample_count = 0; // infinite loop

    if (argc >= 2) {
        domain_id = atoi(argv[1]);
    }
    if (argc >= 3) {
        sample_count = atoi(argv[2]);
    }

    // To turn on additional logging, include <rti/config/Logger.hpp> and
    // uncomment the following line:
    // rti::config::Logger::instance().verbosity(rti::config::Verbosity::STATUS_ALL);

    try {
        publisher_main(domain_id, sample_count);
    } catch (const std::exception& ex) {
        // This will catch DDS exceptions
        std::cerr << "Exception in publisher_main(): " << ex.what() << std::endl;
        return -1;
    }

    // RTI Connext provides a finalize_participant_factory() method
    // if you want to release memory used by the participant factory singleton.
    // Uncomment the following line to release the singleton:
    //
    // dds::domain::DomainParticipant::finalize_participant_factory();

    return 0;
}

