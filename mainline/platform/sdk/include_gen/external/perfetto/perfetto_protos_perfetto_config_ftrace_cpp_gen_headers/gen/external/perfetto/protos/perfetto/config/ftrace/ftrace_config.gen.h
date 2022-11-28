// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_FTRACE_FTRACE_CONFIG_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_FTRACE_FTRACE_CONFIG_PROTO_CPP_H_

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
class FtraceConfig;
class FtraceConfig_PrintFilter;
class FtraceConfig_PrintFilter_Rule;
class FtraceConfig_CompactSchedConfig;
enum FtraceConfig_KsymsMemPolicy : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum FtraceConfig_KsymsMemPolicy : int {
  FtraceConfig_KsymsMemPolicy_KSYMS_UNSPECIFIED = 0,
  FtraceConfig_KsymsMemPolicy_KSYMS_CLEANUP_ON_STOP = 1,
  FtraceConfig_KsymsMemPolicy_KSYMS_RETAIN = 2,
};

class PERFETTO_EXPORT_COMPONENT FtraceConfig : public ::protozero::CppMessageObj {
 public:
  using CompactSchedConfig = FtraceConfig_CompactSchedConfig;
  using PrintFilter = FtraceConfig_PrintFilter;
  using KsymsMemPolicy = FtraceConfig_KsymsMemPolicy;
  static constexpr auto KSYMS_UNSPECIFIED = FtraceConfig_KsymsMemPolicy_KSYMS_UNSPECIFIED;
  static constexpr auto KSYMS_CLEANUP_ON_STOP = FtraceConfig_KsymsMemPolicy_KSYMS_CLEANUP_ON_STOP;
  static constexpr auto KSYMS_RETAIN = FtraceConfig_KsymsMemPolicy_KSYMS_RETAIN;
  static constexpr auto KsymsMemPolicy_MIN = FtraceConfig_KsymsMemPolicy_KSYMS_UNSPECIFIED;
  static constexpr auto KsymsMemPolicy_MAX = FtraceConfig_KsymsMemPolicy_KSYMS_RETAIN;
  enum FieldNumbers {
    kFtraceEventsFieldNumber = 1,
    kAtraceCategoriesFieldNumber = 2,
    kAtraceAppsFieldNumber = 3,
    kBufferSizeKbFieldNumber = 10,
    kDrainPeriodMsFieldNumber = 11,
    kCompactSchedFieldNumber = 12,
    kPrintFilterFieldNumber = 22,
    kSymbolizeKsymsFieldNumber = 13,
    kKsymsMemPolicyFieldNumber = 17,
    kInitializeKsymsSynchronouslyForTestingFieldNumber = 14,
    kThrottleRssStatFieldNumber = 15,
    kDisableGenericEventsFieldNumber = 16,
    kSyscallEventsFieldNumber = 18,
    kEnableFunctionGraphFieldNumber = 19,
    kFunctionFiltersFieldNumber = 20,
    kFunctionGraphRootsFieldNumber = 21,
    kPreserveFtraceBufferFieldNumber = 23,
  };

  FtraceConfig();
  ~FtraceConfig() override;
  FtraceConfig(FtraceConfig&&) noexcept;
  FtraceConfig& operator=(FtraceConfig&&);
  FtraceConfig(const FtraceConfig&);
  FtraceConfig& operator=(const FtraceConfig&);
  bool operator==(const FtraceConfig&) const;
  bool operator!=(const FtraceConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<std::string>& ftrace_events() const { return ftrace_events_; }
  std::vector<std::string>* mutable_ftrace_events() { return &ftrace_events_; }
  int ftrace_events_size() const { return static_cast<int>(ftrace_events_.size()); }
  void clear_ftrace_events() { ftrace_events_.clear(); }
  void add_ftrace_events(std::string value) { ftrace_events_.emplace_back(value); }
  std::string* add_ftrace_events() { ftrace_events_.emplace_back(); return &ftrace_events_.back(); }

  const std::vector<std::string>& atrace_categories() const { return atrace_categories_; }
  std::vector<std::string>* mutable_atrace_categories() { return &atrace_categories_; }
  int atrace_categories_size() const { return static_cast<int>(atrace_categories_.size()); }
  void clear_atrace_categories() { atrace_categories_.clear(); }
  void add_atrace_categories(std::string value) { atrace_categories_.emplace_back(value); }
  std::string* add_atrace_categories() { atrace_categories_.emplace_back(); return &atrace_categories_.back(); }

  const std::vector<std::string>& atrace_apps() const { return atrace_apps_; }
  std::vector<std::string>* mutable_atrace_apps() { return &atrace_apps_; }
  int atrace_apps_size() const { return static_cast<int>(atrace_apps_.size()); }
  void clear_atrace_apps() { atrace_apps_.clear(); }
  void add_atrace_apps(std::string value) { atrace_apps_.emplace_back(value); }
  std::string* add_atrace_apps() { atrace_apps_.emplace_back(); return &atrace_apps_.back(); }

  bool has_buffer_size_kb() const { return _has_field_[10]; }
  uint32_t buffer_size_kb() const { return buffer_size_kb_; }
  void set_buffer_size_kb(uint32_t value) { buffer_size_kb_ = value; _has_field_.set(10); }

  bool has_drain_period_ms() const { return _has_field_[11]; }
  uint32_t drain_period_ms() const { return drain_period_ms_; }
  void set_drain_period_ms(uint32_t value) { drain_period_ms_ = value; _has_field_.set(11); }

  bool has_compact_sched() const { return _has_field_[12]; }
  const FtraceConfig_CompactSchedConfig& compact_sched() const { return *compact_sched_; }
  FtraceConfig_CompactSchedConfig* mutable_compact_sched() { _has_field_.set(12); return compact_sched_.get(); }

  bool has_print_filter() const { return _has_field_[22]; }
  const FtraceConfig_PrintFilter& print_filter() const { return *print_filter_; }
  FtraceConfig_PrintFilter* mutable_print_filter() { _has_field_.set(22); return print_filter_.get(); }

  bool has_symbolize_ksyms() const { return _has_field_[13]; }
  bool symbolize_ksyms() const { return symbolize_ksyms_; }
  void set_symbolize_ksyms(bool value) { symbolize_ksyms_ = value; _has_field_.set(13); }

  bool has_ksyms_mem_policy() const { return _has_field_[17]; }
  FtraceConfig_KsymsMemPolicy ksyms_mem_policy() const { return ksyms_mem_policy_; }
  void set_ksyms_mem_policy(FtraceConfig_KsymsMemPolicy value) { ksyms_mem_policy_ = value; _has_field_.set(17); }

  bool has_initialize_ksyms_synchronously_for_testing() const { return _has_field_[14]; }
  bool initialize_ksyms_synchronously_for_testing() const { return initialize_ksyms_synchronously_for_testing_; }
  void set_initialize_ksyms_synchronously_for_testing(bool value) { initialize_ksyms_synchronously_for_testing_ = value; _has_field_.set(14); }

  bool has_throttle_rss_stat() const { return _has_field_[15]; }
  bool throttle_rss_stat() const { return throttle_rss_stat_; }
  void set_throttle_rss_stat(bool value) { throttle_rss_stat_ = value; _has_field_.set(15); }

  bool has_disable_generic_events() const { return _has_field_[16]; }
  bool disable_generic_events() const { return disable_generic_events_; }
  void set_disable_generic_events(bool value) { disable_generic_events_ = value; _has_field_.set(16); }

  const std::vector<std::string>& syscall_events() const { return syscall_events_; }
  std::vector<std::string>* mutable_syscall_events() { return &syscall_events_; }
  int syscall_events_size() const { return static_cast<int>(syscall_events_.size()); }
  void clear_syscall_events() { syscall_events_.clear(); }
  void add_syscall_events(std::string value) { syscall_events_.emplace_back(value); }
  std::string* add_syscall_events() { syscall_events_.emplace_back(); return &syscall_events_.back(); }

  bool has_enable_function_graph() const { return _has_field_[19]; }
  bool enable_function_graph() const { return enable_function_graph_; }
  void set_enable_function_graph(bool value) { enable_function_graph_ = value; _has_field_.set(19); }

  const std::vector<std::string>& function_filters() const { return function_filters_; }
  std::vector<std::string>* mutable_function_filters() { return &function_filters_; }
  int function_filters_size() const { return static_cast<int>(function_filters_.size()); }
  void clear_function_filters() { function_filters_.clear(); }
  void add_function_filters(std::string value) { function_filters_.emplace_back(value); }
  std::string* add_function_filters() { function_filters_.emplace_back(); return &function_filters_.back(); }

  const std::vector<std::string>& function_graph_roots() const { return function_graph_roots_; }
  std::vector<std::string>* mutable_function_graph_roots() { return &function_graph_roots_; }
  int function_graph_roots_size() const { return static_cast<int>(function_graph_roots_.size()); }
  void clear_function_graph_roots() { function_graph_roots_.clear(); }
  void add_function_graph_roots(std::string value) { function_graph_roots_.emplace_back(value); }
  std::string* add_function_graph_roots() { function_graph_roots_.emplace_back(); return &function_graph_roots_.back(); }

  bool has_preserve_ftrace_buffer() const { return _has_field_[23]; }
  bool preserve_ftrace_buffer() const { return preserve_ftrace_buffer_; }
  void set_preserve_ftrace_buffer(bool value) { preserve_ftrace_buffer_ = value; _has_field_.set(23); }

 private:
  std::vector<std::string> ftrace_events_;
  std::vector<std::string> atrace_categories_;
  std::vector<std::string> atrace_apps_;
  uint32_t buffer_size_kb_{};
  uint32_t drain_period_ms_{};
  ::protozero::CopyablePtr<FtraceConfig_CompactSchedConfig> compact_sched_;
  ::protozero::CopyablePtr<FtraceConfig_PrintFilter> print_filter_;
  bool symbolize_ksyms_{};
  FtraceConfig_KsymsMemPolicy ksyms_mem_policy_{};
  bool initialize_ksyms_synchronously_for_testing_{};
  bool throttle_rss_stat_{};
  bool disable_generic_events_{};
  std::vector<std::string> syscall_events_;
  bool enable_function_graph_{};
  std::vector<std::string> function_filters_;
  std::vector<std::string> function_graph_roots_;
  bool preserve_ftrace_buffer_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<24> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT FtraceConfig_PrintFilter : public ::protozero::CppMessageObj {
 public:
  using Rule = FtraceConfig_PrintFilter_Rule;
  enum FieldNumbers {
    kRulesFieldNumber = 1,
  };

  FtraceConfig_PrintFilter();
  ~FtraceConfig_PrintFilter() override;
  FtraceConfig_PrintFilter(FtraceConfig_PrintFilter&&) noexcept;
  FtraceConfig_PrintFilter& operator=(FtraceConfig_PrintFilter&&);
  FtraceConfig_PrintFilter(const FtraceConfig_PrintFilter&);
  FtraceConfig_PrintFilter& operator=(const FtraceConfig_PrintFilter&);
  bool operator==(const FtraceConfig_PrintFilter&) const;
  bool operator!=(const FtraceConfig_PrintFilter& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  const std::vector<FtraceConfig_PrintFilter_Rule>& rules() const { return rules_; }
  std::vector<FtraceConfig_PrintFilter_Rule>* mutable_rules() { return &rules_; }
  int rules_size() const;
  void clear_rules();
  FtraceConfig_PrintFilter_Rule* add_rules();

 private:
  std::vector<FtraceConfig_PrintFilter_Rule> rules_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT FtraceConfig_PrintFilter_Rule : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kPrefixFieldNumber = 1,
    kAllowFieldNumber = 2,
  };

  FtraceConfig_PrintFilter_Rule();
  ~FtraceConfig_PrintFilter_Rule() override;
  FtraceConfig_PrintFilter_Rule(FtraceConfig_PrintFilter_Rule&&) noexcept;
  FtraceConfig_PrintFilter_Rule& operator=(FtraceConfig_PrintFilter_Rule&&);
  FtraceConfig_PrintFilter_Rule(const FtraceConfig_PrintFilter_Rule&);
  FtraceConfig_PrintFilter_Rule& operator=(const FtraceConfig_PrintFilter_Rule&);
  bool operator==(const FtraceConfig_PrintFilter_Rule&) const;
  bool operator!=(const FtraceConfig_PrintFilter_Rule& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_prefix() const { return _has_field_[1]; }
  const std::string& prefix() const { return prefix_; }
  void set_prefix(const std::string& value) { prefix_ = value; _has_field_.set(1); }

  bool has_allow() const { return _has_field_[2]; }
  bool allow() const { return allow_; }
  void set_allow(bool value) { allow_ = value; _has_field_.set(2); }

 private:
  std::string prefix_{};
  bool allow_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT FtraceConfig_CompactSchedConfig : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kEnabledFieldNumber = 1,
  };

  FtraceConfig_CompactSchedConfig();
  ~FtraceConfig_CompactSchedConfig() override;
  FtraceConfig_CompactSchedConfig(FtraceConfig_CompactSchedConfig&&) noexcept;
  FtraceConfig_CompactSchedConfig& operator=(FtraceConfig_CompactSchedConfig&&);
  FtraceConfig_CompactSchedConfig(const FtraceConfig_CompactSchedConfig&);
  FtraceConfig_CompactSchedConfig& operator=(const FtraceConfig_CompactSchedConfig&);
  bool operator==(const FtraceConfig_CompactSchedConfig&) const;
  bool operator!=(const FtraceConfig_CompactSchedConfig& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_enabled() const { return _has_field_[1]; }
  bool enabled() const { return enabled_; }
  void set_enabled(bool value) { enabled_ = value; _has_field_.set(1); }

 private:
  bool enabled_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<2> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_FTRACE_FTRACE_CONFIG_PROTO_CPP_H_
