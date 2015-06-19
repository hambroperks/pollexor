//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/stream/StreamResult.java
//

#ifndef _JavaxXmlTransformStreamStreamResult_H_
#define _JavaxXmlTransformStreamStreamResult_H_

@class JavaIoFile;
@class JavaIoOutputStream;
@class JavaIoWriter;

#include "J2ObjC_header.h"
#include "javax/xml/transform/Result.h"

@interface JavaxXmlTransformStreamStreamResult : NSObject < JavaxXmlTransformResult > {
}

- (instancetype)init;

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream;

- (instancetype)initWithJavaIoWriter:(JavaIoWriter *)writer;

- (instancetype)initWithNSString:(NSString *)systemId;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)f;

- (void)setOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream;

- (JavaIoOutputStream *)getOutputStream;

- (void)setWriterWithJavaIoWriter:(JavaIoWriter *)writer;

- (JavaIoWriter *)getWriter;

- (void)setSystemIdWithNSString:(NSString *)systemId;

- (void)setSystemIdWithJavaIoFile:(JavaIoFile *)f;

- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformStreamStreamResult)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaxXmlTransformStreamStreamResult_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformStreamStreamResult, FEATURE_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformStreamStreamResult)

#endif // _JavaxXmlTransformStreamStreamResult_H_
