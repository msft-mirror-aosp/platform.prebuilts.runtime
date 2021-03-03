// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYS_STATS_SYS_STATS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_SYS_STATS_SYS_STATS_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class SysStats_CpuTimes;
class SysStats_InterruptCount;
class SysStats_MeminfoValue;
class SysStats_VmstatValue;
enum MeminfoCounters : int32_t;
enum VmstatCounters : int32_t;

class SysStats_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/9, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  SysStats_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SysStats_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SysStats_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_meminfo() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> meminfo() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_vmstat() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> vmstat() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_cpu_stat() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> cpu_stat() const { return GetRepeated<::protozero::ConstBytes>(3); }
  bool has_num_forks() const { return at<4>().valid(); }
  uint64_t num_forks() const { return at<4>().as_uint64(); }
  bool has_num_irq_total() const { return at<5>().valid(); }
  uint64_t num_irq_total() const { return at<5>().as_uint64(); }
  bool has_num_irq() const { return at<6>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> num_irq() const { return GetRepeated<::protozero::ConstBytes>(6); }
  bool has_num_softirq_total() const { return at<7>().valid(); }
  uint64_t num_softirq_total() const { return at<7>().as_uint64(); }
  bool has_num_softirq() const { return at<8>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> num_softirq() const { return GetRepeated<::protozero::ConstBytes>(8); }
  bool has_collection_end_timestamp() const { return at<9>().valid(); }
  uint64_t collection_end_timestamp() const { return at<9>().as_uint64(); }
};

class SysStats : public ::protozero::Message {
 public:
  using Decoder = SysStats_Decoder;
  enum : int32_t {
    kMeminfoFieldNumber = 1,
    kVmstatFieldNumber = 2,
    kCpuStatFieldNumber = 3,
    kNumForksFieldNumber = 4,
    kNumIrqTotalFieldNumber = 5,
    kNumIrqFieldNumber = 6,
    kNumSoftirqTotalFieldNumber = 7,
    kNumSoftirqFieldNumber = 8,
    kCollectionEndTimestampFieldNumber = 9,
  };
  using MeminfoValue = ::perfetto::protos::pbzero::SysStats_MeminfoValue;
  using VmstatValue = ::perfetto::protos::pbzero::SysStats_VmstatValue;
  using CpuTimes = ::perfetto::protos::pbzero::SysStats_CpuTimes;
  using InterruptCount = ::perfetto::protos::pbzero::SysStats_InterruptCount;
  template <typename T = SysStats_MeminfoValue> T* add_meminfo() {
    return BeginNestedMessage<T>(1);
  }

  template <typename T = SysStats_VmstatValue> T* add_vmstat() {
    return BeginNestedMessage<T>(2);
  }

  template <typename T = SysStats_CpuTimes> T* add_cpu_stat() {
    return BeginNestedMessage<T>(3);
  }

  void set_num_forks(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_num_irq_total(uint64_t value) {
    AppendVarInt(5, value);
  }
  template <typename T = SysStats_InterruptCount> T* add_num_irq() {
    return BeginNestedMessage<T>(6);
  }

  void set_num_softirq_total(uint64_t value) {
    AppendVarInt(7, value);
  }
  template <typename T = SysStats_InterruptCount> T* add_num_softirq() {
    return BeginNestedMessage<T>(8);
  }

  void set_collection_end_timestamp(uint64_t value) {
    AppendVarInt(9, value);
  }
};

class SysStats_InterruptCount_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SysStats_InterruptCount_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SysStats_InterruptCount_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SysStats_InterruptCount_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_irq() const { return at<1>().valid(); }
  int32_t irq() const { return at<1>().as_int32(); }
  bool has_count() const { return at<2>().valid(); }
  uint64_t count() const { return at<2>().as_uint64(); }
};

class SysStats_InterruptCount : public ::protozero::Message {
 public:
  using Decoder = SysStats_InterruptCount_Decoder;
  enum : int32_t {
    kIrqFieldNumber = 1,
    kCountFieldNumber = 2,
  };
  void set_irq(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_count(uint64_t value) {
    AppendVarInt(2, value);
  }
};

class SysStats_CpuTimes_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/8, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SysStats_CpuTimes_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SysStats_CpuTimes_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SysStats_CpuTimes_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cpu_id() const { return at<1>().valid(); }
  uint32_t cpu_id() const { return at<1>().as_uint32(); }
  bool has_user_ns() const { return at<2>().valid(); }
  uint64_t user_ns() const { return at<2>().as_uint64(); }
  bool has_user_ice_ns() const { return at<3>().valid(); }
  uint64_t user_ice_ns() const { return at<3>().as_uint64(); }
  bool has_system_mode_ns() const { return at<4>().valid(); }
  uint64_t system_mode_ns() const { return at<4>().as_uint64(); }
  bool has_idle_ns() const { return at<5>().valid(); }
  uint64_t idle_ns() const { return at<5>().as_uint64(); }
  bool has_io_wait_ns() const { return at<6>().valid(); }
  uint64_t io_wait_ns() const { return at<6>().as_uint64(); }
  bool has_irq_ns() const { return at<7>().valid(); }
  uint64_t irq_ns() const { return at<7>().as_uint64(); }
  bool has_softirq_ns() const { return at<8>().valid(); }
  uint64_t softirq_ns() const { return at<8>().as_uint64(); }
};

class SysStats_CpuTimes : public ::protozero::Message {
 public:
  using Decoder = SysStats_CpuTimes_Decoder;
  enum : int32_t {
    kCpuIdFieldNumber = 1,
    kUserNsFieldNumber = 2,
    kUserIceNsFieldNumber = 3,
    kSystemModeNsFieldNumber = 4,
    kIdleNsFieldNumber = 5,
    kIoWaitNsFieldNumber = 6,
    kIrqNsFieldNumber = 7,
    kSoftirqNsFieldNumber = 8,
  };
  void set_cpu_id(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_user_ns(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_user_ice_ns(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_system_mode_ns(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_idle_ns(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_io_wait_ns(uint64_t value) {
    AppendVarInt(6, value);
  }
  void set_irq_ns(uint64_t value) {
    AppendVarInt(7, value);
  }
  void set_softirq_ns(uint64_t value) {
    AppendVarInt(8, value);
  }
};

class SysStats_VmstatValue_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SysStats_VmstatValue_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SysStats_VmstatValue_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SysStats_VmstatValue_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_key() const { return at<1>().valid(); }
  int32_t key() const { return at<1>().as_int32(); }
  bool has_value() const { return at<2>().valid(); }
  uint64_t value() const { return at<2>().as_uint64(); }
};

class SysStats_VmstatValue : public ::protozero::Message {
 public:
  using Decoder = SysStats_VmstatValue_Decoder;
  enum : int32_t {
    kKeyFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  void set_key(::perfetto::protos::pbzero::VmstatCounters value) {
    AppendVarInt(1, value);
  }
  void set_value(uint64_t value) {
    AppendVarInt(2, value);
  }
};

class SysStats_MeminfoValue_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SysStats_MeminfoValue_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SysStats_MeminfoValue_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SysStats_MeminfoValue_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_key() const { return at<1>().valid(); }
  int32_t key() const { return at<1>().as_int32(); }
  bool has_value() const { return at<2>().valid(); }
  uint64_t value() const { return at<2>().as_uint64(); }
};

class SysStats_MeminfoValue : public ::protozero::Message {
 public:
  using Decoder = SysStats_MeminfoValue_Decoder;
  enum : int32_t {
    kKeyFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  void set_key(::perfetto::protos::pbzero::MeminfoCounters value) {
    AppendTinyVarInt(1, value);
  }
  void set_value(uint64_t value) {
    AppendVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.