// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_GPU_COUNTER_DESCRIPTOR_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_GPU_COUNTER_DESCRIPTOR_PROTO_CPP_H_

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
class GpuCounterDescriptor;
class GpuCounterDescriptor_GpuCounterBlock;
class GpuCounterDescriptor_GpuCounterSpec;
enum GpuCounterDescriptor_GpuCounterGroup : int;
enum GpuCounterDescriptor_MeasureUnit : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum GpuCounterDescriptor_GpuCounterGroup : int {
  GpuCounterDescriptor_GpuCounterGroup_UNCLASSIFIED = 0,
  GpuCounterDescriptor_GpuCounterGroup_SYSTEM = 1,
  GpuCounterDescriptor_GpuCounterGroup_VERTICES = 2,
  GpuCounterDescriptor_GpuCounterGroup_FRAGMENTS = 3,
  GpuCounterDescriptor_GpuCounterGroup_PRIMITIVES = 4,
  GpuCounterDescriptor_GpuCounterGroup_MEMORY = 5,
  GpuCounterDescriptor_GpuCounterGroup_COMPUTE = 6,
};
enum GpuCounterDescriptor_MeasureUnit : int {
  GpuCounterDescriptor_MeasureUnit_NONE = 0,
  GpuCounterDescriptor_MeasureUnit_BIT = 1,
  GpuCounterDescriptor_MeasureUnit_KILOBIT = 2,
  GpuCounterDescriptor_MeasureUnit_MEGABIT = 3,
  GpuCounterDescriptor_MeasureUnit_GIGABIT = 4,
  GpuCounterDescriptor_MeasureUnit_TERABIT = 5,
  GpuCounterDescriptor_MeasureUnit_PETABIT = 6,
  GpuCounterDescriptor_MeasureUnit_BYTE = 7,
  GpuCounterDescriptor_MeasureUnit_KILOBYTE = 8,
  GpuCounterDescriptor_MeasureUnit_MEGABYTE = 9,
  GpuCounterDescriptor_MeasureUnit_GIGABYTE = 10,
  GpuCounterDescriptor_MeasureUnit_TERABYTE = 11,
  GpuCounterDescriptor_MeasureUnit_PETABYTE = 12,
  GpuCounterDescriptor_MeasureUnit_HERTZ = 13,
  GpuCounterDescriptor_MeasureUnit_KILOHERTZ = 14,
  GpuCounterDescriptor_MeasureUnit_MEGAHERTZ = 15,
  GpuCounterDescriptor_MeasureUnit_GIGAHERTZ = 16,
  GpuCounterDescriptor_MeasureUnit_TERAHERTZ = 17,
  GpuCounterDescriptor_MeasureUnit_PETAHERTZ = 18,
  GpuCounterDescriptor_MeasureUnit_NANOSECOND = 19,
  GpuCounterDescriptor_MeasureUnit_MICROSECOND = 20,
  GpuCounterDescriptor_MeasureUnit_MILLISECOND = 21,
  GpuCounterDescriptor_MeasureUnit_SECOND = 22,
  GpuCounterDescriptor_MeasureUnit_MINUTE = 23,
  GpuCounterDescriptor_MeasureUnit_HOUR = 24,
  GpuCounterDescriptor_MeasureUnit_VERTEX = 25,
  GpuCounterDescriptor_MeasureUnit_PIXEL = 26,
  GpuCounterDescriptor_MeasureUnit_TRIANGLE = 27,
  GpuCounterDescriptor_MeasureUnit_PRIMITIVE = 38,
  GpuCounterDescriptor_MeasureUnit_FRAGMENT = 39,
  GpuCounterDescriptor_MeasureUnit_MILLIWATT = 28,
  GpuCounterDescriptor_MeasureUnit_WATT = 29,
  GpuCounterDescriptor_MeasureUnit_KILOWATT = 30,
  GpuCounterDescriptor_MeasureUnit_JOULE = 31,
  GpuCounterDescriptor_MeasureUnit_VOLT = 32,
  GpuCounterDescriptor_MeasureUnit_AMPERE = 33,
  GpuCounterDescriptor_MeasureUnit_CELSIUS = 34,
  GpuCounterDescriptor_MeasureUnit_FAHRENHEIT = 35,
  GpuCounterDescriptor_MeasureUnit_KELVIN = 36,
  GpuCounterDescriptor_MeasureUnit_PERCENT = 37,
  GpuCounterDescriptor_MeasureUnit_INSTRUCTION = 40,
};

class PERFETTO_EXPORT GpuCounterDescriptor : public ::protozero::CppMessageObj {
 public:
  using GpuCounterSpec = GpuCounterDescriptor_GpuCounterSpec;
  using GpuCounterBlock = GpuCounterDescriptor_GpuCounterBlock;
  using GpuCounterGroup = GpuCounterDescriptor_GpuCounterGroup;
  static constexpr auto UNCLASSIFIED = GpuCounterDescriptor_GpuCounterGroup_UNCLASSIFIED;
  static constexpr auto SYSTEM = GpuCounterDescriptor_GpuCounterGroup_SYSTEM;
  static constexpr auto VERTICES = GpuCounterDescriptor_GpuCounterGroup_VERTICES;
  static constexpr auto FRAGMENTS = GpuCounterDescriptor_GpuCounterGroup_FRAGMENTS;
  static constexpr auto PRIMITIVES = GpuCounterDescriptor_GpuCounterGroup_PRIMITIVES;
  static constexpr auto MEMORY = GpuCounterDescriptor_GpuCounterGroup_MEMORY;
  static constexpr auto COMPUTE = GpuCounterDescriptor_GpuCounterGroup_COMPUTE;
  static constexpr auto GpuCounterGroup_MIN = GpuCounterDescriptor_GpuCounterGroup_UNCLASSIFIED;
  static constexpr auto GpuCounterGroup_MAX = GpuCounterDescriptor_GpuCounterGroup_COMPUTE;
  using MeasureUnit = GpuCounterDescriptor_MeasureUnit;
  static constexpr auto NONE = GpuCounterDescriptor_MeasureUnit_NONE;
  static constexpr auto BIT = GpuCounterDescriptor_MeasureUnit_BIT;
  static constexpr auto KILOBIT = GpuCounterDescriptor_MeasureUnit_KILOBIT;
  static constexpr auto MEGABIT = GpuCounterDescriptor_MeasureUnit_MEGABIT;
  static constexpr auto GIGABIT = GpuCounterDescriptor_MeasureUnit_GIGABIT;
  static constexpr auto TERABIT = GpuCounterDescriptor_MeasureUnit_TERABIT;
  static constexpr auto PETABIT = GpuCounterDescriptor_MeasureUnit_PETABIT;
  static constexpr auto BYTE = GpuCounterDescriptor_MeasureUnit_BYTE;
  static constexpr auto KILOBYTE = GpuCounterDescriptor_MeasureUnit_KILOBYTE;
  static constexpr auto MEGABYTE = GpuCounterDescriptor_MeasureUnit_MEGABYTE;
  static constexpr auto GIGABYTE = GpuCounterDescriptor_MeasureUnit_GIGABYTE;
  static constexpr auto TERABYTE = GpuCounterDescriptor_MeasureUnit_TERABYTE;
  static constexpr auto PETABYTE = GpuCounterDescriptor_MeasureUnit_PETABYTE;
  static constexpr auto HERTZ = GpuCounterDescriptor_MeasureUnit_HERTZ;
  static constexpr auto KILOHERTZ = GpuCounterDescriptor_MeasureUnit_KILOHERTZ;
  static constexpr auto MEGAHERTZ = GpuCounterDescriptor_MeasureUnit_MEGAHERTZ;
  static constexpr auto GIGAHERTZ = GpuCounterDescriptor_MeasureUnit_GIGAHERTZ;
  static constexpr auto TERAHERTZ = GpuCounterDescriptor_MeasureUnit_TERAHERTZ;
  static constexpr auto PETAHERTZ = GpuCounterDescriptor_MeasureUnit_PETAHERTZ;
  static constexpr auto NANOSECOND = GpuCounterDescriptor_MeasureUnit_NANOSECOND;
  static constexpr auto MICROSECOND = GpuCounterDescriptor_MeasureUnit_MICROSECOND;
  static constexpr auto MILLISECOND = GpuCounterDescriptor_MeasureUnit_MILLISECOND;
  static constexpr auto SECOND = GpuCounterDescriptor_MeasureUnit_SECOND;
  static constexpr auto MINUTE = GpuCounterDescriptor_MeasureUnit_MINUTE;
  static constexpr auto HOUR = GpuCounterDescriptor_MeasureUnit_HOUR;
  static constexpr auto VERTEX = GpuCounterDescriptor_MeasureUnit_VERTEX;
  static constexpr auto PIXEL = GpuCounterDescriptor_MeasureUnit_PIXEL;
  static constexpr auto TRIANGLE = GpuCounterDescriptor_MeasureUnit_TRIANGLE;
  static constexpr auto PRIMITIVE = GpuCounterDescriptor_MeasureUnit_PRIMITIVE;
  static constexpr auto FRAGMENT = GpuCounterDescriptor_MeasureUnit_FRAGMENT;
  static constexpr auto MILLIWATT = GpuCounterDescriptor_MeasureUnit_MILLIWATT;
  static constexpr auto WATT = GpuCounterDescriptor_MeasureUnit_WATT;
  static constexpr auto KILOWATT = GpuCounterDescriptor_MeasureUnit_KILOWATT;
  static constexpr auto JOULE = GpuCounterDescriptor_MeasureUnit_JOULE;
  static constexpr auto VOLT = GpuCounterDescriptor_MeasureUnit_VOLT;
  static constexpr auto AMPERE = GpuCounterDescriptor_MeasureUnit_AMPERE;
  static constexpr auto CELSIUS = GpuCounterDescriptor_MeasureUnit_CELSIUS;
  static constexpr auto FAHRENHEIT = GpuCounterDescriptor_MeasureUnit_FAHRENHEIT;
  static constexpr auto KELVIN = GpuCounterDescriptor_MeasureUnit_KELVIN;
  static constexpr auto PERCENT = GpuCounterDescriptor_MeasureUnit_PERCENT;
  static constexpr auto INSTRUCTION = GpuCounterDescriptor_MeasureUnit_INSTRUCTION;
  static constexpr auto MeasureUnit_MIN = GpuCounterDescriptor_MeasureUnit_NONE;
  static constexpr auto MeasureUnit_MAX = GpuCounterDescriptor_MeasureUnit_INSTRUCTION;
  enum FieldNumbers {
    kSpecsFieldNumber = 1,
    kBlocksFieldNumber = 2,
    kMinSamplingPeriodNsFieldNumber = 3,
    kMaxSamplingPeriodNsFieldNumber = 4,
    kSupportsInstrumentedSamplingFieldNumber = 5,
  };

  GpuCounterDescriptor();
  ~GpuCounterDescriptor() override;
  GpuCounterDescriptor(GpuCounterDescriptor&&) noexcept;
  GpuCounterDescriptor& operator=(GpuCounterDescriptor&&);
  GpuCounterDescriptor(const GpuCounterDescriptor&);
  GpuCounterDescriptor& operator=(const GpuCounterDescriptor&);
  bool operator==(const GpuCounterDescriptor&) const;
  bool operator!=(const GpuCounterDescriptor& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<GpuCounterDescriptor_GpuCounterSpec>& specs() const { return specs_; }
  std::vector<GpuCounterDescriptor_GpuCounterSpec>* mutable_specs() { return &specs_; }
  int specs_size() const;
  void clear_specs();
  GpuCounterDescriptor_GpuCounterSpec* add_specs();

  const std::vector<GpuCounterDescriptor_GpuCounterBlock>& blocks() const { return blocks_; }
  std::vector<GpuCounterDescriptor_GpuCounterBlock>* mutable_blocks() { return &blocks_; }
  int blocks_size() const;
  void clear_blocks();
  GpuCounterDescriptor_GpuCounterBlock* add_blocks();

  bool has_min_sampling_period_ns() const { return _has_field_[3]; }
  uint64_t min_sampling_period_ns() const { return min_sampling_period_ns_; }
  void set_min_sampling_period_ns(uint64_t value) { min_sampling_period_ns_ = value; _has_field_.set(3); }

  bool has_max_sampling_period_ns() const { return _has_field_[4]; }
  uint64_t max_sampling_period_ns() const { return max_sampling_period_ns_; }
  void set_max_sampling_period_ns(uint64_t value) { max_sampling_period_ns_ = value; _has_field_.set(4); }

  bool has_supports_instrumented_sampling() const { return _has_field_[5]; }
  bool supports_instrumented_sampling() const { return supports_instrumented_sampling_; }
  void set_supports_instrumented_sampling(bool value) { supports_instrumented_sampling_ = value; _has_field_.set(5); }

 private:
  std::vector<GpuCounterDescriptor_GpuCounterSpec> specs_;
  std::vector<GpuCounterDescriptor_GpuCounterBlock> blocks_;
  uint64_t min_sampling_period_ns_{};
  uint64_t max_sampling_period_ns_{};
  bool supports_instrumented_sampling_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};


class PERFETTO_EXPORT GpuCounterDescriptor_GpuCounterBlock : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kBlockIdFieldNumber = 1,
    kBlockCapacityFieldNumber = 2,
    kNameFieldNumber = 3,
    kDescriptionFieldNumber = 4,
    kCounterIdsFieldNumber = 5,
  };

  GpuCounterDescriptor_GpuCounterBlock();
  ~GpuCounterDescriptor_GpuCounterBlock() override;
  GpuCounterDescriptor_GpuCounterBlock(GpuCounterDescriptor_GpuCounterBlock&&) noexcept;
  GpuCounterDescriptor_GpuCounterBlock& operator=(GpuCounterDescriptor_GpuCounterBlock&&);
  GpuCounterDescriptor_GpuCounterBlock(const GpuCounterDescriptor_GpuCounterBlock&);
  GpuCounterDescriptor_GpuCounterBlock& operator=(const GpuCounterDescriptor_GpuCounterBlock&);
  bool operator==(const GpuCounterDescriptor_GpuCounterBlock&) const;
  bool operator!=(const GpuCounterDescriptor_GpuCounterBlock& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_block_id() const { return _has_field_[1]; }
  uint32_t block_id() const { return block_id_; }
  void set_block_id(uint32_t value) { block_id_ = value; _has_field_.set(1); }

  bool has_block_capacity() const { return _has_field_[2]; }
  uint32_t block_capacity() const { return block_capacity_; }
  void set_block_capacity(uint32_t value) { block_capacity_ = value; _has_field_.set(2); }

  bool has_name() const { return _has_field_[3]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(3); }

  bool has_description() const { return _has_field_[4]; }
  const std::string& description() const { return description_; }
  void set_description(const std::string& value) { description_ = value; _has_field_.set(4); }

  const std::vector<uint32_t>& counter_ids() const { return counter_ids_; }
  std::vector<uint32_t>* mutable_counter_ids() { return &counter_ids_; }
  int counter_ids_size() const { return static_cast<int>(counter_ids_.size()); }
  void clear_counter_ids() { counter_ids_.clear(); }
  void add_counter_ids(uint32_t value) { counter_ids_.emplace_back(value); }
  uint32_t* add_counter_ids() { counter_ids_.emplace_back(); return &counter_ids_.back(); }

 private:
  uint32_t block_id_{};
  uint32_t block_capacity_{};
  std::string name_{};
  std::string description_{};
  std::vector<uint32_t> counter_ids_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<6> _has_field_{};
};


class PERFETTO_EXPORT GpuCounterDescriptor_GpuCounterSpec : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kCounterIdFieldNumber = 1,
    kNameFieldNumber = 2,
    kDescriptionFieldNumber = 3,
    kIntPeakValueFieldNumber = 5,
    kDoublePeakValueFieldNumber = 6,
    kNumeratorUnitsFieldNumber = 7,
    kDenominatorUnitsFieldNumber = 8,
    kSelectByDefaultFieldNumber = 9,
    kGroupsFieldNumber = 10,
  };

  GpuCounterDescriptor_GpuCounterSpec();
  ~GpuCounterDescriptor_GpuCounterSpec() override;
  GpuCounterDescriptor_GpuCounterSpec(GpuCounterDescriptor_GpuCounterSpec&&) noexcept;
  GpuCounterDescriptor_GpuCounterSpec& operator=(GpuCounterDescriptor_GpuCounterSpec&&);
  GpuCounterDescriptor_GpuCounterSpec(const GpuCounterDescriptor_GpuCounterSpec&);
  GpuCounterDescriptor_GpuCounterSpec& operator=(const GpuCounterDescriptor_GpuCounterSpec&);
  bool operator==(const GpuCounterDescriptor_GpuCounterSpec&) const;
  bool operator!=(const GpuCounterDescriptor_GpuCounterSpec& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_counter_id() const { return _has_field_[1]; }
  uint32_t counter_id() const { return counter_id_; }
  void set_counter_id(uint32_t value) { counter_id_ = value; _has_field_.set(1); }

  bool has_name() const { return _has_field_[2]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(2); }

  bool has_description() const { return _has_field_[3]; }
  const std::string& description() const { return description_; }
  void set_description(const std::string& value) { description_ = value; _has_field_.set(3); }

  bool has_int_peak_value() const { return _has_field_[5]; }
  int64_t int_peak_value() const { return int_peak_value_; }
  void set_int_peak_value(int64_t value) { int_peak_value_ = value; _has_field_.set(5); }

  bool has_double_peak_value() const { return _has_field_[6]; }
  double double_peak_value() const { return double_peak_value_; }
  void set_double_peak_value(double value) { double_peak_value_ = value; _has_field_.set(6); }

  const std::vector<GpuCounterDescriptor_MeasureUnit>& numerator_units() const { return numerator_units_; }
  std::vector<GpuCounterDescriptor_MeasureUnit>* mutable_numerator_units() { return &numerator_units_; }
  int numerator_units_size() const { return static_cast<int>(numerator_units_.size()); }
  void clear_numerator_units() { numerator_units_.clear(); }
  void add_numerator_units(GpuCounterDescriptor_MeasureUnit value) { numerator_units_.emplace_back(value); }
  GpuCounterDescriptor_MeasureUnit* add_numerator_units() { numerator_units_.emplace_back(); return &numerator_units_.back(); }

  const std::vector<GpuCounterDescriptor_MeasureUnit>& denominator_units() const { return denominator_units_; }
  std::vector<GpuCounterDescriptor_MeasureUnit>* mutable_denominator_units() { return &denominator_units_; }
  int denominator_units_size() const { return static_cast<int>(denominator_units_.size()); }
  void clear_denominator_units() { denominator_units_.clear(); }
  void add_denominator_units(GpuCounterDescriptor_MeasureUnit value) { denominator_units_.emplace_back(value); }
  GpuCounterDescriptor_MeasureUnit* add_denominator_units() { denominator_units_.emplace_back(); return &denominator_units_.back(); }

  bool has_select_by_default() const { return _has_field_[9]; }
  bool select_by_default() const { return select_by_default_; }
  void set_select_by_default(bool value) { select_by_default_ = value; _has_field_.set(9); }

  const std::vector<GpuCounterDescriptor_GpuCounterGroup>& groups() const { return groups_; }
  std::vector<GpuCounterDescriptor_GpuCounterGroup>* mutable_groups() { return &groups_; }
  int groups_size() const { return static_cast<int>(groups_.size()); }
  void clear_groups() { groups_.clear(); }
  void add_groups(GpuCounterDescriptor_GpuCounterGroup value) { groups_.emplace_back(value); }
  GpuCounterDescriptor_GpuCounterGroup* add_groups() { groups_.emplace_back(); return &groups_.back(); }

 private:
  uint32_t counter_id_{};
  std::string name_{};
  std::string description_{};
  int64_t int_peak_value_{};
  double double_peak_value_{};
  std::vector<GpuCounterDescriptor_MeasureUnit> numerator_units_;
  std::vector<GpuCounterDescriptor_MeasureUnit> denominator_units_;
  bool select_by_default_{};
  std::vector<GpuCounterDescriptor_GpuCounterGroup> groups_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<11> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_GPU_COUNTER_DESCRIPTOR_PROTO_CPP_H_
