// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_COUNTER_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_COUNTER_DESCRIPTOR_PROTO_H_

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

enum CounterDescriptor_BuiltinCounterType : int32_t;
enum CounterDescriptor_Unit : int32_t;

enum CounterDescriptor_BuiltinCounterType : int32_t {
  CounterDescriptor_BuiltinCounterType_COUNTER_UNSPECIFIED = 0,
  CounterDescriptor_BuiltinCounterType_COUNTER_THREAD_TIME_NS = 1,
  CounterDescriptor_BuiltinCounterType_COUNTER_THREAD_INSTRUCTION_COUNT = 2,
};

const CounterDescriptor_BuiltinCounterType CounterDescriptor_BuiltinCounterType_MIN = CounterDescriptor_BuiltinCounterType_COUNTER_UNSPECIFIED;
const CounterDescriptor_BuiltinCounterType CounterDescriptor_BuiltinCounterType_MAX = CounterDescriptor_BuiltinCounterType_COUNTER_THREAD_INSTRUCTION_COUNT;

enum CounterDescriptor_Unit : int32_t {
  CounterDescriptor_Unit_UNIT_UNSPECIFIED = 0,
  CounterDescriptor_Unit_UNIT_TIME_NS = 1,
  CounterDescriptor_Unit_UNIT_COUNT = 2,
  CounterDescriptor_Unit_UNIT_SIZE_BYTES = 3,
};

const CounterDescriptor_Unit CounterDescriptor_Unit_MIN = CounterDescriptor_Unit_UNIT_UNSPECIFIED;
const CounterDescriptor_Unit CounterDescriptor_Unit_MAX = CounterDescriptor_Unit_UNIT_SIZE_BYTES;

class CounterDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  CounterDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CounterDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CounterDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_type() const { return at<1>().valid(); }
  int32_t type() const { return at<1>().as_int32(); }
  bool has_categories() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> categories() const { return GetRepeated<::protozero::ConstChars>(2); }
  bool has_unit() const { return at<3>().valid(); }
  int32_t unit() const { return at<3>().as_int32(); }
  bool has_unit_name() const { return at<6>().valid(); }
  ::protozero::ConstChars unit_name() const { return at<6>().as_string(); }
  bool has_unit_multiplier() const { return at<4>().valid(); }
  int64_t unit_multiplier() const { return at<4>().as_int64(); }
  bool has_is_incremental() const { return at<5>().valid(); }
  bool is_incremental() const { return at<5>().as_bool(); }
};

class CounterDescriptor : public ::protozero::Message {
 public:
  using Decoder = CounterDescriptor_Decoder;
  enum : int32_t {
    kTypeFieldNumber = 1,
    kCategoriesFieldNumber = 2,
    kUnitFieldNumber = 3,
    kUnitNameFieldNumber = 6,
    kUnitMultiplierFieldNumber = 4,
    kIsIncrementalFieldNumber = 5,
  };
  using BuiltinCounterType = ::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType;
  using Unit = ::perfetto::protos::pbzero::CounterDescriptor_Unit;
  static const BuiltinCounterType COUNTER_UNSPECIFIED = CounterDescriptor_BuiltinCounterType_COUNTER_UNSPECIFIED;
  static const BuiltinCounterType COUNTER_THREAD_TIME_NS = CounterDescriptor_BuiltinCounterType_COUNTER_THREAD_TIME_NS;
  static const BuiltinCounterType COUNTER_THREAD_INSTRUCTION_COUNT = CounterDescriptor_BuiltinCounterType_COUNTER_THREAD_INSTRUCTION_COUNT;
  static const Unit UNIT_UNSPECIFIED = CounterDescriptor_Unit_UNIT_UNSPECIFIED;
  static const Unit UNIT_TIME_NS = CounterDescriptor_Unit_UNIT_TIME_NS;
  static const Unit UNIT_COUNT = CounterDescriptor_Unit_UNIT_COUNT;
  static const Unit UNIT_SIZE_BYTES = CounterDescriptor_Unit_UNIT_SIZE_BYTES;

  using FieldMetadata_Type =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType,
      CounterDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Type kType() { return {}; }
  void set_type(::perfetto::protos::pbzero::CounterDescriptor_BuiltinCounterType value) {
    static constexpr uint32_t field_id = FieldMetadata_Type::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Categories =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      CounterDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Categories kCategories() { return {}; }
  void add_categories(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Categories::kFieldId, data, size);
  }
  void add_categories(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Categories::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Unit =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::CounterDescriptor_Unit,
      CounterDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Unit kUnit() { return {}; }
  void set_unit(::perfetto::protos::pbzero::CounterDescriptor_Unit value) {
    static constexpr uint32_t field_id = FieldMetadata_Unit::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_UnitName =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      CounterDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_UnitName kUnitName() { return {}; }
  void set_unit_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_UnitName::kFieldId, data, size);
  }
  void set_unit_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_UnitName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_UnitMultiplier =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      CounterDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_UnitMultiplier kUnitMultiplier() { return {}; }
  void set_unit_multiplier(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_UnitMultiplier::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IsIncremental =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      CounterDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_IsIncremental kIsIncremental() { return {}; }
  void set_is_incremental(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_IsIncremental::kFieldId;
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
