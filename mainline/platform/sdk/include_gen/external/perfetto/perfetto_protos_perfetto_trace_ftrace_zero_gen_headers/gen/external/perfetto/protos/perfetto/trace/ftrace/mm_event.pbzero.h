// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_MM_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_MM_EVENT_PROTO_H_

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


class MmEventRecordFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  MmEventRecordFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit MmEventRecordFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit MmEventRecordFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_avg_lat() const { return at<1>().valid(); }
  uint32_t avg_lat() const { return at<1>().as_uint32(); }
  bool has_count() const { return at<2>().valid(); }
  uint32_t count() const { return at<2>().as_uint32(); }
  bool has_max_lat() const { return at<3>().valid(); }
  uint32_t max_lat() const { return at<3>().as_uint32(); }
  bool has_type() const { return at<4>().valid(); }
  uint32_t type() const { return at<4>().as_uint32(); }
};

class MmEventRecordFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = MmEventRecordFtraceEvent_Decoder;
  enum : int32_t {
    kAvgLatFieldNumber = 1,
    kCountFieldNumber = 2,
    kMaxLatFieldNumber = 3,
    kTypeFieldNumber = 4,
  };

  using FieldMetadata_AvgLat =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      MmEventRecordFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_AvgLat kAvgLat() { return {}; }
  void set_avg_lat(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_AvgLat::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Count =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      MmEventRecordFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Count kCount() { return {}; }
  void set_count(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Count::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_MaxLat =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      MmEventRecordFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_MaxLat kMaxLat() { return {}; }
  void set_max_lat(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_MaxLat::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Type =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      MmEventRecordFtraceEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Type kType() { return {}; }
  void set_type(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Type::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
