//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/DiscreteDomain.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectDiscreteDomain_RESTRICT
#define ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectDiscreteDomain_RESTRICT
#if ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_INCLUDE
#define ComGoogleCommonCollectDiscreteDomain_INCLUDE 1
#endif
#if ComGoogleCommonCollectDiscreteDomain_LongDomain_INCLUDE
#define ComGoogleCommonCollectDiscreteDomain_INCLUDE 1
#endif
#if ComGoogleCommonCollectDiscreteDomain_IntegerDomain_INCLUDE
#define ComGoogleCommonCollectDiscreteDomain_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectDiscreteDomain_) && (ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL || ComGoogleCommonCollectDiscreteDomain_INCLUDE)
#define _ComGoogleCommonCollectDiscreteDomain_

@protocol JavaLangComparable;


@interface ComGoogleCommonCollectDiscreteDomain : NSObject {
}

+ (ComGoogleCommonCollectDiscreteDomain *)integers;

+ (ComGoogleCommonCollectDiscreteDomain *)longs;

+ (ComGoogleCommonCollectDiscreteDomain *)bigIntegers;

- (instancetype)init;

- (id)nextWithJavaLangComparable:(id<JavaLangComparable>)value;

- (id)previousWithJavaLangComparable:(id<JavaLangComparable>)value;

- (jlong)distanceWithJavaLangComparable:(id<JavaLangComparable>)start
                 withJavaLangComparable:(id<JavaLangComparable>)end;

- (id)minValue;

- (id)maxValue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectDiscreteDomain)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_integers();

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_longs();

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain *ComGoogleCommonCollectDiscreteDomain_bigIntegers();
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDiscreteDomain)
#if !defined (_ComGoogleCommonCollectDiscreteDomain_IntegerDomain_) && (ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL || ComGoogleCommonCollectDiscreteDomain_IntegerDomain_INCLUDE)
#define _ComGoogleCommonCollectDiscreteDomain_IntegerDomain_

@class JavaLangInteger;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectDiscreteDomain_IntegerDomain_serialVersionUID 0LL

@interface ComGoogleCommonCollectDiscreteDomain_IntegerDomain : ComGoogleCommonCollectDiscreteDomain < JavaIoSerializable > {
}

- (JavaLangInteger *)nextWithJavaLangComparable:(JavaLangInteger *)value;

- (JavaLangInteger *)previousWithJavaLangComparable:(JavaLangInteger *)value;

- (jlong)distanceWithJavaLangComparable:(JavaLangInteger *)start
                 withJavaLangComparable:(JavaLangInteger *)end;

- (JavaLangInteger *)minValue;

- (JavaLangInteger *)maxValue;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectDiscreteDomain_IntegerDomain_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectDiscreteDomain_IntegerDomain)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain_IntegerDomain *ComGoogleCommonCollectDiscreteDomain_IntegerDomain_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_IntegerDomain, INSTANCE_, ComGoogleCommonCollectDiscreteDomain_IntegerDomain *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_IntegerDomain, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDiscreteDomain_IntegerDomain)
#if !defined (_ComGoogleCommonCollectDiscreteDomain_LongDomain_) && (ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL || ComGoogleCommonCollectDiscreteDomain_LongDomain_INCLUDE)
#define _ComGoogleCommonCollectDiscreteDomain_LongDomain_

@class JavaLangLong;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectDiscreteDomain_LongDomain_serialVersionUID 0LL

@interface ComGoogleCommonCollectDiscreteDomain_LongDomain : ComGoogleCommonCollectDiscreteDomain < JavaIoSerializable > {
}

- (JavaLangLong *)nextWithJavaLangComparable:(JavaLangLong *)value;

- (JavaLangLong *)previousWithJavaLangComparable:(JavaLangLong *)value;

- (jlong)distanceWithJavaLangComparable:(JavaLangLong *)start
                 withJavaLangComparable:(JavaLangLong *)end;

- (JavaLangLong *)minValue;

- (JavaLangLong *)maxValue;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectDiscreteDomain_LongDomain_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectDiscreteDomain_LongDomain)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain_LongDomain *ComGoogleCommonCollectDiscreteDomain_LongDomain_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_LongDomain, INSTANCE_, ComGoogleCommonCollectDiscreteDomain_LongDomain *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_LongDomain, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDiscreteDomain_LongDomain)
#if !defined (_ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_) && (ComGoogleCommonCollectDiscreteDomain_INCLUDE_ALL || ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_INCLUDE)
#define _ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_

@class JavaMathBigInteger;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_serialVersionUID 0LL

@interface ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain : ComGoogleCommonCollectDiscreteDomain < JavaIoSerializable > {
}

- (JavaMathBigInteger *)nextWithJavaLangComparable:(JavaMathBigInteger *)value;

- (JavaMathBigInteger *)previousWithJavaLangComparable:(JavaMathBigInteger *)value;

- (jlong)distanceWithJavaLangComparable:(JavaMathBigInteger *)start
                 withJavaLangComparable:(JavaMathBigInteger *)end;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain *ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain, INSTANCE_, ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain *)

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_MIN_LONG_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain, MIN_LONG_, JavaMathBigInteger *)

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain_MAX_LONG_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain, MAX_LONG_, JavaMathBigInteger *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectDiscreteDomain_BigIntegerDomain)
