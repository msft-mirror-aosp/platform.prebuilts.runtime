// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/process_stats/process_stats_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto

#include <cstdint>
#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class ProcessStatsConfig;
struct ProcessStatsConfigDefaultTypeInternal;
extern ProcessStatsConfigDefaultTypeInternal _ProcessStatsConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ProcessStatsConfig* Arena::CreateMaybeMessage<::perfetto::protos::ProcessStatsConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum ProcessStatsConfig_Quirks : int {
  ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED = 0,
  ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP PROTOBUF_DEPRECATED_ENUM = 1,
  ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND = 2
};
bool ProcessStatsConfig_Quirks_IsValid(int value);
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig_Quirks_Quirks_MIN = ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED;
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig_Quirks_Quirks_MAX = ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND;
constexpr int ProcessStatsConfig_Quirks_Quirks_ARRAYSIZE = ProcessStatsConfig_Quirks_Quirks_MAX + 1;

const std::string& ProcessStatsConfig_Quirks_Name(ProcessStatsConfig_Quirks value);
template<typename T>
inline const std::string& ProcessStatsConfig_Quirks_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ProcessStatsConfig_Quirks>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ProcessStatsConfig_Quirks_Name.");
  return ProcessStatsConfig_Quirks_Name(static_cast<ProcessStatsConfig_Quirks>(enum_t_value));
}
bool ProcessStatsConfig_Quirks_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ProcessStatsConfig_Quirks* value);
// ===================================================================

class ProcessStatsConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ProcessStatsConfig) */ {
 public:
  inline ProcessStatsConfig() : ProcessStatsConfig(nullptr) {}
  ~ProcessStatsConfig() override;
  explicit PROTOBUF_CONSTEXPR ProcessStatsConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProcessStatsConfig(const ProcessStatsConfig& from);
  ProcessStatsConfig(ProcessStatsConfig&& from) noexcept
    : ProcessStatsConfig() {
    *this = ::std::move(from);
  }

  inline ProcessStatsConfig& operator=(const ProcessStatsConfig& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline ProcessStatsConfig& operator=(ProcessStatsConfig&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const ProcessStatsConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProcessStatsConfig* internal_default_instance() {
    return reinterpret_cast<const ProcessStatsConfig*>(
               &_ProcessStatsConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProcessStatsConfig& a, ProcessStatsConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(ProcessStatsConfig* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ProcessStatsConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ProcessStatsConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProcessStatsConfig>(arena);
  }
  ProcessStatsConfig* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ProcessStatsConfig& from);
  void MergeFrom(const ProcessStatsConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ProcessStatsConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ProcessStatsConfig";
  }
  protected:
  explicit ProcessStatsConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef ProcessStatsConfig_Quirks Quirks;
  static constexpr Quirks QUIRKS_UNSPECIFIED =
    ProcessStatsConfig_Quirks_QUIRKS_UNSPECIFIED;
  PROTOBUF_DEPRECATED_ENUM static constexpr Quirks DISABLE_INITIAL_DUMP =
    ProcessStatsConfig_Quirks_DISABLE_INITIAL_DUMP;
  static constexpr Quirks DISABLE_ON_DEMAND =
    ProcessStatsConfig_Quirks_DISABLE_ON_DEMAND;
  static inline bool Quirks_IsValid(int value) {
    return ProcessStatsConfig_Quirks_IsValid(value);
  }
  static constexpr Quirks Quirks_MIN =
    ProcessStatsConfig_Quirks_Quirks_MIN;
  static constexpr Quirks Quirks_MAX =
    ProcessStatsConfig_Quirks_Quirks_MAX;
  static constexpr int Quirks_ARRAYSIZE =
    ProcessStatsConfig_Quirks_Quirks_ARRAYSIZE;
  template<typename T>
  static inline const std::string& Quirks_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Quirks>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Quirks_Name.");
    return ProcessStatsConfig_Quirks_Name(enum_t_value);
  }
  static inline bool Quirks_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Quirks* value) {
    return ProcessStatsConfig_Quirks_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kQuirksFieldNumber = 1,
    kScanAllProcessesOnStartFieldNumber = 2,
    kRecordThreadNamesFieldNumber = 3,
    kProcStatsPollMsFieldNumber = 4,
    kProcStatsCacheTtlMsFieldNumber = 6,
  };
  // repeated .perfetto.protos.ProcessStatsConfig.Quirks quirks = 1;
  int quirks_size() const;
  private:
  int _internal_quirks_size() const;
  public:
  void clear_quirks();
  private:
  ::perfetto::protos::ProcessStatsConfig_Quirks _internal_quirks(int index) const;
  void _internal_add_quirks(::perfetto::protos::ProcessStatsConfig_Quirks value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_quirks();
  public:
  ::perfetto::protos::ProcessStatsConfig_Quirks quirks(int index) const;
  void set_quirks(int index, ::perfetto::protos::ProcessStatsConfig_Quirks value);
  void add_quirks(::perfetto::protos::ProcessStatsConfig_Quirks value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& quirks() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_quirks();

  // optional bool scan_all_processes_on_start = 2;
  bool has_scan_all_processes_on_start() const;
  private:
  bool _internal_has_scan_all_processes_on_start() const;
  public:
  void clear_scan_all_processes_on_start();
  bool scan_all_processes_on_start() const;
  void set_scan_all_processes_on_start(bool value);
  private:
  bool _internal_scan_all_processes_on_start() const;
  void _internal_set_scan_all_processes_on_start(bool value);
  public:

  // optional bool record_thread_names = 3;
  bool has_record_thread_names() const;
  private:
  bool _internal_has_record_thread_names() const;
  public:
  void clear_record_thread_names();
  bool record_thread_names() const;
  void set_record_thread_names(bool value);
  private:
  bool _internal_record_thread_names() const;
  void _internal_set_record_thread_names(bool value);
  public:

  // optional uint32 proc_stats_poll_ms = 4;
  bool has_proc_stats_poll_ms() const;
  private:
  bool _internal_has_proc_stats_poll_ms() const;
  public:
  void clear_proc_stats_poll_ms();
  ::uint32_t proc_stats_poll_ms() const;
  void set_proc_stats_poll_ms(::uint32_t value);
  private:
  ::uint32_t _internal_proc_stats_poll_ms() const;
  void _internal_set_proc_stats_poll_ms(::uint32_t value);
  public:

  // optional uint32 proc_stats_cache_ttl_ms = 6;
  bool has_proc_stats_cache_ttl_ms() const;
  private:
  bool _internal_has_proc_stats_cache_ttl_ms() const;
  public:
  void clear_proc_stats_cache_ttl_ms();
  ::uint32_t proc_stats_cache_ttl_ms() const;
  void set_proc_stats_cache_ttl_ms(::uint32_t value);
  private:
  ::uint32_t _internal_proc_stats_cache_ttl_ms() const;
  void _internal_set_proc_stats_cache_ttl_ms(::uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.ProcessStatsConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> quirks_;
    bool scan_all_processes_on_start_;
    bool record_thread_names_;
    ::uint32_t proc_stats_poll_ms_;
    ::uint32_t proc_stats_cache_ttl_ms_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProcessStatsConfig

// repeated .perfetto.protos.ProcessStatsConfig.Quirks quirks = 1;
inline int ProcessStatsConfig::_internal_quirks_size() const {
  return _impl_.quirks_.size();
}
inline int ProcessStatsConfig::quirks_size() const {
  return _internal_quirks_size();
}
inline void ProcessStatsConfig::clear_quirks() {
  _impl_.quirks_.Clear();
}
inline ::perfetto::protos::ProcessStatsConfig_Quirks ProcessStatsConfig::_internal_quirks(int index) const {
  return static_cast< ::perfetto::protos::ProcessStatsConfig_Quirks >(_impl_.quirks_.Get(index));
}
inline ::perfetto::protos::ProcessStatsConfig_Quirks ProcessStatsConfig::quirks(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.quirks)
  return _internal_quirks(index);
}
inline void ProcessStatsConfig::set_quirks(int index, ::perfetto::protos::ProcessStatsConfig_Quirks value) {
  assert(::perfetto::protos::ProcessStatsConfig_Quirks_IsValid(value));
  _impl_.quirks_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.quirks)
}
inline void ProcessStatsConfig::_internal_add_quirks(::perfetto::protos::ProcessStatsConfig_Quirks value) {
  assert(::perfetto::protos::ProcessStatsConfig_Quirks_IsValid(value));
  _impl_.quirks_.Add(value);
}
inline void ProcessStatsConfig::add_quirks(::perfetto::protos::ProcessStatsConfig_Quirks value) {
  _internal_add_quirks(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessStatsConfig.quirks)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
ProcessStatsConfig::quirks() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.ProcessStatsConfig.quirks)
  return _impl_.quirks_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
ProcessStatsConfig::_internal_mutable_quirks() {
  return &_impl_.quirks_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
ProcessStatsConfig::mutable_quirks() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.ProcessStatsConfig.quirks)
  return _internal_mutable_quirks();
}

// optional bool scan_all_processes_on_start = 2;
inline bool ProcessStatsConfig::_internal_has_scan_all_processes_on_start() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ProcessStatsConfig::has_scan_all_processes_on_start() const {
  return _internal_has_scan_all_processes_on_start();
}
inline void ProcessStatsConfig::clear_scan_all_processes_on_start() {
  _impl_.scan_all_processes_on_start_ = false;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline bool ProcessStatsConfig::_internal_scan_all_processes_on_start() const {
  return _impl_.scan_all_processes_on_start_;
}
inline bool ProcessStatsConfig::scan_all_processes_on_start() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.scan_all_processes_on_start)
  return _internal_scan_all_processes_on_start();
}
inline void ProcessStatsConfig::_internal_set_scan_all_processes_on_start(bool value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.scan_all_processes_on_start_ = value;
}
inline void ProcessStatsConfig::set_scan_all_processes_on_start(bool value) {
  _internal_set_scan_all_processes_on_start(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.scan_all_processes_on_start)
}

// optional bool record_thread_names = 3;
inline bool ProcessStatsConfig::_internal_has_record_thread_names() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ProcessStatsConfig::has_record_thread_names() const {
  return _internal_has_record_thread_names();
}
inline void ProcessStatsConfig::clear_record_thread_names() {
  _impl_.record_thread_names_ = false;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline bool ProcessStatsConfig::_internal_record_thread_names() const {
  return _impl_.record_thread_names_;
}
inline bool ProcessStatsConfig::record_thread_names() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.record_thread_names)
  return _internal_record_thread_names();
}
inline void ProcessStatsConfig::_internal_set_record_thread_names(bool value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.record_thread_names_ = value;
}
inline void ProcessStatsConfig::set_record_thread_names(bool value) {
  _internal_set_record_thread_names(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.record_thread_names)
}

// optional uint32 proc_stats_poll_ms = 4;
inline bool ProcessStatsConfig::_internal_has_proc_stats_poll_ms() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ProcessStatsConfig::has_proc_stats_poll_ms() const {
  return _internal_has_proc_stats_poll_ms();
}
inline void ProcessStatsConfig::clear_proc_stats_poll_ms() {
  _impl_.proc_stats_poll_ms_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t ProcessStatsConfig::_internal_proc_stats_poll_ms() const {
  return _impl_.proc_stats_poll_ms_;
}
inline ::uint32_t ProcessStatsConfig::proc_stats_poll_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.proc_stats_poll_ms)
  return _internal_proc_stats_poll_ms();
}
inline void ProcessStatsConfig::_internal_set_proc_stats_poll_ms(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.proc_stats_poll_ms_ = value;
}
inline void ProcessStatsConfig::set_proc_stats_poll_ms(::uint32_t value) {
  _internal_set_proc_stats_poll_ms(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.proc_stats_poll_ms)
}

// optional uint32 proc_stats_cache_ttl_ms = 6;
inline bool ProcessStatsConfig::_internal_has_proc_stats_cache_ttl_ms() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ProcessStatsConfig::has_proc_stats_cache_ttl_ms() const {
  return _internal_has_proc_stats_cache_ttl_ms();
}
inline void ProcessStatsConfig::clear_proc_stats_cache_ttl_ms() {
  _impl_.proc_stats_cache_ttl_ms_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint32_t ProcessStatsConfig::_internal_proc_stats_cache_ttl_ms() const {
  return _impl_.proc_stats_cache_ttl_ms_;
}
inline ::uint32_t ProcessStatsConfig::proc_stats_cache_ttl_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessStatsConfig.proc_stats_cache_ttl_ms)
  return _internal_proc_stats_cache_ttl_ms();
}
inline void ProcessStatsConfig::_internal_set_proc_stats_cache_ttl_ms(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.proc_stats_cache_ttl_ms_ = value;
}
inline void ProcessStatsConfig::set_proc_stats_cache_ttl_ms(::uint32_t value) {
  _internal_set_proc_stats_cache_ttl_ms(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessStatsConfig.proc_stats_cache_ttl_ms)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::ProcessStatsConfig_Quirks> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fprocess_5fstats_2fprocess_5fstats_5fconfig_2eproto
