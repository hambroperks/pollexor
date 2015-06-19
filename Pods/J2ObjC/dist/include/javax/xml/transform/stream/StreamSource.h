//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/stream/StreamSource.java
//

#ifndef _JavaxXmlTransformStreamStreamSource_H_
#define _JavaxXmlTransformStreamStreamSource_H_

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaIoReader;

#include "J2ObjC_header.h"
#include "javax/xml/transform/Source.h"

@interface JavaxXmlTransformStreamStreamSource : NSObject < JavaxXmlTransformSource > {
}

- (instancetype)init;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inputStream;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inputStream
                             withNSString:(NSString *)systemId;

- (instancetype)initWithJavaIoReader:(JavaIoReader *)reader;

- (instancetype)initWithJavaIoReader:(JavaIoReader *)reader
                        withNSString:(NSString *)systemId;

- (instancetype)initWithNSString:(NSString *)systemId;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)f;

- (void)setInputStreamWithJavaIoInputStream:(JavaIoInputStream *)inputStream;

- (JavaIoInputStream *)getInputStream;

- (void)setReaderWithJavaIoReader:(JavaIoReader *)reader;

- (JavaIoReader *)getReader;

- (void)setPublicIdWithNSString:(NSString *)publicId;

- (NSString *)getPublicId;

- (void)setSystemIdWithNSString:(NSString *)systemId;

- (NSString *)getSystemId;

- (void)setSystemIdWithJavaIoFile:(JavaIoFile *)f;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformStreamStreamSource)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaxXmlTransformStreamStreamSource_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformStreamStreamSource, FEATURE_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformStreamStreamSource)

#endif // _JavaxXmlTransformStreamStreamSource_H_
