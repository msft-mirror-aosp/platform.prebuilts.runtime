// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_PS_PROCESS_STATS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_PS_PROCESS_STATS_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class ProcessStats_Process;
class ProcessStats_Thread;

class ProcessStats_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ProcessStats_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ProcessStats_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ProcessStats_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_processes() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> processes() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_collection_end_timestamp() const { return at<2>().valid(); }
  uint64_t collection_end_timestamp() const { return at<2>().as_uint64(); }
};

class ProcessStats : public ::protozero::Message {
 public:
  using Decoder = ProcessStats_Decoder;
  enum : int32_t {
    kProcessesFieldNumber = 1,
    kCollectionEndTimestampFieldNumber = 2,
  };
  using Thread = ::perfetto::protos::pbzero::ProcessStats_Thread;
  using Process = ::perfetto::protos::pbzero::ProcessStats_Process;
  template <typename T = ProcessStats_Process> T* add_processes() {
    return BeginNestedMessage<T>(1);
  }

  void set_collection_end_timestamp(uint64_t value) {
    AppendVarInt(2, value);
  }
};

class ProcessStats_Process_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/14, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ProcessStats_Process_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ProcessStats_Process_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ProcessStats_Process_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pid() const { return at<1>().valid(); }
  int32_t pid() const { return at<1>().as_int32(); }
  bool has_vm_size_kb() const { return at<2>().valid(); }
  uint64_t vm_size_kb() const { return at<2>().as_uint64(); }
  bool has_vm_rss_kb() const { return at<3>().valid(); }
  uint64_t vm_rss_kb() const { return at<3>().as_uint64(); }
  bool has_rss_anon_kb() const { return at<4>().valid(); }
  uint64_t rss_anon_kb() const { return at<4>().as_uint64(); }
  bool has_rss_file_kb() const { return at<5>().valid(); }
  uint64_t rss_file_kb() const { return at<5>().as_uint64(); }
  bool has_rss_shmem_kb() const { return at<6>().valid(); }
  uint64_t rss_shmem_kb() const { return at<6>().as_uint64(); }
  bool has_vm_swap_kb() const { return at<7>().valid(); }
  uint64_t vm_swap_kb() const { return at<7>().as_uint64(); }
  bool has_vm_locked_kb() const { return at<8>().valid(); }
  uint64_t vm_locked_kb() const { return at<8>().as_uint64(); }
  bool has_vm_hwm_kb() const { return at<9>().valid(); }
  uint64_t vm_hwm_kb() const { return at<9>().as_uint64(); }
  bool has_oom_score_adj() const { return at<10>().valid(); }
  int64_t oom_score_adj() const { return at<10>().as_int64(); }
  bool has_threads() const { return at<11>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> threads() const { return GetRepeated<::protozero::ConstBytes>(11); }
  bool has_is_peak_rss_resettable() const { return at<12>().valid(); }
  bool is_peak_rss_resettable() const { return at<12>().as_bool(); }
  bool has_chrome_private_footprint_kb() const { return at<13>().valid(); }
  uint32_t chrome_private_footprint_kb() const { return at<13>().as_uint32(); }
  bool has_chrome_peak_resident_set_kb() const { return at<14>().valid(); }
  uint32_t chrome_peak_resident_set_kb() const { return at<14>().as_uint32(); }
};

class ProcessStats_Process : public ::protozero::Message {
 public:
  using Decoder = ProcessStats_Process_Decoder;
  enum : int32_t {
    kPidFieldNumber = 1,
    kVmSizeKbFieldNumber = 2,
    kVmRssKbFieldNumber = 3,
    kRssAnonKbFieldNumber = 4,
    kRssFileKbFieldNumber = 5,
    kRssShmemKbFieldNumber = 6,
    kVmSwapKbFieldNumber = 7,
    kVmLockedKbFieldNumber = 8,
    kVmHwmKbFieldNumber = 9,
    kOomScoreAdjFieldNumber = 10,
    kThreadsFieldNumber = 11,
    kIsPeakRssResettableFieldNumber = 12,
    kChromePrivateFootprintKbFieldNumber = 13,
    kChromePeakResidentSetKbFieldNumber = 14,
  };
  void set_pid(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_vm_size_kb(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_vm_rss_kb(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_rss_anon_kb(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_rss_file_kb(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_rss_shmem_kb(uint64_t value) {
    AppendVarInt(6, value);
  }
  void set_vm_swap_kb(uint64_t value) {
    AppendVarInt(7, value);
  }
  void set_vm_locked_kb(uint64_t value) {
    AppendVarInt(8, value);
  }
  void set_vm_hwm_kb(uint64_t value) {
    AppendVarInt(9, value);
  }
  void set_oom_score_adj(int64_t value) {
    AppendVarInt(10, value);
  }
  template <typename T = ProcessStats_Thread> T* add_threads() {
    return BeginNestedMessage<T>(11);
  }

  void set_is_peak_rss_resettable(bool value) {
    AppendTinyVarInt(12, value);
  }
  void set_chrome_private_footprint_kb(uint32_t value) {
    AppendVarInt(13, value);
  }
  void set_chrome_peak_resident_set_kb(uint32_t value) {
    AppendVarInt(14, value);
  }
};

class ProcessStats_Thread_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ProcessStats_Thread_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ProcessStats_Thread_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ProcessStats_Thread_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_tid() const { return at<1>().valid(); }
  int32_t tid() const { return at<1>().as_int32(); }
  bool has_cpu_freq_indices() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<uint32_t> cpu_freq_indices() const { return GetRepeated<uint32_t>(2); }
  bool has_cpu_freq_ticks() const { return at<3>().valid(); }
  ::protozero::RepeatedFieldIterator<uint64_t> cpu_freq_ticks() const { return GetRepeated<uint64_t>(3); }
  bool has_cpu_freq_full() const { return at<4>().valid(); }
  bool cpu_freq_full() const { return at<4>().as_bool(); }
};

class ProcessStats_Thread : public ::protozero::Message {
 public:
  using Decoder = ProcessStats_Thread_Decoder;
  enum : int32_t {
    kTidFieldNumber = 1,
    kCpuFreqIndicesFieldNumber = 2,
    kCpuFreqTicksFieldNumber = 3,
    kCpuFreqFullFieldNumber = 4,
  };
  void set_tid(int32_t value) {
    AppendVarInt(1, value);
  }
  void add_cpu_freq_indices(uint32_t value) {
    AppendVarInt(2, value);
  }
  void add_cpu_freq_ticks(uint64_t value) {
    AppendVarInt(3, value);
  }
  void set_cpu_freq_full(bool value) {
    AppendTinyVarInt(4, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
