// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: enum.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "enum.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace pbmsg {

namespace {

const ::google::protobuf::EnumDescriptor* EmViewType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_enum_2eproto() {
  protobuf_AddDesc_enum_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "enum.proto");
  GOOGLE_CHECK(file != NULL);
  EmViewType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_enum_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_enum_2eproto() {
}

void protobuf_AddDesc_enum_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nenum.proto\022\005pbmsg*K\n\nEmViewType\022\026\n\022emV"
    "iewType_Invalid\020\000\022\021\n\remViewType_Ep\020\001\022\022\n\016"
    "emViewType_Vmp\020\002", 96);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "enum.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_enum_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_enum_2eproto {
  StaticDescriptorInitializer_enum_2eproto() {
    protobuf_AddDesc_enum_2eproto();
  }
} static_descriptor_initializer_enum_2eproto_;
const ::google::protobuf::EnumDescriptor* EmViewType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EmViewType_descriptor_;
}
bool EmViewType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pbmsg

// @@protoc_insertion_point(global_scope)