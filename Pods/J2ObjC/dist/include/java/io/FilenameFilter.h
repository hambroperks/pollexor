//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FilenameFilter.java
//

#ifndef _JavaIoFilenameFilter_H_
#define _JavaIoFilenameFilter_H_

@class JavaIoFile;

#include "J2ObjC_header.h"

@protocol JavaIoFilenameFilter < NSObject, JavaObject >

- (jboolean)acceptWithJavaIoFile:(JavaIoFile *)dir
                    withNSString:(NSString *)filename;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFilenameFilter)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFilenameFilter)

#endif // _JavaIoFilenameFilter_H_
