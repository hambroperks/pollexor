//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ImmutableEnumMap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectImmutableEnumMap_RESTRICT
#define ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableEnumMap_RESTRICT
#if !defined (_ComGoogleCommonCollectImmutableEnumMap_) && (ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumMap_

@class ComGoogleCommonCollectImmutableSet;
@class JavaUtilEnumMap;

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"


@interface ComGoogleCommonCollectImmutableEnumMap : ComGoogleCommonCollectImmutableMap {
}

+ (ComGoogleCommonCollectImmutableMap *)asImmutableWithJavaUtilEnumMap:(JavaUtilEnumMap *)map;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jint)size;

- (jboolean)containsKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (jboolean)isPartialView;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumMap)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableEnumMap_asImmutableWithJavaUtilEnumMap_(JavaUtilEnumMap *map);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumMap)
#if !defined (_ComGoogleCommonCollectImmutableEnumMap_createKeySet_ImmutableEnumMapKeySet_) && (ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumMap_createKeySet_ImmutableEnumMapKeySet_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumMap_createKeySet_ImmutableEnumMapKeySet_

@class ComGoogleCommonCollectImmutableEnumMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"


@interface ComGoogleCommonCollectImmutableEnumMap_createKeySet_ImmutableEnumMapKeySet : ComGoogleCommonCollectImmutableSet {
}

- (jboolean)containsWithId:(id)object;

- (jint)size;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jboolean)isPartialView;

- (instancetype)initWithComGoogleCommonCollectImmutableEnumMap:(ComGoogleCommonCollectImmutableEnumMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumMap_createKeySet_ImmutableEnumMapKeySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumMap_createKeySet_ImmutableEnumMapKeySet)
#if !defined (_ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_) && (ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_

@class ComGoogleCommonCollectImmutableEnumMap;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableMapEntrySet_RESTRICT 1
#define ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE 1
#include "com/google/common/collect/ImmutableMapEntrySet.h"


@interface ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet : ComGoogleCommonCollectImmutableMapEntrySet {
}

- (ComGoogleCommonCollectImmutableMap *)map;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (instancetype)initWithComGoogleCommonCollectImmutableEnumMap:(ComGoogleCommonCollectImmutableEnumMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet)
#if !defined (_ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_$1_) && (ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_$1_

@class ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"


@interface ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_$1 : ComGoogleCommonCollectUnmodifiableIterator {
}

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet:(ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumMap_createEntrySet_ImmutableEnumMapEntrySet_$1)
#if !defined (_ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm_) && (ComGoogleCommonCollectImmutableEnumMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm_

@class JavaUtilEnumMap;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm : NSObject < JavaIoSerializable > {
 @public
  JavaUtilEnumMap *delegate_;
}

- (instancetype)initWithJavaUtilEnumMap:(JavaUtilEnumMap *)delegate;

- (id)readResolve;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm, delegate_, JavaUtilEnumMap *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableEnumMap_EnumSerializedForm)
