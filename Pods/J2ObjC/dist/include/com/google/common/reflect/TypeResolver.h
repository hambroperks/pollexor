//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/reflect/TypeResolver.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonReflectTypeResolver_RESTRICT
#define ComGoogleCommonReflectTypeResolver_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonReflectTypeResolver_RESTRICT
#if ComGoogleCommonReflectTypeResolver_$1_INCLUDE
#define ComGoogleCommonReflectTypeResolver_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector_) && (ComGoogleCommonReflectTypeResolver_INCLUDE_ALL || ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector_INCLUDE)
#define _ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonReflectTypeResolver_WildcardCapturer;
@class IOSClass;
@protocol JavaLangReflectParameterizedType;
@protocol JavaLangReflectType;
@protocol JavaLangReflectTypeVariable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;


@interface ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector : NSObject {
}

+ (ComGoogleCommonCollectImmutableMap *)getTypeMappingsWithJavaLangReflectType:(id<JavaLangReflectType>)contextType;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector_getTypeMappingsWithJavaLangReflectType_(id<JavaLangReflectType> contextType);

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver_WildcardCapturer *ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector_wildcardCapturer_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector, wildcardCapturer_, ComGoogleCommonReflectTypeResolver_WildcardCapturer *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver_TypeMappingIntrospector)
#if !defined (_ComGoogleCommonReflectTypeResolver_WildcardCapturer_) && (ComGoogleCommonReflectTypeResolver_INCLUDE_ALL || ComGoogleCommonReflectTypeResolver_WildcardCapturer_INCLUDE)
#define _ComGoogleCommonReflectTypeResolver_WildcardCapturer_

@class IOSObjectArray;
@class JavaUtilConcurrentAtomicAtomicInteger;
@protocol JavaLangReflectType;


@interface ComGoogleCommonReflectTypeResolver_WildcardCapturer : NSObject {
}

- (id<JavaLangReflectType>)captureWithJavaLangReflectType:(id<JavaLangReflectType>)type;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeResolver_WildcardCapturer)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver_WildcardCapturer)
#if !defined (_ComGoogleCommonReflectTypeResolver_) && (ComGoogleCommonReflectTypeResolver_INCLUDE_ALL || ComGoogleCommonReflectTypeResolver_INCLUDE)
#define _ComGoogleCommonReflectTypeResolver_

@class ComGoogleCommonCollectImmutableMap;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangReflectGenericArrayType;
@protocol JavaLangReflectParameterizedType;
@protocol JavaLangReflectType;
@protocol JavaLangReflectTypeVariable;
@protocol JavaUtilMap;


@interface ComGoogleCommonReflectTypeResolver : NSObject {
}

- (instancetype)init;

+ (ComGoogleCommonReflectTypeResolver *)accordingToWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (ComGoogleCommonReflectTypeResolver *)whereWithJavaLangReflectType:(id<JavaLangReflectType>)formal
                                             withJavaLangReflectType:(id<JavaLangReflectType>)actual;

- (ComGoogleCommonReflectTypeResolver *)whereWithJavaUtilMap:(id<JavaUtilMap>)mappings;

- (id<JavaLangReflectType>)resolveTypeWithJavaLangReflectType:(id<JavaLangReflectType>)type;

- (id<JavaLangReflectType>)resolveTypeVariableWithJavaLangReflectTypeVariable:(id<JavaLangReflectTypeVariable>)var
                                       withComGoogleCommonReflectTypeResolver:(ComGoogleCommonReflectTypeResolver *)guardedResolver;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeResolver)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonReflectTypeResolver *ComGoogleCommonReflectTypeResolver_accordingToWithJavaLangReflectType_(id<JavaLangReflectType> type);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver)
#if !defined (_ComGoogleCommonReflectTypeResolver_$1_) && (ComGoogleCommonReflectTypeResolver_INCLUDE_ALL || ComGoogleCommonReflectTypeResolver_$1_INCLUDE)
#define _ComGoogleCommonReflectTypeResolver_$1_

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangReflectType;
@protocol JavaLangReflectTypeVariable;


@interface ComGoogleCommonReflectTypeResolver_$1 : ComGoogleCommonReflectTypeResolver {
}

- (id<JavaLangReflectType>)resolveTypeVariableWithJavaLangReflectTypeVariable:(id<JavaLangReflectTypeVariable>)intermediateVar
                                       withComGoogleCommonReflectTypeResolver:(ComGoogleCommonReflectTypeResolver *)guardedResolver;

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)arg$0
                           withJavaLangReflectTypeVariable:(id<JavaLangReflectTypeVariable>)capture$0
                    withComGoogleCommonReflectTypeResolver:(ComGoogleCommonReflectTypeResolver *)capture$1;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeResolver_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeResolver_$1)
