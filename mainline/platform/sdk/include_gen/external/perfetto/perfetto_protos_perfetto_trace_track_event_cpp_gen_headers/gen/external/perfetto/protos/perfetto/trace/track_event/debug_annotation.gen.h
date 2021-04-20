// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_DEBUG_ANNOTATION_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_DEBUG_ANNOTATION_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class DebugAnnotationName;
class DebugAnnotation;
class DebugAnnotation_NestedValue;
enum DebugAnnotation_NestedValue_NestedType : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum DebugAnnotation_NestedValue_NestedType : int {
  DebugAnnotation_NestedValue_NestedType_UNSPECIFIED = 0,
  DebugAnnotation_NestedValue_NestedType_DICT = 1,
  DebugAnnotation_NestedValue_NestedType_ARRAY = 2,
};

class PERFETTO_EXPORT DebugAnnotationName : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kIidFieldNumber = 1,
    kNameFieldNumber = 2,
  };

  DebugAnnotationName();
  ~DebugAnnotationName() override;
  DebugAnnotationName(DebugAnnotationName&&) noexcept;
  DebugAnnotationName& operator=(DebugAnnotationName&&);
  DebugAnnotationName(const DebugAnnotationName&);
  DebugAnnotationName& operator=(const DebugAnnotationName&);
  bool operator==(const DebugAnnotationName&) const;
  bool operator!=(const DebugAnnotationName& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_iid() const { return _has_field_[1]; }
  uint64_t iid() const { return iid_; }
  void set_iid(uint64_t value) { iid_ = value; _has_field_.set(1); }

  bool has_name() const { return _has_field_[2]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(2); }

 private:
  uint64_t iid_{};
  std::string name_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT DebugAnnotation : public ::protozero::CppMessageObj {
 public:
  using NestedValue = DebugAnnotation_NestedValue;
  enum FieldNumbers {
    kNameIidFieldNumber = 1,
    kNameFieldNumber = 10,
    kBoolValueFieldNumber = 2,
    kUintValueFieldNumber = 3,
    kIntValueFieldNumber = 4,
    kDoubleValueFieldNumber = 5,
    kStringValueFieldNumber = 6,
    kPointerValueFieldNumber = 7,
    kNestedValueFieldNumber = 8,
    kLegacyJsonValueFieldNumber = 9,
    kDictEntriesFieldNumber = 11,
    kArrayValuesFieldNumber = 12,
  };

  DebugAnnotation();
  ~DebugAnnotation() override;
  DebugAnnotation(DebugAnnotation&&) noexcept;
  DebugAnnotation& operator=(DebugAnnotation&&);
  DebugAnnotation(const DebugAnnotation&);
  DebugAnnotation& operator=(const DebugAnnotation&);
  bool operator==(const DebugAnnotation&) const;
  bool operator!=(const DebugAnnotation& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name_iid() const { return _has_field_[1]; }
  uint64_t name_iid() const { return name_iid_; }
  void set_name_iid(uint64_t value) { name_iid_ = value; _has_field_.set(1); }

  bool has_name() const { return _has_field_[10]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(10); }

  bool has_bool_value() const { return _has_field_[2]; }
  bool bool_value() const { return bool_value_; }
  void set_bool_value(bool value) { bool_value_ = value; _has_field_.set(2); }

  bool has_uint_value() const { return _has_field_[3]; }
  uint64_t uint_value() const { return uint_value_; }
  void set_uint_value(uint64_t value) { uint_value_ = value; _has_field_.set(3); }

  bool has_int_value() const { return _has_field_[4]; }
  int64_t int_value() const { return int_value_; }
  void set_int_value(int64_t value) { int_value_ = value; _has_field_.set(4); }

  bool has_double_value() const { return _has_field_[5]; }
  double double_value() const { return double_value_; }
  void set_double_value(double value) { double_value_ = value; _has_field_.set(5); }

  bool has_string_value() const { return _has_field_[6]; }
  const std::string& string_value() const { return string_value_; }
  void set_string_value(const std::string& value) { string_value_ = value; _has_field_.set(6); }

  bool has_pointer_value() const { return _has_field_[7]; }
  uint64_t pointer_value() const { return pointer_value_; }
  void set_pointer_value(uint64_t value) { pointer_value_ = value; _has_field_.set(7); }

  bool has_nested_value() const { return _has_field_[8]; }
  const DebugAnnotation_NestedValue& nested_value() const { return *nested_value_; }
  DebugAnnotation_NestedValue* mutable_nested_value() { _has_field_.set(8); return nested_value_.get(); }

  bool has_legacy_json_value() const { return _has_field_[9]; }
  const std::string& legacy_json_value() const { return legacy_json_value_; }
  void set_legacy_json_value(const std::string& value) { legacy_json_value_ = value; _has_field_.set(9); }

  const std::vector<DebugAnnotation>& dict_entries() const { return dict_entries_; }
  std::vector<DebugAnnotation>* mutable_dict_entries() { return &dict_entries_; }
  int dict_entries_size() const;
  void clear_dict_entries();
  DebugAnnotation* add_dict_entries();

  const std::vector<DebugAnnotation>& array_values() const { return array_values_; }
  std::vector<DebugAnnotation>* mutable_array_values() { return &array_values_; }
  int array_values_size() const;
  void clear_array_values();
  DebugAnnotation* add_array_values();

 private:
  uint64_t name_iid_{};
  std::string name_{};
  bool bool_value_{};
  uint64_t uint_value_{};
  int64_t int_value_{};
  double double_value_{};
  std::string string_value_{};
  uint64_t pointer_value_{};
  ::protozero::CopyablePtr<DebugAnnotation_NestedValue> nested_value_;
  std::string legacy_json_value_{};
  std::vector<DebugAnnotation> dict_entries_;
  std::vector<DebugAnnotation> array_values_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<13> _has_field_{};
};


class PERFETTO_EXPORT DebugAnnotation_NestedValue : public ::protozero::CppMessageObj {
 public:
  using NestedType = DebugAnnotation_NestedValue_NestedType;
  static constexpr auto UNSPECIFIED = DebugAnnotation_NestedValue_NestedType_UNSPECIFIED;
  static constexpr auto DICT = DebugAnnotation_NestedValue_NestedType_DICT;
  static constexpr auto ARRAY = DebugAnnotation_NestedValue_NestedType_ARRAY;
  static constexpr auto NestedType_MIN = DebugAnnotation_NestedValue_NestedType_UNSPECIFIED;
  static constexpr auto NestedType_MAX = DebugAnnotation_NestedValue_NestedType_ARRAY;
  enum FieldNumbers {
    kNestedTypeFieldNumber = 1,
    kDictKeysFieldNumber = 2,
    kDictValuesFieldNumber = 3,
    kArrayValuesFieldNumber = 4,
    kIntValueFieldNumber = 5,
    kDoubleValueFieldNumber = 6,
    kBoolValueFieldNumber = 7,
    kStringValueFieldNumber = 8,
  };

  DebugAnnotation_NestedValue();
  ~DebugAnnotation_NestedValue() override;
  DebugAnnotation_NestedValue(DebugAnnotation_NestedValue&&) noexcept;
  DebugAnnotation_NestedValue& operator=(DebugAnnotation_NestedValue&&);
  DebugAnnotation_NestedValue(const DebugAnnotation_NestedValue&);
  DebugAnnotation_NestedValue& operator=(const DebugAnnotation_NestedValue&);
  bool operator==(const DebugAnnotation_NestedValue&) const;
  bool operator!=(const DebugAnnotation_NestedValue& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_nested_type() const { return _has_field_[1]; }
  DebugAnnotation_NestedValue_NestedType nested_type() const { return nested_type_; }
  void set_nested_type(DebugAnnotation_NestedValue_NestedType value) { nested_type_ = value; _has_field_.set(1); }

  const std::vector<std::string>& dict_keys() const { return dict_keys_; }
  std::vector<std::string>* mutable_dict_keys() { return &dict_keys_; }
  int dict_keys_size() const { return static_cast<int>(dict_keys_.size()); }
  void clear_dict_keys() { dict_keys_.clear(); }
  void add_dict_keys(std::string value) { dict_keys_.emplace_back(value); }
  std::string* add_dict_keys() { dict_keys_.emplace_back(); return &dict_keys_.back(); }

  const std::vector<DebugAnnotation_NestedValue>& dict_values() const { return dict_values_; }
  std::vector<DebugAnnotation_NestedValue>* mutable_dict_values() { return &dict_values_; }
  int dict_values_size() const;
  void clear_dict_values();
  DebugAnnotation_NestedValue* add_dict_values();

  const std::vector<DebugAnnotation_NestedValue>& array_values() const { return array_values_; }
  std::vector<DebugAnnotation_NestedValue>* mutable_array_values() { return &array_values_; }
  int array_values_size() const;
  void clear_array_values();
  DebugAnnotation_NestedValue* add_array_values();

  bool has_int_value() const { return _has_field_[5]; }
  int64_t int_value() const { return int_value_; }
  void set_int_value(int64_t value) { int_value_ = value; _has_field_.set(5); }

  bool has_double_value() const { return _has_field_[6]; }
  double double_value() const { return double_value_; }
  void set_double_value(double value) { double_value_ = value; _has_field_.set(6); }

  bool has_bool_value() const { return _has_field_[7]; }
  bool bool_value() const { return bool_value_; }
  void set_bool_value(bool value) { bool_value_ = value; _has_field_.set(7); }

  bool has_string_value() const { return _has_field_[8]; }
  const std::string& string_value() const { return string_value_; }
  void set_string_value(const std::string& value) { string_value_ = value; _has_field_.set(8); }

 private:
  DebugAnnotation_NestedValue_NestedType nested_type_{};
  std::vector<std::string> dict_keys_;
  std::vector<DebugAnnotation_NestedValue> dict_values_;
  std::vector<DebugAnnotation_NestedValue> array_values_;
  int64_t int_value_{};
  double double_value_{};
  bool bool_value_{};
  std::string string_value_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<9> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_DEBUG_ANNOTATION_PROTO_CPP_H_
