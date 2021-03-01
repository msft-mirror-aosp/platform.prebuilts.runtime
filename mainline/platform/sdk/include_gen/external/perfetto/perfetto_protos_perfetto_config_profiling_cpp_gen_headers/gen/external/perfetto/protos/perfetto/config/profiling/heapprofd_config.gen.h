// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_HEAPPROFD_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_HEAPPROFD_CONFIG_PROTO_CPP_H_

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
class HeapprofdConfig;
class HeapprofdConfig_ContinuousDumpConfig;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT HeapprofdConfig : public ::protozero::CppMessageObj {
 public:
  using ContinuousDumpConfig = HeapprofdConfig_ContinuousDumpConfig;
  enum FieldNumbers {
    kSamplingIntervalBytesFieldNumber = 1,
    kAdaptiveSamplingShmemThresholdFieldNumber = 24,
    kAdaptiveSamplingMaxSamplingIntervalBytesFieldNumber = 25,
    kProcessCmdlineFieldNumber = 2,
    kPidFieldNumber = 4,
    kHeapsFieldNumber = 20,
    kStreamAllocationsFieldNumber = 23,
    kHeapSamplingIntervalsFieldNumber = 22,
    kAllHeapsFieldNumber = 21,
    kAllFieldNumber = 5,
    kMinAnonymousMemoryKbFieldNumber = 15,
    kMaxHeapprofdMemoryKbFieldNumber = 16,
    kMaxHeapprofdCpuSecsFieldNumber = 17,
    kSkipSymbolPrefixFieldNumber = 7,
    kContinuousDumpConfigFieldNumber = 6,
    kShmemSizeBytesFieldNumber = 8,
    kBlockClientFieldNumber = 9,
    kBlockClientTimeoutUsFieldNumber = 14,
    kNoStartupFieldNumber = 10,
    kNoRunningFieldNumber = 11,
    kDumpAtMaxFieldNumber = 13,
    kDisableForkTeardownFieldNumber = 18,
    kDisableVforkDetectionFieldNumber = 19,
  };

  HeapprofdConfig();
  ~HeapprofdConfig() override;
  HeapprofdConfig(HeapprofdConfig&&) noexcept;
  HeapprofdConfig& operator=(HeapprofdConfig&&);
  HeapprofdConfig(const HeapprofdConfig&);
  HeapprofdConfig& operator=(const HeapprofdConfig&);
  bool operator==(const HeapprofdConfig&) const;
  bool operator!=(const HeapprofdConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_sampling_interval_bytes() const { return _has_field_[1]; }
  uint64_t sampling_interval_bytes() const { return sampling_interval_bytes_; }
  void set_sampling_interval_bytes(uint64_t value) { sampling_interval_bytes_ = value; _has_field_.set(1); }

  bool has_adaptive_sampling_shmem_threshold() const { return _has_field_[24]; }
  uint64_t adaptive_sampling_shmem_threshold() const { return adaptive_sampling_shmem_threshold_; }
  void set_adaptive_sampling_shmem_threshold(uint64_t value) { adaptive_sampling_shmem_threshold_ = value; _has_field_.set(24); }

  bool has_adaptive_sampling_max_sampling_interval_bytes() const { return _has_field_[25]; }
  uint64_t adaptive_sampling_max_sampling_interval_bytes() const { return adaptive_sampling_max_sampling_interval_bytes_; }
  void set_adaptive_sampling_max_sampling_interval_bytes(uint64_t value) { adaptive_sampling_max_sampling_interval_bytes_ = value; _has_field_.set(25); }

  const std::vector<std::string>& process_cmdline() const { return process_cmdline_; }
  std::vector<std::string>* mutable_process_cmdline() { return &process_cmdline_; }
  int process_cmdline_size() const { return static_cast<int>(process_cmdline_.size()); }
  void clear_process_cmdline() { process_cmdline_.clear(); }
  void add_process_cmdline(std::string value) { process_cmdline_.emplace_back(value); }
  std::string* add_process_cmdline() { process_cmdline_.emplace_back(); return &process_cmdline_.back(); }

  const std::vector<uint64_t>& pid() const { return pid_; }
  std::vector<uint64_t>* mutable_pid() { return &pid_; }
  int pid_size() const { return static_cast<int>(pid_.size()); }
  void clear_pid() { pid_.clear(); }
  void add_pid(uint64_t value) { pid_.emplace_back(value); }
  uint64_t* add_pid() { pid_.emplace_back(); return &pid_.back(); }

  const std::vector<std::string>& heaps() const { return heaps_; }
  std::vector<std::string>* mutable_heaps() { return &heaps_; }
  int heaps_size() const { return static_cast<int>(heaps_.size()); }
  void clear_heaps() { heaps_.clear(); }
  void add_heaps(std::string value) { heaps_.emplace_back(value); }
  std::string* add_heaps() { heaps_.emplace_back(); return &heaps_.back(); }

  bool has_stream_allocations() const { return _has_field_[23]; }
  bool stream_allocations() const { return stream_allocations_; }
  void set_stream_allocations(bool value) { stream_allocations_ = value; _has_field_.set(23); }

  const std::vector<uint64_t>& heap_sampling_intervals() const { return heap_sampling_intervals_; }
  std::vector<uint64_t>* mutable_heap_sampling_intervals() { return &heap_sampling_intervals_; }
  int heap_sampling_intervals_size() const { return static_cast<int>(heap_sampling_intervals_.size()); }
  void clear_heap_sampling_intervals() { heap_sampling_intervals_.clear(); }
  void add_heap_sampling_intervals(uint64_t value) { heap_sampling_intervals_.emplace_back(value); }
  uint64_t* add_heap_sampling_intervals() { heap_sampling_intervals_.emplace_back(); return &heap_sampling_intervals_.back(); }

  bool has_all_heaps() const { return _has_field_[21]; }
  bool all_heaps() const { return all_heaps_; }
  void set_all_heaps(bool value) { all_heaps_ = value; _has_field_.set(21); }

  bool has_all() const { return _has_field_[5]; }
  bool all() const { return all_; }
  void set_all(bool value) { all_ = value; _has_field_.set(5); }

  bool has_min_anonymous_memory_kb() const { return _has_field_[15]; }
  uint32_t min_anonymous_memory_kb() const { return min_anonymous_memory_kb_; }
  void set_min_anonymous_memory_kb(uint32_t value) { min_anonymous_memory_kb_ = value; _has_field_.set(15); }

  bool has_max_heapprofd_memory_kb() const { return _has_field_[16]; }
  uint32_t max_heapprofd_memory_kb() const { return max_heapprofd_memory_kb_; }
  void set_max_heapprofd_memory_kb(uint32_t value) { max_heapprofd_memory_kb_ = value; _has_field_.set(16); }

  bool has_max_heapprofd_cpu_secs() const { return _has_field_[17]; }
  uint64_t max_heapprofd_cpu_secs() const { return max_heapprofd_cpu_secs_; }
  void set_max_heapprofd_cpu_secs(uint64_t value) { max_heapprofd_cpu_secs_ = value; _has_field_.set(17); }

  const std::vector<std::string>& skip_symbol_prefix() const { return skip_symbol_prefix_; }
  std::vector<std::string>* mutable_skip_symbol_prefix() { return &skip_symbol_prefix_; }
  int skip_symbol_prefix_size() const { return static_cast<int>(skip_symbol_prefix_.size()); }
  void clear_skip_symbol_prefix() { skip_symbol_prefix_.clear(); }
  void add_skip_symbol_prefix(std::string value) { skip_symbol_prefix_.emplace_back(value); }
  std::string* add_skip_symbol_prefix() { skip_symbol_prefix_.emplace_back(); return &skip_symbol_prefix_.back(); }

  bool has_continuous_dump_config() const { return _has_field_[6]; }
  const HeapprofdConfig_ContinuousDumpConfig& continuous_dump_config() const { return *continuous_dump_config_; }
  HeapprofdConfig_ContinuousDumpConfig* mutable_continuous_dump_config() { _has_field_.set(6); return continuous_dump_config_.get(); }

  bool has_shmem_size_bytes() const { return _has_field_[8]; }
  uint64_t shmem_size_bytes() const { return shmem_size_bytes_; }
  void set_shmem_size_bytes(uint64_t value) { shmem_size_bytes_ = value; _has_field_.set(8); }

  bool has_block_client() const { return _has_field_[9]; }
  bool block_client() const { return block_client_; }
  void set_block_client(bool value) { block_client_ = value; _has_field_.set(9); }

  bool has_block_client_timeout_us() const { return _has_field_[14]; }
  uint32_t block_client_timeout_us() const { return block_client_timeout_us_; }
  void set_block_client_timeout_us(uint32_t value) { block_client_timeout_us_ = value; _has_field_.set(14); }

  bool has_no_startup() const { return _has_field_[10]; }
  bool no_startup() const { return no_startup_; }
  void set_no_startup(bool value) { no_startup_ = value; _has_field_.set(10); }

  bool has_no_running() const { return _has_field_[11]; }
  bool no_running() const { return no_running_; }
  void set_no_running(bool value) { no_running_ = value; _has_field_.set(11); }

  bool has_dump_at_max() const { return _has_field_[13]; }
  bool dump_at_max() const { return dump_at_max_; }
  void set_dump_at_max(bool value) { dump_at_max_ = value; _has_field_.set(13); }

  bool has_disable_fork_teardown() const { return _has_field_[18]; }
  bool disable_fork_teardown() const { return disable_fork_teardown_; }
  void set_disable_fork_teardown(bool value) { disable_fork_teardown_ = value; _has_field_.set(18); }

  bool has_disable_vfork_detection() const { return _has_field_[19]; }
  bool disable_vfork_detection() const { return disable_vfork_detection_; }
  void set_disable_vfork_detection(bool value) { disable_vfork_detection_ = value; _has_field_.set(19); }

 private:
  uint64_t sampling_interval_bytes_{};
  uint64_t adaptive_sampling_shmem_threshold_{};
  uint64_t adaptive_sampling_max_sampling_interval_bytes_{};
  std::vector<std::string> process_cmdline_;
  std::vector<uint64_t> pid_;
  std::vector<std::string> heaps_;
  bool stream_allocations_{};
  std::vector<uint64_t> heap_sampling_intervals_;
  bool all_heaps_{};
  bool all_{};
  uint32_t min_anonymous_memory_kb_{};
  uint32_t max_heapprofd_memory_kb_{};
  uint64_t max_heapprofd_cpu_secs_{};
  std::vector<std::string> skip_symbol_prefix_;
  ::protozero::CopyablePtr<HeapprofdConfig_ContinuousDumpConfig> continuous_dump_config_;
  uint64_t shmem_size_bytes_{};
  bool block_client_{};
  uint32_t block_client_timeout_us_{};
  bool no_startup_{};
  bool no_running_{};
  bool dump_at_max_{};
  bool disable_fork_teardown_{};
  bool disable_vfork_detection_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<26> _has_field_{};
};


class PERFETTO_EXPORT HeapprofdConfig_ContinuousDumpConfig : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDumpPhaseMsFieldNumber = 5,
    kDumpIntervalMsFieldNumber = 6,
  };

  HeapprofdConfig_ContinuousDumpConfig();
  ~HeapprofdConfig_ContinuousDumpConfig() override;
  HeapprofdConfig_ContinuousDumpConfig(HeapprofdConfig_ContinuousDumpConfig&&) noexcept;
  HeapprofdConfig_ContinuousDumpConfig& operator=(HeapprofdConfig_ContinuousDumpConfig&&);
  HeapprofdConfig_ContinuousDumpConfig(const HeapprofdConfig_ContinuousDumpConfig&);
  HeapprofdConfig_ContinuousDumpConfig& operator=(const HeapprofdConfig_ContinuousDumpConfig&);
  bool operator==(const HeapprofdConfig_ContinuousDumpConfig&) const;
  bool operator!=(const HeapprofdConfig_ContinuousDumpConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_dump_phase_ms() const { return _has_field_[5]; }
  uint32_t dump_phase_ms() const { return dump_phase_ms_; }
  void set_dump_phase_ms(uint32_t value) { dump_phase_ms_ = value; _has_field_.set(5); }

  bool has_dump_interval_ms() const { return _has_field_[6]; }
  uint32_t dump_interval_ms() const { return dump_interval_ms_; }
  void set_dump_interval_ms(uint32_t value) { dump_interval_ms_ = value; _has_field_.set(6); }

 private:
  uint32_t dump_phase_ms_{};
  uint32_t dump_interval_ms_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_HEAPPROFD_CONFIG_PROTO_CPP_H_
