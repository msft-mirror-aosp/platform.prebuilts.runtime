// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_GPU_GPU_COUNTER_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_GPU_GPU_COUNTER_EVENT_PROTO_H_

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
class GpuCounterEvent_GpuCounter;

class GpuCounterEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  GpuCounterEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit GpuCounterEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit GpuCounterEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_counter_descriptor() const { return at<1>().valid(); }
  ::protozero::ConstBytes counter_descriptor() const { return at<1>().as_bytes(); }
  bool has_counters() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> counters() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_gpu_id() const { return at<3>().valid(); }
  int32_t gpu_id() const { return at<3>().as_int32(); }
};

class GpuCounterEvent : public ::protozero::Message {
 public:
  using Decoder = GpuCounterEvent_Decoder;
  enum : int32_t {
    kCounterDescriptorFieldNumber = 1,
    kCountersFieldNumber = 2,
    kGpuIdFieldNumber = 3,
  };
  using GpuCounter = ::perfetto::protos::pbzero::GpuCounterEvent_GpuCounter;

  using FieldMetadata_CounterDescriptor =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      GpuCounterDescriptor,
      GpuCounterEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_CounterDescriptor kCounterDescriptor() { return {}; }
  template <typename T = GpuCounterDescriptor> T* set_counter_descriptor() {
    return BeginNestedMessage<T>(1);
  }


  using FieldMetadata_Counters =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      GpuCounterEvent_GpuCounter,
      GpuCounterEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Counters kCounters() { return {}; }
  template <typename T = GpuCounterEvent_GpuCounter> T* add_counters() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_GpuId =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      GpuCounterEvent>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_GpuId kGpuId() { return {}; }
  void set_gpu_id(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_GpuId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

class GpuCounterEvent_GpuCounter_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  GpuCounterEvent_GpuCounter_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit GpuCounterEvent_GpuCounter_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit GpuCounterEvent_GpuCounter_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_counter_id() const { return at<1>().valid(); }
  uint32_t counter_id() const { return at<1>().as_uint32(); }
  bool has_int_value() const { return at<2>().valid(); }
  int64_t int_value() const { return at<2>().as_int64(); }
  bool has_double_value() const { return at<3>().valid(); }
  double double_value() const { return at<3>().as_double(); }
};

class GpuCounterEvent_GpuCounter : public ::protozero::Message {
 public:
  using Decoder = GpuCounterEvent_GpuCounter_Decoder;
  enum : int32_t {
    kCounterIdFieldNumber = 1,
    kIntValueFieldNumber = 2,
    kDoubleValueFieldNumber = 3,
  };

  using FieldMetadata_CounterId =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      GpuCounterEvent_GpuCounter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_CounterId kCounterId() { return {}; }
  void set_counter_id(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CounterId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IntValue =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      GpuCounterEvent_GpuCounter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_IntValue kIntValue() { return {}; }
  void set_int_value(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_IntValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DoubleValue =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kDouble,
      double,
      GpuCounterEvent_GpuCounter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_DoubleValue kDoubleValue() { return {}; }
  void set_double_value(double value) {
    static constexpr uint32_t field_id = FieldMetadata_DoubleValue::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kDouble>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
