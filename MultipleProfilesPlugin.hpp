

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultipleProfiles.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultipleProfilesPlugin_1327645758_h
#define MultipleProfilesPlugin_1327645758_h

#include "MultipleProfiles.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ResolutionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const Resolution *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ResolutionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    Resolution *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ResolutionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ResolutionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
ResolutionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ResolutionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ResolutionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const Resolution * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern unsigned int 
ResolutionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ResolutionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ResolutionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const Resolution *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ResolutionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    Resolution * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ResolutionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    Resolution *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* ----------------------------------------------------------------------------
Support functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern void
ResolutionPluginSupport_print_data(
    const Resolution *sample, const char *desc, int indent_level);

#define HumidityUnionPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define HumidityUnionPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HumidityUnionPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define HumidityUnionPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HumidityUnionPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HumidityUnion*
HumidityUnionPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HumidityUnion*
HumidityUnionPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HumidityUnion*
HumidityUnionPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HumidityUnionPluginSupport_copy_data(
    HumidityUnion *out,
    const HumidityUnion *in);

NDDSUSERDllExport extern void 
HumidityUnionPluginSupport_destroy_data_w_params(
    HumidityUnion *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HumidityUnionPluginSupport_destroy_data_ex(
    HumidityUnion *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HumidityUnionPluginSupport_destroy_data(
    HumidityUnion *sample);

NDDSUSERDllExport extern void 
HumidityUnionPluginSupport_print_data(
    const HumidityUnion *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HumidityUnionPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HumidityUnionPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
HumidityUnionPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HumidityUnionPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
HumidityUnionPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HumidityUnion *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
HumidityUnionPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HumidityUnion *out,
    const HumidityUnion *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
HumidityUnionPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const HumidityUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HumidityUnionPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    HumidityUnion *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HumidityUnionPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const HumidityUnion *sample); 

NDDSUSERDllExport extern RTIBool 
HumidityUnionPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HumidityUnion **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HumidityUnionPlugin_deserialize_from_cdr_buffer(
    HumidityUnion *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
HumidityUnionPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
HumidityUnionPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
HumidityUnionPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HumidityUnionPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
HumidityUnionPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const HumidityUnion * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
HumidityUnionPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HumidityUnionPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HumidityUnionPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HumidityUnionPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const HumidityUnion *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HumidityUnionPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    HumidityUnion * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HumidityUnionPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HumidityUnion ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
HumidityUnionPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HumidityUnion *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HumidityUnionPlugin_new(void);

NDDSUSERDllExport extern void
HumidityUnionPlugin_delete(struct PRESTypePlugin *);

#define PercisionCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define PercisionCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define PercisionCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define PercisionCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define PercisionCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PercisionCommand*
PercisionCommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern PercisionCommand*
PercisionCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern PercisionCommand*
PercisionCommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
PercisionCommandPluginSupport_copy_data(
    PercisionCommand *out,
    const PercisionCommand *in);

NDDSUSERDllExport extern void 
PercisionCommandPluginSupport_destroy_data_w_params(
    PercisionCommand *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
PercisionCommandPluginSupport_destroy_data_ex(
    PercisionCommand *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
PercisionCommandPluginSupport_destroy_data(
    PercisionCommand *sample);

NDDSUSERDllExport extern void 
PercisionCommandPluginSupport_print_data(
    const PercisionCommand *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
PercisionCommandPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
PercisionCommandPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
PercisionCommandPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
PercisionCommandPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
PercisionCommandPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    PercisionCommand *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
PercisionCommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    PercisionCommand *out,
    const PercisionCommand *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
PercisionCommandPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const PercisionCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PercisionCommandPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    PercisionCommand *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PercisionCommandPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const PercisionCommand *sample); 

NDDSUSERDllExport extern RTIBool 
PercisionCommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    PercisionCommand **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PercisionCommandPlugin_deserialize_from_cdr_buffer(
    PercisionCommand *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
PercisionCommandPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
PercisionCommandPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
PercisionCommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PercisionCommandPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
PercisionCommandPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const PercisionCommand * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
PercisionCommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
PercisionCommandPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
PercisionCommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
PercisionCommandPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const PercisionCommand *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PercisionCommandPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    PercisionCommand * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
PercisionCommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    PercisionCommand ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
PercisionCommandPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    PercisionCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
PercisionCommandPlugin_new(void);

NDDSUSERDllExport extern void
PercisionCommandPlugin_delete(struct PRESTypePlugin *);

/* The type used to store keys for instances of type struct
* AnotherSimple.
*
* By default, this type is struct ResolutionCommand
* itself. However, if for some reason this choice is not practical for your
* system (e.g. if sizeof(struct ResolutionCommand)
* is very large), you may redefine this typedef in terms of another type of
* your choosing. HOWEVER, if you define the KeyHolder type to be something
* other than struct AnotherSimple, the
* following restriction applies: the key of struct
* ResolutionCommand must consist of a
* single field of your redefined KeyHolder type and that field must be the
* first field in struct ResolutionCommand.
*/
typedef  class ResolutionCommand ResolutionCommandKeyHolder;

#define ResolutionCommandPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
#define ResolutionCommandPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define ResolutionCommandPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define ResolutionCommandPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define ResolutionCommandPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

#define ResolutionCommandPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define ResolutionCommandPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern ResolutionCommand*
ResolutionCommandPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern ResolutionCommand*
ResolutionCommandPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ResolutionCommand*
ResolutionCommandPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPluginSupport_copy_data(
    ResolutionCommand *out,
    const ResolutionCommand *in);

NDDSUSERDllExport extern void 
ResolutionCommandPluginSupport_destroy_data_w_params(
    ResolutionCommand *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
ResolutionCommandPluginSupport_destroy_data_ex(
    ResolutionCommand *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ResolutionCommandPluginSupport_destroy_data(
    ResolutionCommand *sample);

NDDSUSERDllExport extern void 
ResolutionCommandPluginSupport_print_data(
    const ResolutionCommand *sample,
    const char *desc,
    unsigned int indent);

NDDSUSERDllExport extern ResolutionCommand*
ResolutionCommandPluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern ResolutionCommand*
ResolutionCommandPluginSupport_create_key(void);

NDDSUSERDllExport extern void 
ResolutionCommandPluginSupport_destroy_key_ex(
    ResolutionCommandKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
ResolutionCommandPluginSupport_destroy_key(
    ResolutionCommandKeyHolder *key);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
ResolutionCommandPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
ResolutionCommandPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
ResolutionCommandPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
ResolutionCommandPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
ResolutionCommandPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand *out,
    const ResolutionCommand *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const ResolutionCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ResolutionCommandPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const ResolutionCommand *sample); 

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ResolutionCommandPlugin_deserialize_from_cdr_buffer(
    ResolutionCommand *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
ResolutionCommandPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
ResolutionCommandPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);    

NDDSUSERDllExport extern unsigned int 
ResolutionCommandPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ResolutionCommandPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
ResolutionCommandPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const ResolutionCommand * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
ResolutionCommandPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
ResolutionCommandPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
ResolutionCommandPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const ResolutionCommand *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
ResolutionCommandPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommandKeyHolder *key, 
    const ResolutionCommand *instance);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    ResolutionCommand *instance, 
    const ResolutionCommandKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const ResolutionCommand *instance);

NDDSUSERDllExport extern RTIBool 
ResolutionCommandPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
ResolutionCommandPlugin_new(void);

NDDSUSERDllExport extern void
ResolutionCommandPlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MultipleProfilesPlugin_1327645758_h */

