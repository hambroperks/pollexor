//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/ChecksumHashFunction.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonHashChecksumHashFunction_RESTRICT
#define ComGoogleCommonHashChecksumHashFunction_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashChecksumHashFunction_RESTRICT
#if !defined (_ComGoogleCommonHashChecksumHashFunction_) && (ComGoogleCommonHashChecksumHashFunction_INCLUDE_ALL || ComGoogleCommonHashChecksumHashFunction_INCLUDE)
#define _ComGoogleCommonHashChecksumHashFunction_

@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonHashHasher;

#define ComGoogleCommonHashAbstractStreamingHashFunction_RESTRICT 1
#define ComGoogleCommonHashAbstractStreamingHashFunction_INCLUDE 1
#include "com/google/common/hash/AbstractStreamingHashFunction.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonHashChecksumHashFunction_serialVersionUID 0LL

@interface ComGoogleCommonHashChecksumHashFunction : ComGoogleCommonHashAbstractStreamingHashFunction < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)checksumSupplier
                                            withInt:(jint)bits
                                       withNSString:(NSString *)toString;

- (jint)bits;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashChecksumHashFunction)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonHashChecksumHashFunction, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashChecksumHashFunction)
#if !defined (_ComGoogleCommonHashChecksumHashFunction_ChecksumHasher_) && (ComGoogleCommonHashChecksumHashFunction_INCLUDE_ALL || ComGoogleCommonHashChecksumHashFunction_ChecksumHasher_INCLUDE)
#define _ComGoogleCommonHashChecksumHashFunction_ChecksumHasher_

@class ComGoogleCommonHashChecksumHashFunction;
@class ComGoogleCommonHashHashCode;
@class IOSByteArray;
@protocol JavaUtilZipChecksum;

#define ComGoogleCommonHashAbstractByteHasher_RESTRICT 1
#define ComGoogleCommonHashAbstractByteHasher_INCLUDE 1
#include "com/google/common/hash/AbstractByteHasher.h"


@interface ComGoogleCommonHashChecksumHashFunction_ChecksumHasher : ComGoogleCommonHashAbstractByteHasher {
}

- (void)updateWithByte:(jbyte)b;

- (void)updateWithByteArray:(IOSByteArray *)bytes
                    withInt:(jint)off
                    withInt:(jint)len;

- (ComGoogleCommonHashHashCode *)hash__;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashChecksumHashFunction_ChecksumHasher)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashChecksumHashFunction_ChecksumHasher)
