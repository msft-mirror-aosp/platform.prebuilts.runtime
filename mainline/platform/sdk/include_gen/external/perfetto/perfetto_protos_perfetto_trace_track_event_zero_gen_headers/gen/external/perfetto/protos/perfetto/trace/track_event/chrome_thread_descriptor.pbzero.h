// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_THREAD_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_THREAD_DESCRIPTOR_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

enum ChromeThreadDescriptor_ThreadType : int32_t;

enum ChromeThreadDescriptor_ThreadType : int32_t {
  ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED = 0,
  ChromeThreadDescriptor_ThreadType_THREAD_MAIN = 1,
  ChromeThreadDescriptor_ThreadType_THREAD_IO = 2,
  ChromeThreadDescriptor_ThreadType_THREAD_NETWORK_SERVICE = 12,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_WORKER = 3,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_WORKER = 4,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_BLOCKING = 6,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_BLOCKING = 5,
  ChromeThreadDescriptor_ThreadType_THREAD_POOL_SERVICE = 7,
  ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR = 8,
  ChromeThreadDescriptor_ThreadType_THREAD_VIZ_COMPOSITOR = 9,
  ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR_WORKER = 10,
  ChromeThreadDescriptor_ThreadType_THREAD_SERVICE_WORKER = 11,
  ChromeThreadDescriptor_ThreadType_THREAD_MEMORY_INFRA = 50,
  ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER = 51,
};

const ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_MIN = ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED;
const ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor_ThreadType_MAX = ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER;

class ChromeThreadDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeThreadDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeThreadDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeThreadDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_thread_type() const { return at<1>().valid(); }
  int32_t thread_type() const { return at<1>().as_int32(); }
  bool has_legacy_sort_index() const { return at<2>().valid(); }
  int32_t legacy_sort_index() const { return at<2>().as_int32(); }
};

class ChromeThreadDescriptor : public ::protozero::Message {
 public:
  using Decoder = ChromeThreadDescriptor_Decoder;
  enum : int32_t {
    kThreadTypeFieldNumber = 1,
    kLegacySortIndexFieldNumber = 2,
  };
  using ThreadType = ::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType;
  static const ThreadType THREAD_UNSPECIFIED = ChromeThreadDescriptor_ThreadType_THREAD_UNSPECIFIED;
  static const ThreadType THREAD_MAIN = ChromeThreadDescriptor_ThreadType_THREAD_MAIN;
  static const ThreadType THREAD_IO = ChromeThreadDescriptor_ThreadType_THREAD_IO;
  static const ThreadType THREAD_NETWORK_SERVICE = ChromeThreadDescriptor_ThreadType_THREAD_NETWORK_SERVICE;
  static const ThreadType THREAD_POOL_BG_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_WORKER;
  static const ThreadType THREAD_POOL_FG_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_WORKER;
  static const ThreadType THREAD_POOL_BG_BLOCKING = ChromeThreadDescriptor_ThreadType_THREAD_POOL_BG_BLOCKING;
  static const ThreadType THREAD_POOL_FG_BLOCKING = ChromeThreadDescriptor_ThreadType_THREAD_POOL_FG_BLOCKING;
  static const ThreadType THREAD_POOL_SERVICE = ChromeThreadDescriptor_ThreadType_THREAD_POOL_SERVICE;
  static const ThreadType THREAD_COMPOSITOR = ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR;
  static const ThreadType THREAD_VIZ_COMPOSITOR = ChromeThreadDescriptor_ThreadType_THREAD_VIZ_COMPOSITOR;
  static const ThreadType THREAD_COMPOSITOR_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_COMPOSITOR_WORKER;
  static const ThreadType THREAD_SERVICE_WORKER = ChromeThreadDescriptor_ThreadType_THREAD_SERVICE_WORKER;
  static const ThreadType THREAD_MEMORY_INFRA = ChromeThreadDescriptor_ThreadType_THREAD_MEMORY_INFRA;
  static const ThreadType THREAD_SAMPLING_PROFILER = ChromeThreadDescriptor_ThreadType_THREAD_SAMPLING_PROFILER;
  void set_thread_type(::perfetto::protos::pbzero::ChromeThreadDescriptor_ThreadType value) {
    AppendTinyVarInt(1, value);
  }
  void set_legacy_sort_index(int32_t value) {
    AppendVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
