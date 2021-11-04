// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_PERF_EVENTS_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_PERF_EVENTS_PROTO_CPP_H_

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
class PerfEvents;
class PerfEvents_RawEvent;
class PerfEvents_Tracepoint;
class PerfEvents_Timebase;
enum PerfEvents_Counter : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum PerfEvents_Counter : int {
  PerfEvents_Counter_UNKNOWN_COUNTER = 0,
  PerfEvents_Counter_SW_CPU_CLOCK = 1,
  PerfEvents_Counter_SW_PAGE_FAULTS = 2,
  PerfEvents_Counter_HW_CPU_CYCLES = 10,
  PerfEvents_Counter_HW_INSTRUCTIONS = 11,
};

class PERFETTO_EXPORT PerfEvents : public ::protozero::CppMessageObj {
 public:
  using Timebase = PerfEvents_Timebase;
  using Tracepoint = PerfEvents_Tracepoint;
  using RawEvent = PerfEvents_RawEvent;
  using Counter = PerfEvents_Counter;
  static constexpr auto UNKNOWN_COUNTER = PerfEvents_Counter_UNKNOWN_COUNTER;
  static constexpr auto SW_CPU_CLOCK = PerfEvents_Counter_SW_CPU_CLOCK;
  static constexpr auto SW_PAGE_FAULTS = PerfEvents_Counter_SW_PAGE_FAULTS;
  static constexpr auto HW_CPU_CYCLES = PerfEvents_Counter_HW_CPU_CYCLES;
  static constexpr auto HW_INSTRUCTIONS = PerfEvents_Counter_HW_INSTRUCTIONS;
  static constexpr auto Counter_MIN = PerfEvents_Counter_UNKNOWN_COUNTER;
  static constexpr auto Counter_MAX = PerfEvents_Counter_HW_INSTRUCTIONS;
  enum FieldNumbers {
  };

  PerfEvents();
  ~PerfEvents() override;
  PerfEvents(PerfEvents&&) noexcept;
  PerfEvents& operator=(PerfEvents&&);
  PerfEvents(const PerfEvents&);
  PerfEvents& operator=(const PerfEvents&);
  bool operator==(const PerfEvents&) const;
  bool operator!=(const PerfEvents& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

 private:

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};


class PERFETTO_EXPORT PerfEvents_RawEvent : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kTypeFieldNumber = 1,
    kConfigFieldNumber = 2,
    kConfig1FieldNumber = 3,
    kConfig2FieldNumber = 4,
  };

  PerfEvents_RawEvent();
  ~PerfEvents_RawEvent() override;
  PerfEvents_RawEvent(PerfEvents_RawEvent&&) noexcept;
  PerfEvents_RawEvent& operator=(PerfEvents_RawEvent&&);
  PerfEvents_RawEvent(const PerfEvents_RawEvent&);
  PerfEvents_RawEvent& operator=(const PerfEvents_RawEvent&);
  bool operator==(const PerfEvents_RawEvent&) const;
  bool operator!=(const PerfEvents_RawEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_type() const { return _has_field_[1]; }
  uint32_t type() const { return type_; }
  void set_type(uint32_t value) { type_ = value; _has_field_.set(1); }

  bool has_config() const { return _has_field_[2]; }
  uint64_t config() const { return config_; }
  void set_config(uint64_t value) { config_ = value; _has_field_.set(2); }

  bool has_config1() const { return _has_field_[3]; }
  uint64_t config1() const { return config1_; }
  void set_config1(uint64_t value) { config1_ = value; _has_field_.set(3); }

  bool has_config2() const { return _has_field_[4]; }
  uint64_t config2() const { return config2_; }
  void set_config2(uint64_t value) { config2_ = value; _has_field_.set(4); }

 private:
  uint32_t type_{};
  uint64_t config_{};
  uint64_t config1_{};
  uint64_t config2_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT PerfEvents_Tracepoint : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kFilterFieldNumber = 2,
  };

  PerfEvents_Tracepoint();
  ~PerfEvents_Tracepoint() override;
  PerfEvents_Tracepoint(PerfEvents_Tracepoint&&) noexcept;
  PerfEvents_Tracepoint& operator=(PerfEvents_Tracepoint&&);
  PerfEvents_Tracepoint(const PerfEvents_Tracepoint&);
  PerfEvents_Tracepoint& operator=(const PerfEvents_Tracepoint&);
  bool operator==(const PerfEvents_Tracepoint&) const;
  bool operator!=(const PerfEvents_Tracepoint& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_filter() const { return _has_field_[2]; }
  const std::string& filter() const { return filter_; }
  void set_filter(const std::string& value) { filter_ = value; _has_field_.set(2); }

 private:
  std::string name_{};
  std::string filter_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT PerfEvents_Timebase : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kFrequencyFieldNumber = 2,
    kPeriodFieldNumber = 1,
    kCounterFieldNumber = 4,
    kTracepointFieldNumber = 3,
    kRawEventFieldNumber = 5,
    kNameFieldNumber = 10,
  };

  PerfEvents_Timebase();
  ~PerfEvents_Timebase() override;
  PerfEvents_Timebase(PerfEvents_Timebase&&) noexcept;
  PerfEvents_Timebase& operator=(PerfEvents_Timebase&&);
  PerfEvents_Timebase(const PerfEvents_Timebase&);
  PerfEvents_Timebase& operator=(const PerfEvents_Timebase&);
  bool operator==(const PerfEvents_Timebase&) const;
  bool operator!=(const PerfEvents_Timebase& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_frequency() const { return _has_field_[2]; }
  uint64_t frequency() const { return frequency_; }
  void set_frequency(uint64_t value) { frequency_ = value; _has_field_.set(2); }

  bool has_period() const { return _has_field_[1]; }
  uint64_t period() const { return period_; }
  void set_period(uint64_t value) { period_ = value; _has_field_.set(1); }

  bool has_counter() const { return _has_field_[4]; }
  PerfEvents_Counter counter() const { return counter_; }
  void set_counter(PerfEvents_Counter value) { counter_ = value; _has_field_.set(4); }

  bool has_tracepoint() const { return _has_field_[3]; }
  const PerfEvents_Tracepoint& tracepoint() const { return *tracepoint_; }
  PerfEvents_Tracepoint* mutable_tracepoint() { _has_field_.set(3); return tracepoint_.get(); }

  bool has_raw_event() const { return _has_field_[5]; }
  const PerfEvents_RawEvent& raw_event() const { return *raw_event_; }
  PerfEvents_RawEvent* mutable_raw_event() { _has_field_.set(5); return raw_event_.get(); }

  bool has_name() const { return _has_field_[10]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(10); }

 private:
  uint64_t frequency_{};
  uint64_t period_{};
  PerfEvents_Counter counter_{};
  ::protozero::CopyablePtr<PerfEvents_Tracepoint> tracepoint_;
  ::protozero::CopyablePtr<PerfEvents_RawEvent> raw_event_;
  std::string name_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<11> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_PERF_EVENTS_PROTO_CPP_H_
