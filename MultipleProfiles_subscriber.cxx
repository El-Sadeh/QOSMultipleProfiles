
#include <algorithm>
#include <iostream>

#include <dds/sub/ddssub.hpp>
#include <dds/pub/ddspub.hpp>
#include <dds/core/ddscore.hpp>
// Or simply include <dds/dds.hpp> 

#include "MultipleProfiles.hpp"

class ResolutionCommandReaderListener : public dds::sub::NoOpDataReaderListener<ResolutionCommand> {
public:

	ResolutionCommandReaderListener() : count_(0)
	{
	}

	void on_data_available(dds::sub::DataReader<ResolutionCommand>& reader)
	{
		// Take all samples
		dds::sub::LoanedSamples<ResolutionCommand> samples = reader.take();

		for (dds::sub::LoanedSamples<ResolutionCommand>::iterator sample_it = samples.begin();
			sample_it != samples.end(); sample_it++) {

			if (sample_it->info().valid()) {
				count_++;
				std::cout << sample_it->data() << std::endl;
			}
		}
	}

	int count() const
	{
		return count_;
	}

private:
	int count_;
};

void subscriber_main(int domain_id, int sample_count)
{
	// Create a DomainParticipant with default Qos
	dds::domain::DomainParticipant participant(domain_id);

	//***************************************  Data reader setup block  ********************************************
	// Create a Topic -- and automatically register the type
	dds::topic::Topic<ResolutionCommand> topic(participant, "Example ResolutionCommand");

	//Set the Qos to be read from the following path
	auto eladQosProvider = dds::core::QosProvider
	("mySystemProfiles.xml");


	// Create a DataReader with default Qos (Subscriber created in-line)
	ResolutionCommandReaderListener listener;
	dds::sub::DataReader<ResolutionCommand> reader(
		dds::sub::Subscriber(participant),
		topic,
		dds::core::QosProvider::Default().datareader_qos(),
		&listener,
		dds::core::status::StatusMask::data_available());
	//************************************ End of data reader setup block ***********************************

	//************************************  Data writer setup   *********************************************
		// Create a Topic -- and automatically register the type
	dds::topic::Topic<PercisionCommand> percisionTopic(participant, "Example PercisionCommand");

	// Create a DataWriter with default Qos (Publisher created in-line)
	dds::pub::DataWriter<PercisionCommand> writer(dds::pub::Publisher(participant), percisionTopic);
	

	//**********************************  End of data writer setup block  ***********************************


	PercisionCommand command;
	int counter = 0;

	while (listener.count() < sample_count || sample_count == 0) {
		std::cout << "ResolutionCommand subscriber sleeping for 4 sec..." << std::endl;
		if ((counter % 2) == 0)
			command.requestedResolution(Resolution::LOW);
		else
			command.requestedResolution(Resolution::HIGH);
		counter++;
		writer.write(command);

		rti::util::sleep(dds::core::Duration(4));
	}

	// Unset the listener to allow the reader destruction
	// (rti::core::ListenerBinder can do this automatically)
	reader.listener(NULL, dds::core::status::StatusMask::none());
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
		subscriber_main(domain_id, sample_count);
	}
	catch (const std::exception& ex) {
		// This will catch DDS exceptions
		std::cerr << "Exception in subscriber_main(): " << ex.what() << std::endl;
		return -1;
	}

	// RTI Connext provides a finalize_participant_factory() method
	// if you want to release memory used by the participant factory singleton.
	// Uncomment the following line to release the singleton:
	//
	// dds::domain::DomainParticipant::finalize_participant_factory();

	return 0;
}

