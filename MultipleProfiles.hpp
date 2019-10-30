

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultipleProfiles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultipleProfiles_1327645732_hpp
#define MultipleProfiles_1327645732_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

struct Resolution_def {
    enum type {
        LOW,      
        HIGH     
    };
    static type get_default(){ return LOW;}
};

typedef dds::core::safe_enum<Resolution_def> Resolution;
NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const Resolution& sample);

class NDDSUSERDllExport HumidityUnion {

  public:
    HumidityUnion();

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HumidityUnion (HumidityUnion&&) = default;
    HumidityUnion& operator=(HumidityUnion&&) = default;
    HumidityUnion& operator=(const HumidityUnion&) = default;
    HumidityUnion(const HumidityUnion&) = default;
    #else
    HumidityUnion(HumidityUnion&& other_) OMG_NOEXCEPT;  
    HumidityUnion& operator=(HumidityUnion&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    Resolution& _d() ; 
    const Resolution& _d() const ;
    void _d(const Resolution& value);

    int16_t& shortHumidity() ; 
    const int16_t& shortHumidity() const ;
    void shortHumidity(int16_t value);

    float& floatHumidity() ; 
    const float& floatHumidity() const ;
    void floatHumidity(float value);

    bool operator == (const HumidityUnion& other_) const;
    bool operator != (const HumidityUnion& other_) const;

    static Resolution default_discriminator();  

    void swap(HumidityUnion& other_) OMG_NOEXCEPT ;

  private:

    Resolution m_d_;
    struct NDDSUSERDllExport Union_ {
        int16_t m_shortHumidity_;
        float m_floatHumidity_;
        Union_();
        Union_(
            int16_t shortHumidity,
            float floatHumidity);
    };
    Union_ m_u_;

};

inline void swap(HumidityUnion& a, HumidityUnion& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HumidityUnion& sample);

class NDDSUSERDllExport PercisionCommand {

  public:
    PercisionCommand();

    explicit PercisionCommand(
        const Resolution& requestedResolution);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    PercisionCommand (PercisionCommand&&) = default;
    PercisionCommand& operator=(PercisionCommand&&) = default;
    PercisionCommand& operator=(const PercisionCommand&) = default;
    PercisionCommand(const PercisionCommand&) = default;
    #else
    PercisionCommand(PercisionCommand&& other_) OMG_NOEXCEPT;  
    PercisionCommand& operator=(PercisionCommand&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    Resolution& requestedResolution() OMG_NOEXCEPT; 
    const Resolution& requestedResolution() const OMG_NOEXCEPT;
    void requestedResolution(const Resolution& value);

    bool operator == (const PercisionCommand& other_) const;
    bool operator != (const PercisionCommand& other_) const;

    void swap(PercisionCommand& other_) OMG_NOEXCEPT ;

  private:

    Resolution m_requestedResolution_;

};

inline void swap(PercisionCommand& a, PercisionCommand& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const PercisionCommand& sample);

class NDDSUSERDllExport ResolutionCommand {

  public:
    ResolutionCommand();

    explicit ResolutionCommand(
        const HumidityUnion& humidity);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    ResolutionCommand (ResolutionCommand&&) = default;
    ResolutionCommand& operator=(ResolutionCommand&&) = default;
    ResolutionCommand& operator=(const ResolutionCommand&) = default;
    ResolutionCommand(const ResolutionCommand&) = default;
    #else
    ResolutionCommand(ResolutionCommand&& other_) OMG_NOEXCEPT;  
    ResolutionCommand& operator=(ResolutionCommand&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    HumidityUnion& humidity() OMG_NOEXCEPT; 
    const HumidityUnion& humidity() const OMG_NOEXCEPT;
    void humidity(const HumidityUnion& value);

    bool operator == (const ResolutionCommand& other_) const;
    bool operator != (const ResolutionCommand& other_) const;

    void swap(ResolutionCommand& other_) OMG_NOEXCEPT ;

  private:

    HumidityUnion m_humidity_;

};

inline void swap(ResolutionCommand& a, ResolutionCommand& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ResolutionCommand& sample);

namespace dds { 
    namespace topic {

        template<>
        struct topic_type_name<HumidityUnion> {
            NDDSUSERDllExport static std::string value() {
                return "HumidityUnion";
            }
        };

        template<>
        struct is_topic_type<HumidityUnion> : public dds::core::true_type {};

        template<>
        struct topic_type_support<HumidityUnion> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const HumidityUnion& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(HumidityUnion& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(HumidityUnion& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HumidityUnion& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<PercisionCommand> {
            NDDSUSERDllExport static std::string value() {
                return "PercisionCommand";
            }
        };

        template<>
        struct is_topic_type<PercisionCommand> : public dds::core::true_type {};

        template<>
        struct topic_type_support<PercisionCommand> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const PercisionCommand& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(PercisionCommand& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(PercisionCommand& sample);

            NDDSUSERDllExport 
            static void allocate_sample(PercisionCommand& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name<ResolutionCommand> {
            NDDSUSERDllExport static std::string value() {
                return "ResolutionCommand";
            }
        };

        template<>
        struct is_topic_type<ResolutionCommand> : public dds::core::true_type {};

        template<>
        struct topic_type_support<ResolutionCommand> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, const ResolutionCommand& sample);

            NDDSUSERDllExport 
            static void from_cdr_buffer(ResolutionCommand& sample, const std::vector<char>& buffer);

            NDDSUSERDllExport 
            static void reset_sample(ResolutionCommand& sample);

            NDDSUSERDllExport 
            static void allocate_sample(ResolutionCommand& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        template<>
        struct dynamic_type<Resolution> {
            typedef dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility<Resolution> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<HumidityUnion> {
            typedef dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility<HumidityUnion> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<PercisionCommand> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<PercisionCommand> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        template<>
        struct dynamic_type<ResolutionCommand> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<ResolutionCommand> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // MultipleProfiles_1327645732_hpp

