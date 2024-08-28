// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/cpp_features.proto
// Protobuf C++ Version: 5.28.1-dev

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fcpp_5ffeatures_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fcpp_5ffeatures_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fcpp_5ffeatures_2eproto PROTOBUF_EXPORT

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct PROTOBUF_EXPORT TableStruct_google_2fprotobuf_2fcpp_5ffeatures_2eproto {
  static const ::uint32_t offsets[];
};
PROTOBUF_EXPORT extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto;
namespace pb {
class CppFeatures;
struct CppFeaturesDefaultTypeInternal;
PROTOBUF_EXPORT extern CppFeaturesDefaultTypeInternal _CppFeatures_default_instance_;
}  // namespace pb
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace pb {
enum CppFeatures_StringType : int {
  CppFeatures_StringType_STRING_TYPE_UNKNOWN = 0,
  CppFeatures_StringType_VIEW = 1,
  CppFeatures_StringType_CORD = 2,
  CppFeatures_StringType_STRING = 3,
};

PROTOBUF_EXPORT bool CppFeatures_StringType_IsValid(int value);
PROTOBUF_EXPORT extern const uint32_t CppFeatures_StringType_internal_data_[];
constexpr CppFeatures_StringType CppFeatures_StringType_StringType_MIN = static_cast<CppFeatures_StringType>(0);
constexpr CppFeatures_StringType CppFeatures_StringType_StringType_MAX = static_cast<CppFeatures_StringType>(3);
constexpr int CppFeatures_StringType_StringType_ARRAYSIZE = 3 + 1;
PROTOBUF_EXPORT const ::google::protobuf::EnumDescriptor*
CppFeatures_StringType_descriptor();
template <typename T>
const std::string& CppFeatures_StringType_Name(T value) {
  static_assert(std::is_same<T, CppFeatures_StringType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to StringType_Name().");
  return CppFeatures_StringType_Name(static_cast<CppFeatures_StringType>(value));
}
template <>
inline const std::string& CppFeatures_StringType_Name(CppFeatures_StringType value) {
  return ::google::protobuf::internal::NameOfDenseEnum<CppFeatures_StringType_descriptor,
                                                 0, 3>(
      static_cast<int>(value));
}
inline bool CppFeatures_StringType_Parse(absl::string_view name, CppFeatures_StringType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CppFeatures_StringType>(
      CppFeatures_StringType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class PROTOBUF_EXPORT CppFeatures final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:pb.CppFeatures) */ {
 public:
  inline CppFeatures() : CppFeatures(nullptr) {}
  ~CppFeatures() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR CppFeatures(
      ::google::protobuf::internal::ConstantInitialized);

  inline CppFeatures(const CppFeatures& from) : CppFeatures(nullptr, from) {}
  inline CppFeatures(CppFeatures&& from) noexcept
      : CppFeatures(nullptr, std::move(from)) {}
  inline CppFeatures& operator=(const CppFeatures& from) {
    CopyFrom(from);
    return *this;
  }
  inline CppFeatures& operator=(CppFeatures&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CppFeatures& default_instance() {
    return *internal_default_instance();
  }
  static inline const CppFeatures* internal_default_instance() {
    return reinterpret_cast<const CppFeatures*>(
        &_CppFeatures_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(CppFeatures& a, CppFeatures& b) { a.Swap(&b); }
  inline void Swap(CppFeatures* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CppFeatures* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CppFeatures* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<CppFeatures>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const CppFeatures& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const CppFeatures& from) { CppFeatures::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(CppFeatures* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "pb.CppFeatures"; }

 protected:
  explicit CppFeatures(::google::protobuf::Arena* arena);
  CppFeatures(::google::protobuf::Arena* arena, const CppFeatures& from);
  CppFeatures(::google::protobuf::Arena* arena, CppFeatures&& from) noexcept
      : CppFeatures(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------
  using StringType = CppFeatures_StringType;
  static constexpr StringType STRING_TYPE_UNKNOWN = CppFeatures_StringType_STRING_TYPE_UNKNOWN;
  static constexpr StringType VIEW = CppFeatures_StringType_VIEW;
  static constexpr StringType CORD = CppFeatures_StringType_CORD;
  static constexpr StringType STRING = CppFeatures_StringType_STRING;
  static inline bool StringType_IsValid(int value) {
    return CppFeatures_StringType_IsValid(value);
  }
  static constexpr StringType StringType_MIN = CppFeatures_StringType_StringType_MIN;
  static constexpr StringType StringType_MAX = CppFeatures_StringType_StringType_MAX;
  static constexpr int StringType_ARRAYSIZE = CppFeatures_StringType_StringType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor* StringType_descriptor() {
    return CppFeatures_StringType_descriptor();
  }
  template <typename T>
  static inline const std::string& StringType_Name(T value) {
    return CppFeatures_StringType_Name(value);
  }
  static inline bool StringType_Parse(absl::string_view name, StringType* value) {
    return CppFeatures_StringType_Parse(name, value);
  }

  // accessors -------------------------------------------------------
  enum : int {
    kLegacyClosedEnumFieldNumber = 1,
    kStringTypeFieldNumber = 2,
  };
  // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
  bool has_legacy_closed_enum() const;
  void clear_legacy_closed_enum() ;
  bool legacy_closed_enum() const;
  void set_legacy_closed_enum(bool value);

  private:
  bool _internal_legacy_closed_enum() const;
  void _internal_set_legacy_closed_enum(bool value);

  public:
  // optional .pb.CppFeatures.StringType string_type = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
  bool has_string_type() const;
  void clear_string_type() ;
  ::pb::CppFeatures_StringType string_type() const;
  void set_string_type(::pb::CppFeatures_StringType value);

  private:
  ::pb::CppFeatures_StringType _internal_string_type() const;
  void _internal_set_string_type(::pb::CppFeatures_StringType value);

  public:
  // @@protoc_insertion_point(class_scope:pb.CppFeatures)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 1,
      0, 2>
      _table_;


  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const CppFeatures& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    bool legacy_closed_enum_;
    int string_type_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2fcpp_5ffeatures_2eproto;
};

// ===================================================================



static const int kCppFieldNumber = 1000;
PROTOBUF_EXPORT extern ::google::protobuf::internal::ExtensionIdentifier<
    ::google::protobuf::FeatureSet, ::google::protobuf::internal::MessageTypeTraits< ::pb::CppFeatures >, 11,
    false>
    cpp;

// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// CppFeatures

// optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
inline bool CppFeatures::has_legacy_closed_enum() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void CppFeatures::clear_legacy_closed_enum() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.legacy_closed_enum_ = false;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline bool CppFeatures::legacy_closed_enum() const {
  // @@protoc_insertion_point(field_get:pb.CppFeatures.legacy_closed_enum)
  return _internal_legacy_closed_enum();
}
inline void CppFeatures::set_legacy_closed_enum(bool value) {
  _internal_set_legacy_closed_enum(value);
  _impl_._has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_set:pb.CppFeatures.legacy_closed_enum)
}
inline bool CppFeatures::_internal_legacy_closed_enum() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.legacy_closed_enum_;
}
inline void CppFeatures::_internal_set_legacy_closed_enum(bool value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.legacy_closed_enum_ = value;
}

// optional .pb.CppFeatures.StringType string_type = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
inline bool CppFeatures::has_string_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void CppFeatures::clear_string_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.string_type_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::pb::CppFeatures_StringType CppFeatures::string_type() const {
  // @@protoc_insertion_point(field_get:pb.CppFeatures.string_type)
  return _internal_string_type();
}
inline void CppFeatures::set_string_type(::pb::CppFeatures_StringType value) {
  _internal_set_string_type(value);
  _impl_._has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_set:pb.CppFeatures.string_type)
}
inline ::pb::CppFeatures_StringType CppFeatures::_internal_string_type() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return static_cast<::pb::CppFeatures_StringType>(_impl_.string_type_);
}
inline void CppFeatures::_internal_set_string_type(::pb::CppFeatures_StringType value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  assert(::pb::CppFeatures_StringType_IsValid(value));
  _impl_.string_type_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::pb::CppFeatures_StringType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::pb::CppFeatures_StringType>() {
  return ::pb::CppFeatures_StringType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2fcpp_5ffeatures_2eproto_2epb_2eh
