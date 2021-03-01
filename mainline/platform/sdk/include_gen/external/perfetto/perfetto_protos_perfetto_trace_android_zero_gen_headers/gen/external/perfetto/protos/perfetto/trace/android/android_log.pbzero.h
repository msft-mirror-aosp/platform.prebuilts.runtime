// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_ANDROID_LOG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_ANDROID_LOG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class AndroidLogPacket_LogEvent;
class AndroidLogPacket_LogEvent_Arg;
class AndroidLogPacket_Stats;
enum AndroidLogId : int32_t;
enum AndroidLogPriority : int32_t;

class AndroidLogPacket_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  AndroidLogPacket_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit AndroidLogPacket_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit AndroidLogPacket_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_events() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> events() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_stats() const { return at<2>().valid(); }
  ::protozero::ConstBytes stats() const { return at<2>().as_bytes(); }
};

class AndroidLogPacket : public ::protozero::Message {
 public:
  using Decoder = AndroidLogPacket_Decoder;
  enum : int32_t {
    kEventsFieldNumber = 1,
    kStatsFieldNumber = 2,
  };
  using LogEvent = ::perfetto::protos::pbzero::AndroidLogPacket_LogEvent;
  using Stats = ::perfetto::protos::pbzero::AndroidLogPacket_Stats;
  template <typename T = AndroidLogPacket_LogEvent> T* add_events() {
    return BeginNestedMessage<T>(1);
  }

  template <typename T = AndroidLogPacket_Stats> T* set_stats() {
    return BeginNestedMessage<T>(2);
  }

};

class AndroidLogPacket_Stats_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  AndroidLogPacket_Stats_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit AndroidLogPacket_Stats_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit AndroidLogPacket_Stats_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_num_total() const { return at<1>().valid(); }
  uint64_t num_total() const { return at<1>().as_uint64(); }
  bool has_num_failed() const { return at<2>().valid(); }
  uint64_t num_failed() const { return at<2>().as_uint64(); }
  bool has_num_skipped() const { return at<3>().valid(); }
  uint64_t num_skipped() const { return at<3>().as_uint64(); }
};

class AndroidLogPacket_Stats : public ::protozero::Message {
 public:
  using Decoder = AndroidLogPacket_Stats_Decoder;
  enum : int32_t {
    kNumTotalFieldNumber = 1,
    kNumFailedFieldNumber = 2,
    kNumSkippedFieldNumber = 3,
  };
  void set_num_total(uint64_t value) {
    AppendVarInt(1, value);
  }
  void set_num_failed(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_num_skipped(uint64_t value) {
    AppendVarInt(3, value);
  }
};

class AndroidLogPacket_LogEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/9, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  AndroidLogPacket_LogEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit AndroidLogPacket_LogEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit AndroidLogPacket_LogEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_log_id() const { return at<1>().valid(); }
  int32_t log_id() const { return at<1>().as_int32(); }
  bool has_pid() const { return at<2>().valid(); }
  int32_t pid() const { return at<2>().as_int32(); }
  bool has_tid() const { return at<3>().valid(); }
  int32_t tid() const { return at<3>().as_int32(); }
  bool has_uid() const { return at<4>().valid(); }
  int32_t uid() const { return at<4>().as_int32(); }
  bool has_timestamp() const { return at<5>().valid(); }
  uint64_t timestamp() const { return at<5>().as_uint64(); }
  bool has_tag() const { return at<6>().valid(); }
  ::protozero::ConstChars tag() const { return at<6>().as_string(); }
  bool has_prio() const { return at<7>().valid(); }
  int32_t prio() const { return at<7>().as_int32(); }
  bool has_message() const { return at<8>().valid(); }
  ::protozero::ConstChars message() const { return at<8>().as_string(); }
  bool has_args() const { return at<9>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> args() const { return GetRepeated<::protozero::ConstBytes>(9); }
};

class AndroidLogPacket_LogEvent : public ::protozero::Message {
 public:
  using Decoder = AndroidLogPacket_LogEvent_Decoder;
  enum : int32_t {
    kLogIdFieldNumber = 1,
    kPidFieldNumber = 2,
    kTidFieldNumber = 3,
    kUidFieldNumber = 4,
    kTimestampFieldNumber = 5,
    kTagFieldNumber = 6,
    kPrioFieldNumber = 7,
    kMessageFieldNumber = 8,
    kArgsFieldNumber = 9,
  };
  using Arg = ::perfetto::protos::pbzero::AndroidLogPacket_LogEvent_Arg;
  void set_log_id(::perfetto::protos::pbzero::AndroidLogId value) {
    AppendTinyVarInt(1, value);
  }
  void set_pid(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_tid(int32_t value) {
    AppendVarInt(3, value);
  }
  void set_uid(int32_t value) {
    AppendVarInt(4, value);
  }
  void set_timestamp(uint64_t value) {
    AppendVarInt(5, value);
  }
  void set_tag(const std::string& value) {
    AppendBytes(6, value.data(), value.size());
  }
  void set_tag(const char* data, size_t size) {
    AppendBytes(6, data, size);
  }
  void set_prio(::perfetto::protos::pbzero::AndroidLogPriority value) {
    AppendTinyVarInt(7, value);
  }
  void set_message(const std::string& value) {
    AppendBytes(8, value.data(), value.size());
  }
  void set_message(const char* data, size_t size) {
    AppendBytes(8, data, size);
  }
  template <typename T = AndroidLogPacket_LogEvent_Arg> T* add_args() {
    return BeginNestedMessage<T>(9);
  }

};

class AndroidLogPacket_LogEvent_Arg_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  AndroidLogPacket_LogEvent_Arg_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit AndroidLogPacket_LogEvent_Arg_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit AndroidLogPacket_LogEvent_Arg_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name() const { return at<1>().valid(); }
  ::protozero::ConstChars name() const { return at<1>().as_string(); }
  bool has_int_value() const { return at<2>().valid(); }
  int64_t int_value() const { return at<2>().as_int64(); }
  bool has_float_value() const { return at<3>().valid(); }
  float float_value() const { return at<3>().as_float(); }
  bool has_string_value() const { return at<4>().valid(); }
  ::protozero::ConstChars string_value() const { return at<4>().as_string(); }
};

class AndroidLogPacket_LogEvent_Arg : public ::protozero::Message {
 public:
  using Decoder = AndroidLogPacket_LogEvent_Arg_Decoder;
  enum : int32_t {
    kNameFieldNumber = 1,
    kIntValueFieldNumber = 2,
    kFloatValueFieldNumber = 3,
    kStringValueFieldNumber = 4,
  };
  void set_name(const std::string& value) {
    AppendBytes(1, value.data(), value.size());
  }
  void set_name(const char* data, size_t size) {
    AppendBytes(1, data, size);
  }
  void set_int_value(int64_t value) {
    AppendVarInt(2, value);
  }
  void set_float_value(float value) {
    AppendFixed(3, value);
  }
  void set_string_value(const std::string& value) {
    AppendBytes(4, value.data(), value.size());
  }
  void set_string_value(const char* data, size_t size) {
    AppendBytes(4, data, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
