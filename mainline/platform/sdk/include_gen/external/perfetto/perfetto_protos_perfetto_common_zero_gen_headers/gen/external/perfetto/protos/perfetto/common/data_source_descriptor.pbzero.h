// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_DATA_SOURCE_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_DATA_SOURCE_DESCRIPTOR_PROTO_H_

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

class GpuCounterDescriptor;
class TrackEventDescriptor;

class DataSourceDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  DataSourceDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit DataSourceDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit DataSourceDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name() const { return at<1>().valid(); }
  ::protozero::ConstChars name() const { return at<1>().as_string(); }
  bool has_id() const { return at<7>().valid(); }
  uint64_t id() const { return at<7>().as_uint64(); }
  bool has_will_notify_on_stop() const { return at<2>().valid(); }
  bool will_notify_on_stop() const { return at<2>().as_bool(); }
  bool has_will_notify_on_start() const { return at<3>().valid(); }
  bool will_notify_on_start() const { return at<3>().as_bool(); }
  bool has_handles_incremental_state_clear() const { return at<4>().valid(); }
  bool handles_incremental_state_clear() const { return at<4>().as_bool(); }
  bool has_gpu_counter_descriptor() const { return at<5>().valid(); }
  ::protozero::ConstBytes gpu_counter_descriptor() const { return at<5>().as_bytes(); }
  bool has_track_event_descriptor() const { return at<6>().valid(); }
  ::protozero::ConstBytes track_event_descriptor() const { return at<6>().as_bytes(); }
};

class DataSourceDescriptor : public ::protozero::Message {
 public:
  using Decoder = DataSourceDescriptor_Decoder;
  enum : int32_t {
    kNameFieldNumber = 1,
    kIdFieldNumber = 7,
    kWillNotifyOnStopFieldNumber = 2,
    kWillNotifyOnStartFieldNumber = 3,
    kHandlesIncrementalStateClearFieldNumber = 4,
    kGpuCounterDescriptorFieldNumber = 5,
    kTrackEventDescriptorFieldNumber = 6,
  };

  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      DataSourceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Name kName() { return {}; }
  void set_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Name::kFieldId, data, size);
  }
  void set_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Name::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Id =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      DataSourceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Id kId() { return {}; }
  void set_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Id::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_WillNotifyOnStop =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      DataSourceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WillNotifyOnStop kWillNotifyOnStop() { return {}; }
  void set_will_notify_on_stop(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_WillNotifyOnStop::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_WillNotifyOnStart =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      DataSourceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WillNotifyOnStart kWillNotifyOnStart() { return {}; }
  void set_will_notify_on_start(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_WillNotifyOnStart::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HandlesIncrementalStateClear =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      DataSourceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_HandlesIncrementalStateClear kHandlesIncrementalStateClear() { return {}; }
  void set_handles_incremental_state_clear(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HandlesIncrementalStateClear::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_GpuCounterDescriptor =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      GpuCounterDescriptor,
      DataSourceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_GpuCounterDescriptor kGpuCounterDescriptor() { return {}; }
  template <typename T = GpuCounterDescriptor> T* set_gpu_counter_descriptor() {
    return BeginNestedMessage<T>(5);
  }

  void set_gpu_counter_descriptor_raw(const std::string& raw) {
    return AppendBytes(5, raw.data(), raw.size());
  }


  using FieldMetadata_TrackEventDescriptor =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      TrackEventDescriptor,
      DataSourceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_TrackEventDescriptor kTrackEventDescriptor() { return {}; }
  template <typename T = TrackEventDescriptor> T* set_track_event_descriptor() {
    return BeginNestedMessage<T>(6);
  }

  void set_track_event_descriptor_raw(const std::string& raw) {
    return AppendBytes(6, raw.data(), raw.size());
  }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
