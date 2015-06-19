//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/Hashing.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonHashHashing_RESTRICT
#define ComGoogleCommonHashHashing_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashHashing_RESTRICT
#if ComGoogleCommonHashHashing_ChecksumTypeEnum_$2_INCLUDE
#define ComGoogleCommonHashHashing_ChecksumTypeEnum_INCLUDE 1
#endif
#if ComGoogleCommonHashHashing_ChecksumTypeEnum_$1_INCLUDE
#define ComGoogleCommonHashHashing_ChecksumTypeEnum_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonHashHashing_) && (ComGoogleCommonHashHashing_INCLUDE_ALL || ComGoogleCommonHashHashing_INCLUDE)
#define _ComGoogleCommonHashHashing_

@class ComGoogleCommonHashHashCode;
@class ComGoogleCommonHashHashing_ChecksumTypeEnum;
@protocol ComGoogleCommonHashHashFunction;
@protocol JavaLangIterable;


@interface ComGoogleCommonHashHashing : NSObject {
}

+ (id<ComGoogleCommonHashHashFunction>)goodFastHashWithInt:(jint)minimumBits;

+ (id<ComGoogleCommonHashHashFunction>)murmur3_32WithInt:(jint)seed;

+ (id<ComGoogleCommonHashHashFunction>)murmur3_32;

+ (id<ComGoogleCommonHashHashFunction>)murmur3_128WithInt:(jint)seed;

+ (id<ComGoogleCommonHashHashFunction>)murmur3_128;

+ (id<ComGoogleCommonHashHashFunction>)md5;

+ (id<ComGoogleCommonHashHashFunction>)sha1;

+ (id<ComGoogleCommonHashHashFunction>)sha256;

+ (id<ComGoogleCommonHashHashFunction>)sha512;

+ (id<ComGoogleCommonHashHashFunction>)crc32;

+ (id<ComGoogleCommonHashHashFunction>)adler32;

+ (jlong)padToLongWithComGoogleCommonHashHashCode:(ComGoogleCommonHashHashCode *)hashCode;

+ (jint)consistentHashWithComGoogleCommonHashHashCode:(ComGoogleCommonHashHashCode *)hashCode
                                              withInt:(jint)buckets;

+ (jint)consistentHashWithLong:(jlong)input
                       withInt:(jint)buckets;

+ (ComGoogleCommonHashHashCode *)combineOrderedWithJavaLangIterable:(id<JavaLangIterable>)hashCodes;

+ (ComGoogleCommonHashHashCode *)combineUnorderedWithJavaLangIterable:(id<JavaLangIterable>)hashCodes;

+ (jint)checkPositiveAndMakeMultipleOf32WithInt:(jint)bits;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonHashHashing_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonHashHashing)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_goodFastHashWithInt_(jint minimumBits);

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_murmur3_32WithInt_(jint seed);

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_murmur3_32();

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_murmur3_128WithInt_(jint seed);

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_murmur3_128();

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_md5();

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_sha1();

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_sha256();

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_sha512();

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_crc32();

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_adler32();

FOUNDATION_EXPORT jlong ComGoogleCommonHashHashing_padToLongWithComGoogleCommonHashHashCode_(ComGoogleCommonHashHashCode *hashCode);

FOUNDATION_EXPORT jint ComGoogleCommonHashHashing_consistentHashWithComGoogleCommonHashHashCode_withInt_(ComGoogleCommonHashHashCode *hashCode, jint buckets);

FOUNDATION_EXPORT jint ComGoogleCommonHashHashing_consistentHashWithLong_withInt_(jlong input, jint buckets);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashing_combineOrderedWithJavaLangIterable_(id<JavaLangIterable> hashCodes);

FOUNDATION_EXPORT ComGoogleCommonHashHashCode *ComGoogleCommonHashHashing_combineUnorderedWithJavaLangIterable_(id<JavaLangIterable> hashCodes);

FOUNDATION_EXPORT jint ComGoogleCommonHashHashing_checkPositiveAndMakeMultipleOf32WithInt_(jint bits);

FOUNDATION_EXPORT jint ComGoogleCommonHashHashing_GOOD_FAST_HASH_SEED_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, GOOD_FAST_HASH_SEED_, jint)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_GOOD_FAST_HASH_FUNCTION_32_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, GOOD_FAST_HASH_FUNCTION_32_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_GOOD_FAST_HASH_FUNCTION_128_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, GOOD_FAST_HASH_FUNCTION_128_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_MURMUR3_32_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, MURMUR3_32_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_MURMUR3_128_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, MURMUR3_128_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_MD5_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, MD5_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_SHA_1_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, SHA_1_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_SHA_256_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, SHA_256_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_SHA_512_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, SHA_512_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_CRC_32_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, CRC_32_, id<ComGoogleCommonHashHashFunction>)

FOUNDATION_EXPORT id<ComGoogleCommonHashHashFunction> ComGoogleCommonHashHashing_ADLER_32_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashHashing, ADLER_32_, id<ComGoogleCommonHashHashFunction>)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashing)
#if !defined (_ComGoogleCommonHashHashing_ChecksumTypeEnum_) && (ComGoogleCommonHashHashing_INCLUDE_ALL || ComGoogleCommonHashHashing_ChecksumTypeEnum_INCLUDE)
#define _ComGoogleCommonHashHashing_ChecksumTypeEnum_

@protocol JavaUtilZipChecksum;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonHashHashing_ChecksumType) {
  ComGoogleCommonHashHashing_ChecksumType_CRC_32 = 0,
  ComGoogleCommonHashHashing_ChecksumType_ADLER_32 = 1,
};

@interface ComGoogleCommonHashHashing_ChecksumTypeEnum : JavaLangEnum < NSCopying, ComGoogleCommonBaseSupplier > {
}

- (instancetype)initWithInt:(jint)bits
               withNSString:(NSString *)__name
                    withInt:(jint)__ordinal;

- (id<JavaUtilZipChecksum>)get;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonHashHashing_ChecksumTypeEnum_values();

+ (ComGoogleCommonHashHashing_ChecksumTypeEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonHashHashing_ChecksumTypeEnum *ComGoogleCommonHashHashing_ChecksumTypeEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonHashHashing_ChecksumTypeEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonHashHashing_ChecksumTypeEnum)

FOUNDATION_EXPORT ComGoogleCommonHashHashing_ChecksumTypeEnum *ComGoogleCommonHashHashing_ChecksumTypeEnum_values_[];

#define ComGoogleCommonHashHashing_ChecksumTypeEnum_CRC_32 ComGoogleCommonHashHashing_ChecksumTypeEnum_values_[ComGoogleCommonHashHashing_ChecksumType_CRC_32]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonHashHashing_ChecksumTypeEnum, CRC_32)

#define ComGoogleCommonHashHashing_ChecksumTypeEnum_ADLER_32 ComGoogleCommonHashHashing_ChecksumTypeEnum_values_[ComGoogleCommonHashHashing_ChecksumType_ADLER_32]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonHashHashing_ChecksumTypeEnum, ADLER_32)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashing_ChecksumTypeEnum)
#if !defined (_ComGoogleCommonHashHashing_ChecksumTypeEnum_$1_) && (ComGoogleCommonHashHashing_INCLUDE_ALL || ComGoogleCommonHashHashing_ChecksumTypeEnum_$1_INCLUDE)
#define _ComGoogleCommonHashHashing_ChecksumTypeEnum_$1_

@protocol JavaUtilZipChecksum;


@interface ComGoogleCommonHashHashing_ChecksumTypeEnum_$1 : ComGoogleCommonHashHashing_ChecksumTypeEnum {
}

- (id<JavaUtilZipChecksum>)get;

- (instancetype)initWithInt:(jint)arg$0
               withNSString:(NSString *)__name
                    withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHashing_ChecksumTypeEnum_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashing_ChecksumTypeEnum_$1)
#if !defined (_ComGoogleCommonHashHashing_ChecksumTypeEnum_$2_) && (ComGoogleCommonHashHashing_INCLUDE_ALL || ComGoogleCommonHashHashing_ChecksumTypeEnum_$2_INCLUDE)
#define _ComGoogleCommonHashHashing_ChecksumTypeEnum_$2_

@protocol JavaUtilZipChecksum;


@interface ComGoogleCommonHashHashing_ChecksumTypeEnum_$2 : ComGoogleCommonHashHashing_ChecksumTypeEnum {
}

- (id<JavaUtilZipChecksum>)get;

- (instancetype)initWithInt:(jint)arg$0
               withNSString:(NSString *)__name
                    withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHashing_ChecksumTypeEnum_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashing_ChecksumTypeEnum_$2)
#if !defined (_ComGoogleCommonHashHashing_ConcatenatedHashFunction_) && (ComGoogleCommonHashHashing_INCLUDE_ALL || ComGoogleCommonHashHashing_ConcatenatedHashFunction_INCLUDE)
#define _ComGoogleCommonHashHashing_ConcatenatedHashFunction_

@class ComGoogleCommonHashHashCode;
@class IOSObjectArray;

#define ComGoogleCommonHashAbstractCompositeHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractCompositeHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractCompositeHashFunction.h"


@interface ComGoogleCommonHashHashing_ConcatenatedHashFunction : ComGoogleCommonHashAbstractCompositeHashFunction {
}

- (instancetype)initWithComGoogleCommonHashHashFunctionArray:(IOSObjectArray *)functions;

- (ComGoogleCommonHashHashCode *)makeHashWithComGoogleCommonHashHasherArray:(IOSObjectArray *)hashers;

- (jint)bits;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHashing_ConcatenatedHashFunction)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashing_ConcatenatedHashFunction)
#if !defined (_ComGoogleCommonHashHashing_LinearCongruentialGenerator_) && (ComGoogleCommonHashHashing_INCLUDE_ALL || ComGoogleCommonHashHashing_LinearCongruentialGenerator_INCLUDE)
#define _ComGoogleCommonHashHashing_LinearCongruentialGenerator_


@interface ComGoogleCommonHashHashing_LinearCongruentialGenerator : NSObject {
}

- (instancetype)initWithLong:(jlong)seed;

- (jdouble)nextDouble;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashHashing_LinearCongruentialGenerator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashHashing_LinearCongruentialGenerator)
