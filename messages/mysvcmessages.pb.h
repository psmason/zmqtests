// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysvcmessages.proto

#ifndef PROTOBUF_mysvcmessages_2eproto__INCLUDED
#define PROTOBUF_mysvcmessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_mysvcmessages_2eproto();
void protobuf_AssignDesc_mysvcmessages_2eproto();
void protobuf_ShutdownFile_mysvcmessages_2eproto();

class MySvcMessage;
class TestRequest;
class TestResponse;

// ===================================================================

class MySvcMessage : public ::google::protobuf::Message {
 public:
  MySvcMessage();
  virtual ~MySvcMessage();

  MySvcMessage(const MySvcMessage& from);

  inline MySvcMessage& operator=(const MySvcMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MySvcMessage& default_instance();

  enum TypesCase {
    kTestRequest = 1,
    kTestResponse = 2,
    TYPES_NOT_SET = 0,
  };

  void Swap(MySvcMessage* other);

  // implements Message ----------------------------------------------

  inline MySvcMessage* New() const { return New(NULL); }

  MySvcMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MySvcMessage& from);
  void MergeFrom(const MySvcMessage& from);
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
  void InternalSwap(MySvcMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tutorial.TestRequest testRequest = 1;
  inline bool has_testrequest() const;
  inline void clear_testrequest();
  static const int kTestRequestFieldNumber = 1;
  inline const ::tutorial::TestRequest& testrequest() const;
  inline ::tutorial::TestRequest* mutable_testrequest();
  inline ::tutorial::TestRequest* release_testrequest();
  inline void set_allocated_testrequest(::tutorial::TestRequest* testrequest);

  // optional .tutorial.TestResponse testResponse = 2;
  inline bool has_testresponse() const;
  inline void clear_testresponse();
  static const int kTestResponseFieldNumber = 2;
  inline const ::tutorial::TestResponse& testresponse() const;
  inline ::tutorial::TestResponse* mutable_testresponse();
  inline ::tutorial::TestResponse* release_testresponse();
  inline void set_allocated_testresponse(::tutorial::TestResponse* testresponse);

  inline TypesCase types_case() const;
  // @@protoc_insertion_point(class_scope:tutorial.MySvcMessage)
 private:
  inline void set_has_testrequest();
  inline void set_has_testresponse();

  inline bool has_types() const;
  void clear_types();
  inline void clear_has_types();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  union TypesUnion {
    TypesUnion() {}
    ::tutorial::TestRequest* testrequest_;
    ::tutorial::TestResponse* testresponse_;
  } types_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_mysvcmessages_2eproto();
  friend void protobuf_AssignDesc_mysvcmessages_2eproto();
  friend void protobuf_ShutdownFile_mysvcmessages_2eproto();

  void InitAsDefaultInstance();
  static MySvcMessage* default_instance_;
};
// -------------------------------------------------------------------

class TestRequest : public ::google::protobuf::Message {
 public:
  TestRequest();
  virtual ~TestRequest();

  TestRequest(const TestRequest& from);

  inline TestRequest& operator=(const TestRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestRequest& default_instance();

  void Swap(TestRequest* other);

  // implements Message ----------------------------------------------

  inline TestRequest* New() const { return New(NULL); }

  TestRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestRequest& from);
  void MergeFrom(const TestRequest& from);
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
  void InternalSwap(TestRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string msg = 1;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 1;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const char* value, size_t size);
  inline ::std::string* mutable_msg();
  inline ::std::string* release_msg();
  inline void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:tutorial.TestRequest)
 private:
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  friend void  protobuf_AddDesc_mysvcmessages_2eproto();
  friend void protobuf_AssignDesc_mysvcmessages_2eproto();
  friend void protobuf_ShutdownFile_mysvcmessages_2eproto();

  void InitAsDefaultInstance();
  static TestRequest* default_instance_;
};
// -------------------------------------------------------------------

class TestResponse : public ::google::protobuf::Message {
 public:
  TestResponse();
  virtual ~TestResponse();

  TestResponse(const TestResponse& from);

  inline TestResponse& operator=(const TestResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TestResponse& default_instance();

  void Swap(TestResponse* other);

  // implements Message ----------------------------------------------

  inline TestResponse* New() const { return New(NULL); }

  TestResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestResponse& from);
  void MergeFrom(const TestResponse& from);
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
  void InternalSwap(TestResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string msg = 1;
  inline bool has_msg() const;
  inline void clear_msg();
  static const int kMsgFieldNumber = 1;
  inline const ::std::string& msg() const;
  inline void set_msg(const ::std::string& value);
  inline void set_msg(const char* value);
  inline void set_msg(const char* value, size_t size);
  inline ::std::string* mutable_msg();
  inline ::std::string* release_msg();
  inline void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:tutorial.TestResponse)
 private:
  inline void set_has_msg();
  inline void clear_has_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  friend void  protobuf_AddDesc_mysvcmessages_2eproto();
  friend void protobuf_AssignDesc_mysvcmessages_2eproto();
  friend void protobuf_ShutdownFile_mysvcmessages_2eproto();

  void InitAsDefaultInstance();
  static TestResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// MySvcMessage

// optional .tutorial.TestRequest testRequest = 1;
inline bool MySvcMessage::has_testrequest() const {
  return types_case() == kTestRequest;
}
inline void MySvcMessage::set_has_testrequest() {
  _oneof_case_[0] = kTestRequest;
}
inline void MySvcMessage::clear_testrequest() {
  if (has_testrequest()) {
    delete types_.testrequest_;
    clear_has_types();
  }
}
inline const ::tutorial::TestRequest& MySvcMessage::testrequest() const {
  // @@protoc_insertion_point(field_get:tutorial.MySvcMessage.testRequest)
  return has_testrequest() ? *types_.testrequest_
                      : ::tutorial::TestRequest::default_instance();
}
inline ::tutorial::TestRequest* MySvcMessage::mutable_testrequest() {
  if (!has_testrequest()) {
    clear_types();
    set_has_testrequest();
    types_.testrequest_ = new ::tutorial::TestRequest;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.MySvcMessage.testRequest)
  return types_.testrequest_;
}
inline ::tutorial::TestRequest* MySvcMessage::release_testrequest() {
  if (has_testrequest()) {
    clear_has_types();
    ::tutorial::TestRequest* temp = types_.testrequest_;
    types_.testrequest_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void MySvcMessage::set_allocated_testrequest(::tutorial::TestRequest* testrequest) {
  clear_types();
  if (testrequest) {
    set_has_testrequest();
    types_.testrequest_ = testrequest;
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.MySvcMessage.testRequest)
}

// optional .tutorial.TestResponse testResponse = 2;
inline bool MySvcMessage::has_testresponse() const {
  return types_case() == kTestResponse;
}
inline void MySvcMessage::set_has_testresponse() {
  _oneof_case_[0] = kTestResponse;
}
inline void MySvcMessage::clear_testresponse() {
  if (has_testresponse()) {
    delete types_.testresponse_;
    clear_has_types();
  }
}
inline const ::tutorial::TestResponse& MySvcMessage::testresponse() const {
  // @@protoc_insertion_point(field_get:tutorial.MySvcMessage.testResponse)
  return has_testresponse() ? *types_.testresponse_
                      : ::tutorial::TestResponse::default_instance();
}
inline ::tutorial::TestResponse* MySvcMessage::mutable_testresponse() {
  if (!has_testresponse()) {
    clear_types();
    set_has_testresponse();
    types_.testresponse_ = new ::tutorial::TestResponse;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.MySvcMessage.testResponse)
  return types_.testresponse_;
}
inline ::tutorial::TestResponse* MySvcMessage::release_testresponse() {
  if (has_testresponse()) {
    clear_has_types();
    ::tutorial::TestResponse* temp = types_.testresponse_;
    types_.testresponse_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void MySvcMessage::set_allocated_testresponse(::tutorial::TestResponse* testresponse) {
  clear_types();
  if (testresponse) {
    set_has_testresponse();
    types_.testresponse_ = testresponse;
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.MySvcMessage.testResponse)
}

inline bool MySvcMessage::has_types() const {
  return types_case() != TYPES_NOT_SET;
}
inline void MySvcMessage::clear_has_types() {
  _oneof_case_[0] = TYPES_NOT_SET;
}
inline MySvcMessage::TypesCase MySvcMessage::types_case() const {
  return MySvcMessage::TypesCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// TestRequest

// required string msg = 1;
inline bool TestRequest::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestRequest::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestRequest::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestRequest::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
inline const ::std::string& TestRequest::msg() const {
  // @@protoc_insertion_point(field_get:tutorial.TestRequest.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestRequest::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.TestRequest.msg)
}
inline void TestRequest::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.TestRequest.msg)
}
inline void TestRequest::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.TestRequest.msg)
}
inline ::std::string* TestRequest::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:tutorial.TestRequest.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestRequest::release_msg() {
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestRequest::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:tutorial.TestRequest.msg)
}

// -------------------------------------------------------------------

// TestResponse

// required string msg = 1;
inline bool TestResponse::has_msg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestResponse::set_has_msg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestResponse::clear_has_msg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestResponse::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
inline const ::std::string& TestResponse::msg() const {
  // @@protoc_insertion_point(field_get:tutorial.TestResponse.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestResponse::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.TestResponse.msg)
}
inline void TestResponse::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.TestResponse.msg)
}
inline void TestResponse::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.TestResponse.msg)
}
inline ::std::string* TestResponse::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:tutorial.TestResponse.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestResponse::release_msg() {
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestResponse::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:tutorial.TestResponse.msg)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_mysvcmessages_2eproto__INCLUDED
