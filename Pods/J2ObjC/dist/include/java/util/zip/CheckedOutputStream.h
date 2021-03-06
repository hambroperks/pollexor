//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/CheckedOutputStream.java
//

#ifndef _JavaUtilZipCheckedOutputStream_H_
#define _JavaUtilZipCheckedOutputStream_H_

@class IOSByteArray;
@class JavaIoOutputStream;
@protocol JavaUtilZipChecksum;

#include "J2ObjC_header.h"
#include "java/io/FilterOutputStream.h"

@interface JavaUtilZipCheckedOutputStream : JavaIoFilterOutputStream {
}

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                   withJavaUtilZipChecksum:(id<JavaUtilZipChecksum>)cs;

- (id<JavaUtilZipChecksum>)getChecksum;

- (void)writeWithInt:(jint)val;

- (void)writeWithByteArray:(IOSByteArray *)buf
                   withInt:(jint)off
                   withInt:(jint)nbytes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipCheckedOutputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipCheckedOutputStream)

#endif // _JavaUtilZipCheckedOutputStream_H_
