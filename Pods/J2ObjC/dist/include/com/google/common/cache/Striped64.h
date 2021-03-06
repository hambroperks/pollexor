//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/Striped64.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCacheStriped64_RESTRICT
#define ComGoogleCommonCacheStriped64_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheStriped64_RESTRICT
#if !defined (_ComGoogleCommonCacheStriped64_) && (ComGoogleCommonCacheStriped64_INCLUDE_ALL || ComGoogleCommonCacheStriped64_INCLUDE)
#define _ComGoogleCommonCacheStriped64_

@class ComGoogleCommonCacheStriped64_HashCode;
@class ComGoogleCommonCacheStriped64_ThreadHashCode;
@class IOSObjectArray;
@class SunMiscUnsafe;


@interface ComGoogleCommonCacheStriped64 : NSNumber {
 @public
  IOSObjectArray *cells_;
  jlong base_;
  jint busy_;
}

- (instancetype)init;

- (jboolean)casBaseWithLong:(jlong)cmp
                   withLong:(jlong)val;

- (jboolean)casBusy;

- (jlong)fnWithLong:(jlong)currentValue
           withLong:(jlong)newValue;

- (void)retryUpdateWithLong:(jlong)x
withComGoogleCommonCacheStriped64_HashCode:(ComGoogleCommonCacheStriped64_HashCode *)hc
                withBoolean:(jboolean)wasUncontended;

- (void)internalResetWithLong:(jlong)initialValue;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCacheStriped64_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCacheStriped64)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheStriped64, cells_, IOSObjectArray *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCacheStriped64_ThreadHashCode *ComGoogleCommonCacheStriped64_threadHashCode_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64, threadHashCode_, ComGoogleCommonCacheStriped64_ThreadHashCode *)

FOUNDATION_EXPORT jint ComGoogleCommonCacheStriped64_NCPU_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64, NCPU_, jint)

FOUNDATION_EXPORT SunMiscUnsafe *ComGoogleCommonCacheStriped64_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong ComGoogleCommonCacheStriped64_baseOffset_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64, baseOffset_, jlong)

FOUNDATION_EXPORT jlong ComGoogleCommonCacheStriped64_busyOffset_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64, busyOffset_, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheStriped64)
#if !defined (_ComGoogleCommonCacheStriped64_Cell_) && (ComGoogleCommonCacheStriped64_INCLUDE_ALL || ComGoogleCommonCacheStriped64_Cell_INCLUDE)
#define _ComGoogleCommonCacheStriped64_Cell_

@class SunMiscUnsafe;


@interface ComGoogleCommonCacheStriped64_Cell : NSObject {
 @public
  jlong p0_, p1_, p2_, p3_, p4_, p5_, p6_;
  jlong value_;
  jlong q0_, q1_, q2_, q3_, q4_, q5_, q6_;
}

- (instancetype)initWithLong:(jlong)x;

- (jboolean)casWithLong:(jlong)cmp
               withLong:(jlong)val;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCacheStriped64_Cell_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCacheStriped64_Cell)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT SunMiscUnsafe *ComGoogleCommonCacheStriped64_Cell_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64_Cell, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong ComGoogleCommonCacheStriped64_Cell_valueOffset_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64_Cell, valueOffset_, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheStriped64_Cell)
#if !defined (_ComGoogleCommonCacheStriped64_HashCode_) && (ComGoogleCommonCacheStriped64_INCLUDE_ALL || ComGoogleCommonCacheStriped64_HashCode_INCLUDE)
#define _ComGoogleCommonCacheStriped64_HashCode_

@class JavaUtilRandom;


@interface ComGoogleCommonCacheStriped64_HashCode : NSObject {
 @public
  jint code_;
}

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCacheStriped64_HashCode_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCacheStriped64_HashCode)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilRandom *ComGoogleCommonCacheStriped64_HashCode_rng_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCacheStriped64_HashCode, rng_, JavaUtilRandom *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheStriped64_HashCode)
#if !defined (_ComGoogleCommonCacheStriped64_ThreadHashCode_) && (ComGoogleCommonCacheStriped64_INCLUDE_ALL || ComGoogleCommonCacheStriped64_ThreadHashCode_INCLUDE)
#define _ComGoogleCommonCacheStriped64_ThreadHashCode_

@class ComGoogleCommonCacheStriped64_HashCode;

#define JavaLangThreadLocal_RESTRICT 1
#define JavaLangThreadLocal_INCLUDE 1
#include "java/lang/ThreadLocal.h"


@interface ComGoogleCommonCacheStriped64_ThreadHashCode : JavaLangThreadLocal {
}

- (ComGoogleCommonCacheStriped64_HashCode *)initialValue OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheStriped64_ThreadHashCode)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheStriped64_ThreadHashCode)
#if !defined (_ComGoogleCommonCacheStriped64_$1_) && (ComGoogleCommonCacheStriped64_INCLUDE_ALL || ComGoogleCommonCacheStriped64_$1_INCLUDE)
#define _ComGoogleCommonCacheStriped64_$1_

@class SunMiscUnsafe;

#define JavaSecurityPrivilegedExceptionAction_RESTRICT 1
#define JavaSecurityPrivilegedExceptionAction_INCLUDE 1
#include "java/security/PrivilegedExceptionAction.h"


@interface ComGoogleCommonCacheStriped64_$1 : NSObject < JavaSecurityPrivilegedExceptionAction > {
}

- (SunMiscUnsafe *)run;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheStriped64_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheStriped64_$1)
