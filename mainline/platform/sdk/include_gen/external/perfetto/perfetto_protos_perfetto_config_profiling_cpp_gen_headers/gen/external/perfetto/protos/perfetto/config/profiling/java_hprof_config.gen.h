// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_JAVA_HPROF_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_JAVA_HPROF_CONFIG_PROTO_CPP_H_

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
class JavaHprofConfig;
class JavaHprofConfig_ContinuousDumpConfig;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT JavaHprofConfig : public ::protozero::CppMessageObj {
 public:
  using ContinuousDumpConfig = JavaHprofConfig_ContinuousDumpConfig;
  enum FieldNumbers {
    kProcessCmdlineFieldNumber = 1,
    kPidFieldNumber = 2,
    kContinuousDumpConfigFieldNumber = 3,
    kMinAnonymousMemoryKbFieldNumber = 4,
    kDumpSmapsFieldNumber = 5,
    kIgnoredTypesFieldNumber = 6,
  };

  JavaHprofConfig();
  ~JavaHprofConfig() override;
  JavaHprofConfig(JavaHprofConfig&&) noexcept;
  JavaHprofConfig& operator=(JavaHprofConfig&&);
  JavaHprofConfig(const JavaHprofConfig&);
  JavaHprofConfig& operator=(const JavaHprofConfig&);
  bool operator==(const JavaHprofConfig&) const;
  bool operator!=(const JavaHprofConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

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

  bool has_continuous_dump_config() const { return _has_field_[3]; }
  const JavaHprofConfig_ContinuousDumpConfig& continuous_dump_config() const { return *continuous_dump_config_; }
  JavaHprofConfig_ContinuousDumpConfig* mutable_continuous_dump_config() { _has_field_.set(3); return continuous_dump_config_.get(); }

  bool has_min_anonymous_memory_kb() const { return _has_field_[4]; }
  uint32_t min_anonymous_memory_kb() const { return min_anonymous_memory_kb_; }
  void set_min_anonymous_memory_kb(uint32_t value) { min_anonymous_memory_kb_ = value; _has_field_.set(4); }

  bool has_dump_smaps() const { return _has_field_[5]; }
  bool dump_smaps() const { return dump_smaps_; }
  void set_dump_smaps(bool value) { dump_smaps_ = value; _has_field_.set(5); }

  const std::vector<std::string>& ignored_types() const { return ignored_types_; }
  std::vector<std::string>* mutable_ignored_types() { return &ignored_types_; }
  int ignored_types_size() const { return static_cast<int>(ignored_types_.size()); }
  void clear_ignored_types() { ignored_types_.clear(); }
  void add_ignored_types(std::string value) { ignored_types_.emplace_back(value); }
  std::string* add_ignored_types() { ignored_types_.emplace_back(); return &ignored_types_.back(); }

 private:
  std::vector<std::string> process_cmdline_;
  std::vector<uint64_t> pid_;
  ::protozero::CopyablePtr<JavaHprofConfig_ContinuousDumpConfig> continuous_dump_config_;
  uint32_t min_anonymous_memory_kb_{};
  bool dump_smaps_{};
  std::vector<std::string> ignored_types_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<7> _has_field_{};
};


class PERFETTO_EXPORT JavaHprofConfig_ContinuousDumpConfig : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kDumpPhaseMsFieldNumber = 1,
    kDumpIntervalMsFieldNumber = 2,
  };

  JavaHprofConfig_ContinuousDumpConfig();
  ~JavaHprofConfig_ContinuousDumpConfig() override;
  JavaHprofConfig_ContinuousDumpConfig(JavaHprofConfig_ContinuousDumpConfig&&) noexcept;
  JavaHprofConfig_ContinuousDumpConfig& operator=(JavaHprofConfig_ContinuousDumpConfig&&);
  JavaHprofConfig_ContinuousDumpConfig(const JavaHprofConfig_ContinuousDumpConfig&);
  JavaHprofConfig_ContinuousDumpConfig& operator=(const JavaHprofConfig_ContinuousDumpConfig&);
  bool operator==(const JavaHprofConfig_ContinuousDumpConfig&) const;
  bool operator!=(const JavaHprofConfig_ContinuousDumpConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_dump_phase_ms() const { return _has_field_[1]; }
  uint32_t dump_phase_ms() const { return dump_phase_ms_; }
  void set_dump_phase_ms(uint32_t value) { dump_phase_ms_ = value; _has_field_.set(1); }

  bool has_dump_interval_ms() const { return _has_field_[2]; }
  uint32_t dump_interval_ms() const { return dump_interval_ms_; }
  void set_dump_interval_ms(uint32_t value) { dump_interval_ms_ = value; _has_field_.set(2); }

 private:
  uint32_t dump_phase_ms_{};
  uint32_t dump_interval_ms_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_JAVA_HPROF_CONFIG_PROTO_CPP_H_
