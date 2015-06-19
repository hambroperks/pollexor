//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/StringBufferInputStream.java
//

#ifndef _JavaIoStringBufferInputStream_H_
#define _JavaIoStringBufferInputStream_H_

@class IOSByteArray;

#include "J2ObjC_header.h"
#include "java/io/InputStream.h"

@interface JavaIoStringBufferInputStream : JavaIoInputStream {
 @public
  NSString *buffer_;
  jint count_;
  jint pos_;
}

- (instancetype)initWithNSString:(NSString *)str;

- (jint)available;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (void)reset;

- (jlong)skipWithLong:(jlong)charCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStringBufferInputStream)

J2OBJC_FIELD_SETTER(JavaIoStringBufferInputStream, buffer_, NSString *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStringBufferInputStream)

#endif // _JavaIoStringBufferInputStream_H_
