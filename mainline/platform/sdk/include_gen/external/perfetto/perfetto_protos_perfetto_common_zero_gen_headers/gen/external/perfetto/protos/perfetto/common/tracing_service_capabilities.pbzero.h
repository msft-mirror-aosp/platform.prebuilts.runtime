// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACING_SERVICE_CAPABILITIES_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_TRACING_SERVICE_CAPABILITIES_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

enum ObservableEvents_Type : int32_t;

class TracingServiceCapabilities_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  TracingServiceCapabilities_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit TracingServiceCapabilities_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit TracingServiceCapabilities_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_has_query_capabilities() const { return at<1>().valid(); }
  bool has_query_capabilities() const { return at<1>().as_bool(); }
  bool has_observable_events() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<int32_t> observable_events() const { return GetRepeated<int32_t>(2); }
  bool has_has_trace_config_output_path() const { return at<3>().valid(); }
  bool has_trace_config_output_path() const { return at<3>().as_bool(); }
};

class TracingServiceCapabilities : public ::protozero::Message {
 public:
  using Decoder = TracingServiceCapabilities_Decoder;
  enum : int32_t {
    kHasQueryCapabilitiesFieldNumber = 1,
    kObservableEventsFieldNumber = 2,
    kHasTraceConfigOutputPathFieldNumber = 3,
  };

  using FieldMetadata_HasQueryCapabilities =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      TracingServiceCapabilities>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_HasQueryCapabilities kHasQueryCapabilities() { return {}; }
  void set_has_query_capabilities(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasQueryCapabilities::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ObservableEvents =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ObservableEvents_Type,
      TracingServiceCapabilities>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ObservableEvents kObservableEvents() { return {}; }
  void add_observable_events(::perfetto::protos::pbzero::ObservableEvents_Type value) {
    static constexpr uint32_t field_id = FieldMetadata_ObservableEvents::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HasTraceConfigOutputPath =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      TracingServiceCapabilities>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_HasTraceConfigOutputPath kHasTraceConfigOutputPath() { return {}; }
  void set_has_trace_config_output_path(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasTraceConfigOutputPath::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
