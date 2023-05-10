// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_HEAPPROFD_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_HEAPPROFD_CONFIG_PROTO_H_

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

class HeapprofdConfig_ContinuousDumpConfig;

class HeapprofdConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/27, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  HeapprofdConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit HeapprofdConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit HeapprofdConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_sampling_interval_bytes() const { return at<1>().valid(); }
  uint64_t sampling_interval_bytes() const { return at<1>().as_uint64(); }
  bool has_adaptive_sampling_shmem_threshold() const { return at<24>().valid(); }
  uint64_t adaptive_sampling_shmem_threshold() const { return at<24>().as_uint64(); }
  bool has_adaptive_sampling_max_sampling_interval_bytes() const { return at<25>().valid(); }
  uint64_t adaptive_sampling_max_sampling_interval_bytes() const { return at<25>().as_uint64(); }
  bool has_process_cmdline() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> process_cmdline() const { return GetRepeated<::protozero::ConstChars>(2); }
  bool has_pid() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<uint64_t> pid() const { return GetRepeated<uint64_t>(4); }
  bool has_target_installed_by() const { return at<26>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> target_installed_by() const { return GetRepeated<::protozero::ConstChars>(26); }
  bool has_heaps() const { return at<20>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> heaps() const { return GetRepeated<::protozero::ConstChars>(20); }
  bool has_exclude_heaps() const { return at<27>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> exclude_heaps() const { return GetRepeated<::protozero::ConstChars>(27); }
  bool has_stream_allocations() const { return at<23>().valid(); }
  bool stream_allocations() const { return at<23>().as_bool(); }
  bool has_heap_sampling_intervals() const { return at<22>().valid(); }
  ::protozero::RepeatedFieldIterator<uint64_t> heap_sampling_intervals() const { return GetRepeated<uint64_t>(22); }
  bool has_all_heaps() const { return at<21>().valid(); }
  bool all_heaps() const { return at<21>().as_bool(); }
  bool has_all() const { return at<5>().valid(); }
  bool all() const { return at<5>().as_bool(); }
  bool has_min_anonymous_memory_kb() const { return at<15>().valid(); }
  uint32_t min_anonymous_memory_kb() const { return at<15>().as_uint32(); }
  bool has_max_heapprofd_memory_kb() const { return at<16>().valid(); }
  uint32_t max_heapprofd_memory_kb() const { return at<16>().as_uint32(); }
  bool has_max_heapprofd_cpu_secs() const { return at<17>().valid(); }
  uint64_t max_heapprofd_cpu_secs() const { return at<17>().as_uint64(); }
  bool has_skip_symbol_prefix() const { return at<7>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> skip_symbol_prefix() const { return GetRepeated<::protozero::ConstChars>(7); }
  bool has_continuous_dump_config() const { return at<6>().valid(); }
  ::protozero::ConstBytes continuous_dump_config() const { return at<6>().as_bytes(); }
  bool has_shmem_size_bytes() const { return at<8>().valid(); }
  uint64_t shmem_size_bytes() const { return at<8>().as_uint64(); }
  bool has_block_client() const { return at<9>().valid(); }
  bool block_client() const { return at<9>().as_bool(); }
  bool has_block_client_timeout_us() const { return at<14>().valid(); }
  uint32_t block_client_timeout_us() const { return at<14>().as_uint32(); }
  bool has_no_startup() const { return at<10>().valid(); }
  bool no_startup() const { return at<10>().as_bool(); }
  bool has_no_running() const { return at<11>().valid(); }
  bool no_running() const { return at<11>().as_bool(); }
  bool has_dump_at_max() const { return at<13>().valid(); }
  bool dump_at_max() const { return at<13>().as_bool(); }
  bool has_disable_fork_teardown() const { return at<18>().valid(); }
  bool disable_fork_teardown() const { return at<18>().as_bool(); }
  bool has_disable_vfork_detection() const { return at<19>().valid(); }
  bool disable_vfork_detection() const { return at<19>().as_bool(); }
};

class HeapprofdConfig : public ::protozero::Message {
 public:
  using Decoder = HeapprofdConfig_Decoder;
  enum : int32_t {
    kSamplingIntervalBytesFieldNumber = 1,
    kAdaptiveSamplingShmemThresholdFieldNumber = 24,
    kAdaptiveSamplingMaxSamplingIntervalBytesFieldNumber = 25,
    kProcessCmdlineFieldNumber = 2,
    kPidFieldNumber = 4,
    kTargetInstalledByFieldNumber = 26,
    kHeapsFieldNumber = 20,
    kExcludeHeapsFieldNumber = 27,
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
  static constexpr const char* GetName() { return ".perfetto.protos.HeapprofdConfig"; }

  using ContinuousDumpConfig = ::perfetto::protos::pbzero::HeapprofdConfig_ContinuousDumpConfig;

  using FieldMetadata_SamplingIntervalBytes =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_SamplingIntervalBytes kSamplingIntervalBytes() { return {}; }
  void set_sampling_interval_bytes(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_SamplingIntervalBytes::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AdaptiveSamplingShmemThreshold =
    ::protozero::proto_utils::FieldMetadata<
      24,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AdaptiveSamplingShmemThreshold kAdaptiveSamplingShmemThreshold() { return {}; }
  void set_adaptive_sampling_shmem_threshold(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_AdaptiveSamplingShmemThreshold::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AdaptiveSamplingMaxSamplingIntervalBytes =
    ::protozero::proto_utils::FieldMetadata<
      25,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AdaptiveSamplingMaxSamplingIntervalBytes kAdaptiveSamplingMaxSamplingIntervalBytes() { return {}; }
  void set_adaptive_sampling_max_sampling_interval_bytes(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_AdaptiveSamplingMaxSamplingIntervalBytes::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProcessCmdline =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ProcessCmdline kProcessCmdline() { return {}; }
  void add_process_cmdline(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ProcessCmdline::kFieldId, data, size);
  }
  void add_process_cmdline(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ProcessCmdline::kFieldId, chars.data, chars.size);
  }
  void add_process_cmdline(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ProcessCmdline::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Pid kPid() { return {}; }
  void add_pid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TargetInstalledBy =
    ::protozero::proto_utils::FieldMetadata<
      26,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_TargetInstalledBy kTargetInstalledBy() { return {}; }
  void add_target_installed_by(const char* data, size_t size) {
    AppendBytes(FieldMetadata_TargetInstalledBy::kFieldId, data, size);
  }
  void add_target_installed_by(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_TargetInstalledBy::kFieldId, chars.data, chars.size);
  }
  void add_target_installed_by(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_TargetInstalledBy::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Heaps =
    ::protozero::proto_utils::FieldMetadata<
      20,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Heaps kHeaps() { return {}; }
  void add_heaps(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Heaps::kFieldId, data, size);
  }
  void add_heaps(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Heaps::kFieldId, chars.data, chars.size);
  }
  void add_heaps(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Heaps::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ExcludeHeaps =
    ::protozero::proto_utils::FieldMetadata<
      27,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ExcludeHeaps kExcludeHeaps() { return {}; }
  void add_exclude_heaps(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ExcludeHeaps::kFieldId, data, size);
  }
  void add_exclude_heaps(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_ExcludeHeaps::kFieldId, chars.data, chars.size);
  }
  void add_exclude_heaps(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ExcludeHeaps::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_StreamAllocations =
    ::protozero::proto_utils::FieldMetadata<
      23,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_StreamAllocations kStreamAllocations() { return {}; }
  void set_stream_allocations(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_StreamAllocations::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HeapSamplingIntervals =
    ::protozero::proto_utils::FieldMetadata<
      22,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HeapSamplingIntervals kHeapSamplingIntervals() { return {}; }
  void add_heap_sampling_intervals(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_HeapSamplingIntervals::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AllHeaps =
    ::protozero::proto_utils::FieldMetadata<
      21,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AllHeaps kAllHeaps() { return {}; }
  void set_all_heaps(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_AllHeaps::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_All =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_All kAll() { return {}; }
  void set_all(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_All::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_MinAnonymousMemoryKb =
    ::protozero::proto_utils::FieldMetadata<
      15,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_MinAnonymousMemoryKb kMinAnonymousMemoryKb() { return {}; }
  void set_min_anonymous_memory_kb(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_MinAnonymousMemoryKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_MaxHeapprofdMemoryKb =
    ::protozero::proto_utils::FieldMetadata<
      16,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_MaxHeapprofdMemoryKb kMaxHeapprofdMemoryKb() { return {}; }
  void set_max_heapprofd_memory_kb(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_MaxHeapprofdMemoryKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_MaxHeapprofdCpuSecs =
    ::protozero::proto_utils::FieldMetadata<
      17,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_MaxHeapprofdCpuSecs kMaxHeapprofdCpuSecs() { return {}; }
  void set_max_heapprofd_cpu_secs(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_MaxHeapprofdCpuSecs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_SkipSymbolPrefix =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_SkipSymbolPrefix kSkipSymbolPrefix() { return {}; }
  void add_skip_symbol_prefix(const char* data, size_t size) {
    AppendBytes(FieldMetadata_SkipSymbolPrefix::kFieldId, data, size);
  }
  void add_skip_symbol_prefix(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_SkipSymbolPrefix::kFieldId, chars.data, chars.size);
  }
  void add_skip_symbol_prefix(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_SkipSymbolPrefix::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ContinuousDumpConfig =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      HeapprofdConfig_ContinuousDumpConfig,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ContinuousDumpConfig kContinuousDumpConfig() { return {}; }
  template <typename T = HeapprofdConfig_ContinuousDumpConfig> T* set_continuous_dump_config() {
    return BeginNestedMessage<T>(6);
  }


  using FieldMetadata_ShmemSizeBytes =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ShmemSizeBytes kShmemSizeBytes() { return {}; }
  void set_shmem_size_bytes(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ShmemSizeBytes::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_BlockClient =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_BlockClient kBlockClient() { return {}; }
  void set_block_client(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_BlockClient::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_BlockClientTimeoutUs =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_BlockClientTimeoutUs kBlockClientTimeoutUs() { return {}; }
  void set_block_client_timeout_us(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_BlockClientTimeoutUs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_NoStartup =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_NoStartup kNoStartup() { return {}; }
  void set_no_startup(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_NoStartup::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_NoRunning =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_NoRunning kNoRunning() { return {}; }
  void set_no_running(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_NoRunning::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DumpAtMax =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_DumpAtMax kDumpAtMax() { return {}; }
  void set_dump_at_max(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_DumpAtMax::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DisableForkTeardown =
    ::protozero::proto_utils::FieldMetadata<
      18,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_DisableForkTeardown kDisableForkTeardown() { return {}; }
  void set_disable_fork_teardown(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_DisableForkTeardown::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DisableVforkDetection =
    ::protozero::proto_utils::FieldMetadata<
      19,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      HeapprofdConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_DisableVforkDetection kDisableVforkDetection() { return {}; }
  void set_disable_vfork_detection(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_DisableVforkDetection::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }
};

class HeapprofdConfig_ContinuousDumpConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  HeapprofdConfig_ContinuousDumpConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit HeapprofdConfig_ContinuousDumpConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit HeapprofdConfig_ContinuousDumpConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_dump_phase_ms() const { return at<5>().valid(); }
  uint32_t dump_phase_ms() const { return at<5>().as_uint32(); }
  bool has_dump_interval_ms() const { return at<6>().valid(); }
  uint32_t dump_interval_ms() const { return at<6>().as_uint32(); }
};

class HeapprofdConfig_ContinuousDumpConfig : public ::protozero::Message {
 public:
  using Decoder = HeapprofdConfig_ContinuousDumpConfig_Decoder;
  enum : int32_t {
    kDumpPhaseMsFieldNumber = 5,
    kDumpIntervalMsFieldNumber = 6,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.HeapprofdConfig.ContinuousDumpConfig"; }


  using FieldMetadata_DumpPhaseMs =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      HeapprofdConfig_ContinuousDumpConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_DumpPhaseMs kDumpPhaseMs() { return {}; }
  void set_dump_phase_ms(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DumpPhaseMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DumpIntervalMs =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      HeapprofdConfig_ContinuousDumpConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_DumpIntervalMs kDumpIntervalMs() { return {}; }
  void set_dump_interval_ms(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DumpIntervalMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
