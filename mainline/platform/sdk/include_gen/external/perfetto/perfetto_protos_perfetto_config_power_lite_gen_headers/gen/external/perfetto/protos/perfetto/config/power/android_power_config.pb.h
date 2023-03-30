// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/power/android_power_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fpower_2fandroid_5fpower_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fpower_2fandroid_5fpower_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fpower_2fandroid_5fpower_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fpower_2fandroid_5fpower_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class AndroidPowerConfig;
struct AndroidPowerConfigDefaultTypeInternal;
extern AndroidPowerConfigDefaultTypeInternal _AndroidPowerConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::AndroidPowerConfig* Arena::CreateMaybeMessage<::perfetto::protos::AndroidPowerConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum AndroidPowerConfig_BatteryCounters : int {
  AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_UNSPECIFIED = 0,
  AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CHARGE = 1,
  AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CAPACITY_PERCENT = 2,
  AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CURRENT = 3,
  AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CURRENT_AVG = 4
};
bool AndroidPowerConfig_BatteryCounters_IsValid(int value);
constexpr AndroidPowerConfig_BatteryCounters AndroidPowerConfig_BatteryCounters_BatteryCounters_MIN = AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_UNSPECIFIED;
constexpr AndroidPowerConfig_BatteryCounters AndroidPowerConfig_BatteryCounters_BatteryCounters_MAX = AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CURRENT_AVG;
constexpr int AndroidPowerConfig_BatteryCounters_BatteryCounters_ARRAYSIZE = AndroidPowerConfig_BatteryCounters_BatteryCounters_MAX + 1;

const std::string& AndroidPowerConfig_BatteryCounters_Name(AndroidPowerConfig_BatteryCounters value);
template<typename T>
inline const std::string& AndroidPowerConfig_BatteryCounters_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AndroidPowerConfig_BatteryCounters>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AndroidPowerConfig_BatteryCounters_Name.");
  return AndroidPowerConfig_BatteryCounters_Name(static_cast<AndroidPowerConfig_BatteryCounters>(enum_t_value));
}
bool AndroidPowerConfig_BatteryCounters_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, AndroidPowerConfig_BatteryCounters* value);
// ===================================================================

class AndroidPowerConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidPowerConfig) */ {
 public:
  inline AndroidPowerConfig() : AndroidPowerConfig(nullptr) {}
  ~AndroidPowerConfig() override;
  explicit PROTOBUF_CONSTEXPR AndroidPowerConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidPowerConfig(const AndroidPowerConfig& from);
  AndroidPowerConfig(AndroidPowerConfig&& from) noexcept
    : AndroidPowerConfig() {
    *this = ::std::move(from);
  }

  inline AndroidPowerConfig& operator=(const AndroidPowerConfig& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline AndroidPowerConfig& operator=(AndroidPowerConfig&& from) noexcept {
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

  static const AndroidPowerConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidPowerConfig* internal_default_instance() {
    return reinterpret_cast<const AndroidPowerConfig*>(
               &_AndroidPowerConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AndroidPowerConfig& a, AndroidPowerConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(AndroidPowerConfig* other) {
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
  void UnsafeArenaSwap(AndroidPowerConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidPowerConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AndroidPowerConfig>(arena);
  }
  AndroidPowerConfig* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidPowerConfig& from);
  void MergeFrom(const AndroidPowerConfig& from);
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
  void InternalSwap(AndroidPowerConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidPowerConfig";
  }
  protected:
  explicit AndroidPowerConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef AndroidPowerConfig_BatteryCounters BatteryCounters;
  static constexpr BatteryCounters BATTERY_COUNTER_UNSPECIFIED =
    AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_UNSPECIFIED;
  static constexpr BatteryCounters BATTERY_COUNTER_CHARGE =
    AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CHARGE;
  static constexpr BatteryCounters BATTERY_COUNTER_CAPACITY_PERCENT =
    AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CAPACITY_PERCENT;
  static constexpr BatteryCounters BATTERY_COUNTER_CURRENT =
    AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CURRENT;
  static constexpr BatteryCounters BATTERY_COUNTER_CURRENT_AVG =
    AndroidPowerConfig_BatteryCounters_BATTERY_COUNTER_CURRENT_AVG;
  static inline bool BatteryCounters_IsValid(int value) {
    return AndroidPowerConfig_BatteryCounters_IsValid(value);
  }
  static constexpr BatteryCounters BatteryCounters_MIN =
    AndroidPowerConfig_BatteryCounters_BatteryCounters_MIN;
  static constexpr BatteryCounters BatteryCounters_MAX =
    AndroidPowerConfig_BatteryCounters_BatteryCounters_MAX;
  static constexpr int BatteryCounters_ARRAYSIZE =
    AndroidPowerConfig_BatteryCounters_BatteryCounters_ARRAYSIZE;
  template<typename T>
  static inline const std::string& BatteryCounters_Name(T enum_t_value) {
    static_assert(::std::is_same<T, BatteryCounters>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function BatteryCounters_Name.");
    return AndroidPowerConfig_BatteryCounters_Name(enum_t_value);
  }
  static inline bool BatteryCounters_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      BatteryCounters* value) {
    return AndroidPowerConfig_BatteryCounters_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBatteryCountersFieldNumber = 2,
    kBatteryPollMsFieldNumber = 1,
    kCollectPowerRailsFieldNumber = 3,
    kCollectEnergyEstimationBreakdownFieldNumber = 4,
  };
  // repeated .perfetto.protos.AndroidPowerConfig.BatteryCounters battery_counters = 2;
  int battery_counters_size() const;
  private:
  int _internal_battery_counters_size() const;
  public:
  void clear_battery_counters();
  private:
  ::perfetto::protos::AndroidPowerConfig_BatteryCounters _internal_battery_counters(int index) const;
  void _internal_add_battery_counters(::perfetto::protos::AndroidPowerConfig_BatteryCounters value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_battery_counters();
  public:
  ::perfetto::protos::AndroidPowerConfig_BatteryCounters battery_counters(int index) const;
  void set_battery_counters(int index, ::perfetto::protos::AndroidPowerConfig_BatteryCounters value);
  void add_battery_counters(::perfetto::protos::AndroidPowerConfig_BatteryCounters value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& battery_counters() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_battery_counters();

  // optional uint32 battery_poll_ms = 1;
  bool has_battery_poll_ms() const;
  private:
  bool _internal_has_battery_poll_ms() const;
  public:
  void clear_battery_poll_ms();
  ::uint32_t battery_poll_ms() const;
  void set_battery_poll_ms(::uint32_t value);
  private:
  ::uint32_t _internal_battery_poll_ms() const;
  void _internal_set_battery_poll_ms(::uint32_t value);
  public:

  // optional bool collect_power_rails = 3;
  bool has_collect_power_rails() const;
  private:
  bool _internal_has_collect_power_rails() const;
  public:
  void clear_collect_power_rails();
  bool collect_power_rails() const;
  void set_collect_power_rails(bool value);
  private:
  bool _internal_collect_power_rails() const;
  void _internal_set_collect_power_rails(bool value);
  public:

  // optional bool collect_energy_estimation_breakdown = 4;
  bool has_collect_energy_estimation_breakdown() const;
  private:
  bool _internal_has_collect_energy_estimation_breakdown() const;
  public:
  void clear_collect_energy_estimation_breakdown();
  bool collect_energy_estimation_breakdown() const;
  void set_collect_energy_estimation_breakdown(bool value);
  private:
  bool _internal_collect_energy_estimation_breakdown() const;
  void _internal_set_collect_energy_estimation_breakdown(bool value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidPowerConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> battery_counters_;
    ::uint32_t battery_poll_ms_;
    bool collect_power_rails_;
    bool collect_energy_estimation_breakdown_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fpower_2fandroid_5fpower_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AndroidPowerConfig

// optional uint32 battery_poll_ms = 1;
inline bool AndroidPowerConfig::_internal_has_battery_poll_ms() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AndroidPowerConfig::has_battery_poll_ms() const {
  return _internal_has_battery_poll_ms();
}
inline void AndroidPowerConfig::clear_battery_poll_ms() {
  _impl_.battery_poll_ms_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t AndroidPowerConfig::_internal_battery_poll_ms() const {
  return _impl_.battery_poll_ms_;
}
inline ::uint32_t AndroidPowerConfig::battery_poll_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidPowerConfig.battery_poll_ms)
  return _internal_battery_poll_ms();
}
inline void AndroidPowerConfig::_internal_set_battery_poll_ms(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.battery_poll_ms_ = value;
}
inline void AndroidPowerConfig::set_battery_poll_ms(::uint32_t value) {
  _internal_set_battery_poll_ms(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidPowerConfig.battery_poll_ms)
}

// repeated .perfetto.protos.AndroidPowerConfig.BatteryCounters battery_counters = 2;
inline int AndroidPowerConfig::_internal_battery_counters_size() const {
  return _impl_.battery_counters_.size();
}
inline int AndroidPowerConfig::battery_counters_size() const {
  return _internal_battery_counters_size();
}
inline void AndroidPowerConfig::clear_battery_counters() {
  _impl_.battery_counters_.Clear();
}
inline ::perfetto::protos::AndroidPowerConfig_BatteryCounters AndroidPowerConfig::_internal_battery_counters(int index) const {
  return static_cast< ::perfetto::protos::AndroidPowerConfig_BatteryCounters >(_impl_.battery_counters_.Get(index));
}
inline ::perfetto::protos::AndroidPowerConfig_BatteryCounters AndroidPowerConfig::battery_counters(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidPowerConfig.battery_counters)
  return _internal_battery_counters(index);
}
inline void AndroidPowerConfig::set_battery_counters(int index, ::perfetto::protos::AndroidPowerConfig_BatteryCounters value) {
  assert(::perfetto::protos::AndroidPowerConfig_BatteryCounters_IsValid(value));
  _impl_.battery_counters_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidPowerConfig.battery_counters)
}
inline void AndroidPowerConfig::_internal_add_battery_counters(::perfetto::protos::AndroidPowerConfig_BatteryCounters value) {
  assert(::perfetto::protos::AndroidPowerConfig_BatteryCounters_IsValid(value));
  _impl_.battery_counters_.Add(value);
}
inline void AndroidPowerConfig::add_battery_counters(::perfetto::protos::AndroidPowerConfig_BatteryCounters value) {
  _internal_add_battery_counters(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidPowerConfig.battery_counters)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
AndroidPowerConfig::battery_counters() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.AndroidPowerConfig.battery_counters)
  return _impl_.battery_counters_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
AndroidPowerConfig::_internal_mutable_battery_counters() {
  return &_impl_.battery_counters_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
AndroidPowerConfig::mutable_battery_counters() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.AndroidPowerConfig.battery_counters)
  return _internal_mutable_battery_counters();
}

// optional bool collect_power_rails = 3;
inline bool AndroidPowerConfig::_internal_has_collect_power_rails() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AndroidPowerConfig::has_collect_power_rails() const {
  return _internal_has_collect_power_rails();
}
inline void AndroidPowerConfig::clear_collect_power_rails() {
  _impl_.collect_power_rails_ = false;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline bool AndroidPowerConfig::_internal_collect_power_rails() const {
  return _impl_.collect_power_rails_;
}
inline bool AndroidPowerConfig::collect_power_rails() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidPowerConfig.collect_power_rails)
  return _internal_collect_power_rails();
}
inline void AndroidPowerConfig::_internal_set_collect_power_rails(bool value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.collect_power_rails_ = value;
}
inline void AndroidPowerConfig::set_collect_power_rails(bool value) {
  _internal_set_collect_power_rails(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidPowerConfig.collect_power_rails)
}

// optional bool collect_energy_estimation_breakdown = 4;
inline bool AndroidPowerConfig::_internal_has_collect_energy_estimation_breakdown() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AndroidPowerConfig::has_collect_energy_estimation_breakdown() const {
  return _internal_has_collect_energy_estimation_breakdown();
}
inline void AndroidPowerConfig::clear_collect_energy_estimation_breakdown() {
  _impl_.collect_energy_estimation_breakdown_ = false;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline bool AndroidPowerConfig::_internal_collect_energy_estimation_breakdown() const {
  return _impl_.collect_energy_estimation_breakdown_;
}
inline bool AndroidPowerConfig::collect_energy_estimation_breakdown() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidPowerConfig.collect_energy_estimation_breakdown)
  return _internal_collect_energy_estimation_breakdown();
}
inline void AndroidPowerConfig::_internal_set_collect_energy_estimation_breakdown(bool value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.collect_energy_estimation_breakdown_ = value;
}
inline void AndroidPowerConfig::set_collect_energy_estimation_breakdown(bool value) {
  _internal_set_collect_energy_estimation_breakdown(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidPowerConfig.collect_energy_estimation_breakdown)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::AndroidPowerConfig_BatteryCounters> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fpower_2fandroid_5fpower_5fconfig_2eproto
