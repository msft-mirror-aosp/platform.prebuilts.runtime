// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_COMMIT_DATA_REQUEST_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_COMMIT_DATA_REQUEST_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class CommitDataRequest_ChunkToPatch;
class CommitDataRequest_ChunkToPatch_Patch;
class CommitDataRequest_ChunksToMove;

class CommitDataRequest_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  CommitDataRequest_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_chunks_to_move() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> chunks_to_move() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_chunks_to_patch() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> chunks_to_patch() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_flush_request_id() const { return at<3>().valid(); }
  uint64_t flush_request_id() const { return at<3>().as_uint64(); }
};

class CommitDataRequest : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_Decoder;
  enum : int32_t {
    kChunksToMoveFieldNumber = 1,
    kChunksToPatchFieldNumber = 2,
    kFlushRequestIdFieldNumber = 3,
  };
  using ChunksToMove = ::perfetto::protos::pbzero::CommitDataRequest_ChunksToMove;
  using ChunkToPatch = ::perfetto::protos::pbzero::CommitDataRequest_ChunkToPatch;
  template <typename T = CommitDataRequest_ChunksToMove> T* add_chunks_to_move() {
    return BeginNestedMessage<T>(1);
  }

  template <typename T = CommitDataRequest_ChunkToPatch> T* add_chunks_to_patch() {
    return BeginNestedMessage<T>(2);
  }

  void set_flush_request_id(uint64_t value) {
    AppendVarInt(3, value);
  }
};

class CommitDataRequest_ChunkToPatch_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  CommitDataRequest_ChunkToPatch_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_ChunkToPatch_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_ChunkToPatch_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_target_buffer() const { return at<1>().valid(); }
  uint32_t target_buffer() const { return at<1>().as_uint32(); }
  bool has_writer_id() const { return at<2>().valid(); }
  uint32_t writer_id() const { return at<2>().as_uint32(); }
  bool has_chunk_id() const { return at<3>().valid(); }
  uint32_t chunk_id() const { return at<3>().as_uint32(); }
  bool has_patches() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> patches() const { return GetRepeated<::protozero::ConstBytes>(4); }
  bool has_has_more_patches() const { return at<5>().valid(); }
  bool has_more_patches() const { return at<5>().as_bool(); }
};

class CommitDataRequest_ChunkToPatch : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_ChunkToPatch_Decoder;
  enum : int32_t {
    kTargetBufferFieldNumber = 1,
    kWriterIdFieldNumber = 2,
    kChunkIdFieldNumber = 3,
    kPatchesFieldNumber = 4,
    kHasMorePatchesFieldNumber = 5,
  };
  using Patch = ::perfetto::protos::pbzero::CommitDataRequest_ChunkToPatch_Patch;
  void set_target_buffer(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_writer_id(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_chunk_id(uint32_t value) {
    AppendVarInt(3, value);
  }
  template <typename T = CommitDataRequest_ChunkToPatch_Patch> T* add_patches() {
    return BeginNestedMessage<T>(4);
  }

  void set_has_more_patches(bool value) {
    AppendTinyVarInt(5, value);
  }
};

class CommitDataRequest_ChunkToPatch_Patch_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CommitDataRequest_ChunkToPatch_Patch_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_ChunkToPatch_Patch_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_ChunkToPatch_Patch_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_offset() const { return at<1>().valid(); }
  uint32_t offset() const { return at<1>().as_uint32(); }
  bool has_data() const { return at<2>().valid(); }
  ::protozero::ConstBytes data() const { return at<2>().as_bytes(); }
};

class CommitDataRequest_ChunkToPatch_Patch : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_ChunkToPatch_Patch_Decoder;
  enum : int32_t {
    kOffsetFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  void set_offset(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_data(const std::string& value) {
    AppendBytes(2, value.data(), value.size());
  }
  void set_data(const uint8_t* data, size_t size) {
    AppendBytes(2, data, size);
  }
};

class CommitDataRequest_ChunksToMove_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CommitDataRequest_ChunksToMove_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CommitDataRequest_ChunksToMove_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CommitDataRequest_ChunksToMove_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_page() const { return at<1>().valid(); }
  uint32_t page() const { return at<1>().as_uint32(); }
  bool has_chunk() const { return at<2>().valid(); }
  uint32_t chunk() const { return at<2>().as_uint32(); }
  bool has_target_buffer() const { return at<3>().valid(); }
  uint32_t target_buffer() const { return at<3>().as_uint32(); }
};

class CommitDataRequest_ChunksToMove : public ::protozero::Message {
 public:
  using Decoder = CommitDataRequest_ChunksToMove_Decoder;
  enum : int32_t {
    kPageFieldNumber = 1,
    kChunkFieldNumber = 2,
    kTargetBufferFieldNumber = 3,
  };
  void set_page(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_chunk(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_target_buffer(uint32_t value) {
    AppendVarInt(3, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
