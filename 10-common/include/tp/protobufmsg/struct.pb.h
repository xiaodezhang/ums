// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: struct.proto

#ifndef PROTOBUF_struct_2eproto__INCLUDED
#define PROTOBUF_struct_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "base.pb.h"
#include "enum.pb.h"
// @@protoc_insertion_point(includes)

namespace pbmsg {

// Internal implementation detail -- do not call these.
void PROTOBUFMSG_API protobuf_AddDesc_struct_2eproto();
void protobuf_AssignDesc_struct_2eproto();
void protobuf_ShutdownFile_struct_2eproto();

class TViewReq;

// ===================================================================

class PROTOBUFMSG_API TViewReq : public ::google::protobuf::Message {
 public:
  TViewReq();
  virtual ~TViewReq();

  TViewReq(const TViewReq& from);

  inline TViewReq& operator=(const TViewReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TViewReq& default_instance();

  void Swap(TViewReq* other);

  // implements Message ----------------------------------------------

  TViewReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TViewReq& from);
  void MergeFrom(const TViewReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 wConfId = 1;
  inline bool has_wconfid() const;
  inline void clear_wconfid();
  static const int kWConfIdFieldNumber = 1;
  inline ::google::protobuf::uint32 wconfid() const;
  inline void set_wconfid(::google::protobuf::uint32 value);

  // optional uint32 wSrcEpId = 2;
  inline bool has_wsrcepid() const;
  inline void clear_wsrcepid();
  static const int kWSrcEpIdFieldNumber = 2;
  inline ::google::protobuf::uint32 wsrcepid() const;
  inline void set_wsrcepid(::google::protobuf::uint32 value);

  // optional uint32 wSrcScreenIndex = 3;
  inline bool has_wsrcscreenindex() const;
  inline void clear_wsrcscreenindex();
  static const int kWSrcScreenIndexFieldNumber = 3;
  inline ::google::protobuf::uint32 wsrcscreenindex() const;
  inline void set_wsrcscreenindex(::google::protobuf::uint32 value);

  // optional uint32 wDstEpId = 4;
  inline bool has_wdstepid() const;
  inline void clear_wdstepid();
  static const int kWDstEpIdFieldNumber = 4;
  inline ::google::protobuf::uint32 wdstepid() const;
  inline void set_wdstepid(::google::protobuf::uint32 value);

  // optional uint32 wDstScreenIndex = 5;
  inline bool has_wdstscreenindex() const;
  inline void clear_wdstscreenindex();
  static const int kWDstScreenIndexFieldNumber = 5;
  inline ::google::protobuf::uint32 wdstscreenindex() const;
  inline void set_wdstscreenindex(::google::protobuf::uint32 value);

  // optional .pbmsg.EmViewType emViewType = 6;
  inline bool has_emviewtype() const;
  inline void clear_emviewtype();
  static const int kEmViewTypeFieldNumber = 6;
  inline ::pbmsg::EmViewType emviewtype() const;
  inline void set_emviewtype(::pbmsg::EmViewType value);

  // @@protoc_insertion_point(class_scope:pbmsg.TViewReq)
 private:
  inline void set_has_wconfid();
  inline void clear_has_wconfid();
  inline void set_has_wsrcepid();
  inline void clear_has_wsrcepid();
  inline void set_has_wsrcscreenindex();
  inline void clear_has_wsrcscreenindex();
  inline void set_has_wdstepid();
  inline void clear_has_wdstepid();
  inline void set_has_wdstscreenindex();
  inline void clear_has_wdstscreenindex();
  inline void set_has_emviewtype();
  inline void clear_has_emviewtype();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 wconfid_;
  ::google::protobuf::uint32 wsrcepid_;
  ::google::protobuf::uint32 wsrcscreenindex_;
  ::google::protobuf::uint32 wdstepid_;
  ::google::protobuf::uint32 wdstscreenindex_;
  int emviewtype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void PROTOBUFMSG_API protobuf_AddDesc_struct_2eproto();
  friend void protobuf_AssignDesc_struct_2eproto();
  friend void protobuf_ShutdownFile_struct_2eproto();

  void InitAsDefaultInstance();
  static TViewReq* default_instance_;
};
// ===================================================================


// ===================================================================

// TViewReq

// optional uint32 wConfId = 1;
inline bool TViewReq::has_wconfid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TViewReq::set_has_wconfid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TViewReq::clear_has_wconfid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TViewReq::clear_wconfid() {
  wconfid_ = 0u;
  clear_has_wconfid();
}
inline ::google::protobuf::uint32 TViewReq::wconfid() const {
  return wconfid_;
}
inline void TViewReq::set_wconfid(::google::protobuf::uint32 value) {
  set_has_wconfid();
  wconfid_ = value;
}

// optional uint32 wSrcEpId = 2;
inline bool TViewReq::has_wsrcepid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TViewReq::set_has_wsrcepid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TViewReq::clear_has_wsrcepid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TViewReq::clear_wsrcepid() {
  wsrcepid_ = 0u;
  clear_has_wsrcepid();
}
inline ::google::protobuf::uint32 TViewReq::wsrcepid() const {
  return wsrcepid_;
}
inline void TViewReq::set_wsrcepid(::google::protobuf::uint32 value) {
  set_has_wsrcepid();
  wsrcepid_ = value;
}

// optional uint32 wSrcScreenIndex = 3;
inline bool TViewReq::has_wsrcscreenindex() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TViewReq::set_has_wsrcscreenindex() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TViewReq::clear_has_wsrcscreenindex() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TViewReq::clear_wsrcscreenindex() {
  wsrcscreenindex_ = 0u;
  clear_has_wsrcscreenindex();
}
inline ::google::protobuf::uint32 TViewReq::wsrcscreenindex() const {
  return wsrcscreenindex_;
}
inline void TViewReq::set_wsrcscreenindex(::google::protobuf::uint32 value) {
  set_has_wsrcscreenindex();
  wsrcscreenindex_ = value;
}

// optional uint32 wDstEpId = 4;
inline bool TViewReq::has_wdstepid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TViewReq::set_has_wdstepid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TViewReq::clear_has_wdstepid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TViewReq::clear_wdstepid() {
  wdstepid_ = 0u;
  clear_has_wdstepid();
}
inline ::google::protobuf::uint32 TViewReq::wdstepid() const {
  return wdstepid_;
}
inline void TViewReq::set_wdstepid(::google::protobuf::uint32 value) {
  set_has_wdstepid();
  wdstepid_ = value;
}

// optional uint32 wDstScreenIndex = 5;
inline bool TViewReq::has_wdstscreenindex() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TViewReq::set_has_wdstscreenindex() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TViewReq::clear_has_wdstscreenindex() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TViewReq::clear_wdstscreenindex() {
  wdstscreenindex_ = 0u;
  clear_has_wdstscreenindex();
}
inline ::google::protobuf::uint32 TViewReq::wdstscreenindex() const {
  return wdstscreenindex_;
}
inline void TViewReq::set_wdstscreenindex(::google::protobuf::uint32 value) {
  set_has_wdstscreenindex();
  wdstscreenindex_ = value;
}

// optional .pbmsg.EmViewType emViewType = 6;
inline bool TViewReq::has_emviewtype() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TViewReq::set_has_emviewtype() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TViewReq::clear_has_emviewtype() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TViewReq::clear_emviewtype() {
  emviewtype_ = 0;
  clear_has_emviewtype();
}
inline ::pbmsg::EmViewType TViewReq::emviewtype() const {
  return static_cast< ::pbmsg::EmViewType >(emviewtype_);
}
inline void TViewReq::set_emviewtype(::pbmsg::EmViewType value) {
  assert(::pbmsg::EmViewType_IsValid(value));
  set_has_emviewtype();
  emviewtype_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pbmsg

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_struct_2eproto__INCLUDED
