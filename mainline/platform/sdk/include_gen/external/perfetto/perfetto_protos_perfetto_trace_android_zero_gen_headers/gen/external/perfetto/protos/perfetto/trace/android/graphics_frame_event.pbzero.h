// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_GRAPHICS_FRAME_EVENT_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_GRAPHICS_FRAME_EVENT_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class GraphicsFrameEvent_BufferEvent;
enum GraphicsFrameEvent_BufferEventType : int32_t;

enum GraphicsFrameEvent_BufferEventType : int32_t {
  GraphicsFrameEvent_BufferEventType_UNSPECIFIED = 0,
  GraphicsFrameEvent_BufferEventType_DEQUEUE = 1,
  GraphicsFrameEvent_BufferEventType_QUEUE = 2,
  GraphicsFrameEvent_BufferEventType_POST = 3,
  GraphicsFrameEvent_BufferEventType_ACQUIRE_FENCE = 4,
  GraphicsFrameEvent_BufferEventType_LATCH = 5,
  GraphicsFrameEvent_BufferEventType_HWC_COMPOSITION_QUEUED = 6,
  GraphicsFrameEvent_BufferEventType_FALLBACK_COMPOSITION = 7,
  GraphicsFrameEvent_BufferEventType_PRESENT_FENCE = 8,
  GraphicsFrameEvent_BufferEventType_RELEASE_FENCE = 9,
  GraphicsFrameEvent_BufferEventType_MODIFY = 10,
  GraphicsFrameEvent_BufferEventType_DETACH = 11,
  GraphicsFrameEvent_BufferEventType_ATTACH = 12,
  GraphicsFrameEvent_BufferEventType_CANCEL = 13,
};

const GraphicsFrameEvent_BufferEventType GraphicsFrameEvent_BufferEventType_MIN = GraphicsFrameEvent_BufferEventType_UNSPECIFIED;
const GraphicsFrameEvent_BufferEventType GraphicsFrameEvent_BufferEventType_MAX = GraphicsFrameEvent_BufferEventType_CANCEL;

class GraphicsFrameEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  GraphicsFrameEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit GraphicsFrameEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit GraphicsFrameEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_buffer_event() const { return at<1>().valid(); }
  ::protozero::ConstBytes buffer_event() const { return at<1>().as_bytes(); }
};

class GraphicsFrameEvent : public ::protozero::Message {
 public:
  using Decoder = GraphicsFrameEvent_Decoder;
  enum : int32_t {
    kBufferEventFieldNumber = 1,
  };
  using BufferEvent = ::perfetto::protos::pbzero::GraphicsFrameEvent_BufferEvent;
  using BufferEventType = ::perfetto::protos::pbzero::GraphicsFrameEvent_BufferEventType;
  static const BufferEventType UNSPECIFIED = GraphicsFrameEvent_BufferEventType_UNSPECIFIED;
  static const BufferEventType DEQUEUE = GraphicsFrameEvent_BufferEventType_DEQUEUE;
  static const BufferEventType QUEUE = GraphicsFrameEvent_BufferEventType_QUEUE;
  static const BufferEventType POST = GraphicsFrameEvent_BufferEventType_POST;
  static const BufferEventType ACQUIRE_FENCE = GraphicsFrameEvent_BufferEventType_ACQUIRE_FENCE;
  static const BufferEventType LATCH = GraphicsFrameEvent_BufferEventType_LATCH;
  static const BufferEventType HWC_COMPOSITION_QUEUED = GraphicsFrameEvent_BufferEventType_HWC_COMPOSITION_QUEUED;
  static const BufferEventType FALLBACK_COMPOSITION = GraphicsFrameEvent_BufferEventType_FALLBACK_COMPOSITION;
  static const BufferEventType PRESENT_FENCE = GraphicsFrameEvent_BufferEventType_PRESENT_FENCE;
  static const BufferEventType RELEASE_FENCE = GraphicsFrameEvent_BufferEventType_RELEASE_FENCE;
  static const BufferEventType MODIFY = GraphicsFrameEvent_BufferEventType_MODIFY;
  static const BufferEventType DETACH = GraphicsFrameEvent_BufferEventType_DETACH;
  static const BufferEventType ATTACH = GraphicsFrameEvent_BufferEventType_ATTACH;
  static const BufferEventType CANCEL = GraphicsFrameEvent_BufferEventType_CANCEL;
  template <typename T = GraphicsFrameEvent_BufferEvent> T* set_buffer_event() {
    return BeginNestedMessage<T>(1);
  }

};

class GraphicsFrameEvent_BufferEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  GraphicsFrameEvent_BufferEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit GraphicsFrameEvent_BufferEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit GraphicsFrameEvent_BufferEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_frame_number() const { return at<1>().valid(); }
  uint32_t frame_number() const { return at<1>().as_uint32(); }
  bool has_type() const { return at<2>().valid(); }
  int32_t type() const { return at<2>().as_int32(); }
  bool has_layer_name() const { return at<3>().valid(); }
  ::protozero::ConstChars layer_name() const { return at<3>().as_string(); }
  bool has_duration_ns() const { return at<4>().valid(); }
  uint64_t duration_ns() const { return at<4>().as_uint64(); }
  bool has_buffer_id() const { return at<5>().valid(); }
  uint32_t buffer_id() const { return at<5>().as_uint32(); }
};

class GraphicsFrameEvent_BufferEvent : public ::protozero::Message {
 public:
  using Decoder = GraphicsFrameEvent_BufferEvent_Decoder;
  enum : int32_t {
    kFrameNumberFieldNumber = 1,
    kTypeFieldNumber = 2,
    kLayerNameFieldNumber = 3,
    kDurationNsFieldNumber = 4,
    kBufferIdFieldNumber = 5,
  };
  void set_frame_number(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_type(::perfetto::protos::pbzero::GraphicsFrameEvent_BufferEventType value) {
    AppendTinyVarInt(2, value);
  }
  void set_layer_name(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_layer_name(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
  void set_duration_ns(uint64_t value) {
    AppendVarInt(4, value);
  }
  void set_buffer_id(uint32_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
