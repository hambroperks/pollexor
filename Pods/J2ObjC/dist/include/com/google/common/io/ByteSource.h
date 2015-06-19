//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/io/ByteSource.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonIoByteSource_RESTRICT
#define ComGoogleCommonIoByteSource_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonIoByteSource_RESTRICT
#if ComGoogleCommonIoByteSource_SlicedByteSource_INCLUDE
#define ComGoogleCommonIoByteSource_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonIoByteSource_AsCharSource_) && (ComGoogleCommonIoByteSource_INCLUDE_ALL || ComGoogleCommonIoByteSource_AsCharSource_INCLUDE)
#define _ComGoogleCommonIoByteSource_AsCharSource_

@class ComGoogleCommonIoByteSource;
@class JavaIoReader;
@class JavaNioCharsetCharset;

#define ComGoogleCommonIoCharSource_RESTRICT 1
#define ComGoogleCommonIoCharSource_INCLUDE 1
#include "com/google/common/io/CharSource.h"


@interface ComGoogleCommonIoByteSource_AsCharSource : ComGoogleCommonIoCharSource {
}

- (JavaIoReader *)openStream;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteSource_AsCharSource)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteSource_AsCharSource)
#if !defined (_ComGoogleCommonIoByteSource_) && (ComGoogleCommonIoByteSource_INCLUDE_ALL || ComGoogleCommonIoByteSource_INCLUDE)
#define _ComGoogleCommonIoByteSource_

@class ComGoogleCommonHashHashCode;
@class ComGoogleCommonIoByteSink;
@class ComGoogleCommonIoCharSource;
@class IOSByteArray;
@class JavaIoBufferedInputStream;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNioCharsetCharset;
@protocol ComGoogleCommonHashHashFunction;


#define ComGoogleCommonIoByteSource_BUF_SIZE 4096

@interface ComGoogleCommonIoByteSource : NSObject {
}

- (ComGoogleCommonIoCharSource *)asCharSourceWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;

- (JavaIoInputStream *)openStream;

- (JavaIoBufferedInputStream *)openBufferedStream;

- (ComGoogleCommonIoByteSource *)sliceWithLong:(jlong)offset
                                      withLong:(jlong)length;

- (jlong)size;

- (jlong)copyToWithJavaIoOutputStream:(JavaIoOutputStream *)output OBJC_METHOD_FAMILY_NONE;

- (jlong)copyToWithComGoogleCommonIoByteSink:(ComGoogleCommonIoByteSink *)sink OBJC_METHOD_FAMILY_NONE;

- (IOSByteArray *)read;

- (ComGoogleCommonHashHashCode *)hash__WithComGoogleCommonHashHashFunction:(id<ComGoogleCommonHashHashFunction>)hashFunction;

- (jboolean)contentEqualsWithComGoogleCommonIoByteSource:(ComGoogleCommonIoByteSource *)other;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonIoByteSource_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonIoByteSource)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoByteSource, BUF_SIZE, jint)

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonIoByteSource_countBuffer_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonIoByteSource, countBuffer_, IOSByteArray *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteSource)
#if !defined (_ComGoogleCommonIoByteSource_SlicedByteSource_) && (ComGoogleCommonIoByteSource_INCLUDE_ALL || ComGoogleCommonIoByteSource_SlicedByteSource_INCLUDE)
#define _ComGoogleCommonIoByteSource_SlicedByteSource_

@class JavaIoInputStream;


@interface ComGoogleCommonIoByteSource_SlicedByteSource : ComGoogleCommonIoByteSource {
}

- (JavaIoInputStream *)openStream;

- (ComGoogleCommonIoByteSource *)sliceWithLong:(jlong)offset
                                      withLong:(jlong)length;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteSource_SlicedByteSource)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteSource_SlicedByteSource)
