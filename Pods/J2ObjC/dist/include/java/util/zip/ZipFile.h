//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipFile.java
//

#ifndef _JavaUtilZipZipFile_H_
#define _JavaUtilZipZipFile_H_

@class DalvikSystemCloseGuard;
@class IOSByteArray;
@class JavaIoFile;
@class JavaIoRandomAccessFile;
@class JavaUtilLinkedHashMap;
@class JavaUtilZipInflater;
@class JavaUtilZipZipEntry;
@protocol JavaUtilIterator;

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/io/InputStream.h"
#include "java/util/Enumeration.h"
#include "java/util/zip/InflaterInputStream.h"
#include "java/util/zip/ZipConstants.h"

#define JavaUtilZipZipFile_GPBF_DATA_DESCRIPTOR_FLAG 8
#define JavaUtilZipZipFile_GPBF_ENCRYPTED_FLAG 1
#define JavaUtilZipZipFile_GPBF_UNSUPPORTED_MASK 1
#define JavaUtilZipZipFile_GPBF_UTF8_FLAG 2048
#define JavaUtilZipZipFile_OPEN_DELETE 4
#define JavaUtilZipZipFile_OPEN_READ 1

@interface JavaUtilZipZipFile : NSObject < JavaIoCloseable, JavaUtilZipZipConstants > {
}

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                           withInt:(jint)mode;

- (void)dealloc;

- (void)close;

- (id<JavaUtilEnumeration>)entries;

- (NSString *)getComment;

- (JavaUtilZipZipEntry *)getEntryWithNSString:(NSString *)entryName;

- (JavaIoInputStream *)getInputStreamWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)entry_;

- (NSString *)getName;

- (jint)size;

+ (void)throwZipExceptionWithNSString:(NSString *)msg
                              withInt:(jint)magic;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT void JavaUtilZipZipFile_throwZipExceptionWithNSString_withInt_(NSString *msg, jint magic);

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_ENCRYPTED_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_DATA_DESCRIPTOR_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_UTF8_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, GPBF_UNSUPPORTED_MASK, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, OPEN_READ, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipZipFile, OPEN_DELETE, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile)

@interface JavaUtilZipZipFile_RAFStream : JavaIoInputStream {
}

- (instancetype)initWithJavaIoRandomAccessFile:(JavaIoRandomAccessFile *)raf
                                      withLong:(jlong)initialOffset
                                      withLong:(jlong)endOffset;

- (instancetype)initWithJavaIoRandomAccessFile:(JavaIoRandomAccessFile *)raf
                                      withLong:(jlong)initialOffset;

- (jint)available;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jlong)skipWithLong:(jlong)byteCount;

- (jint)fillWithJavaUtilZipInflater:(JavaUtilZipInflater *)inflater
                            withInt:(jint)nativeEndBufSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile_RAFStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile_RAFStream)

@interface JavaUtilZipZipFile_ZipInflaterInputStream : JavaUtilZipInflaterInputStream {
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                  withJavaUtilZipInflater:(JavaUtilZipInflater *)inf
                                  withInt:(jint)bsize
                  withJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)entry_;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jint)available;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile_ZipInflaterInputStream)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile_ZipInflaterInputStream)

@interface JavaUtilZipZipFile_$1 : NSObject < JavaUtilEnumeration > {
}

- (jboolean)hasMoreElements;

- (JavaUtilZipZipEntry *)nextElement;

- (instancetype)initWithJavaUtilZipZipFile:(JavaUtilZipZipFile *)outer$
                      withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipZipFile_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipFile_$1)

#endif // _JavaUtilZipZipFile_H_
