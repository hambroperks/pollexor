//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Dictionary.java
//

#ifndef _JavaUtilDictionary_H_
#define _JavaUtilDictionary_H_

@protocol JavaUtilEnumeration;

#include "J2ObjC_header.h"

@interface JavaUtilDictionary : NSObject {
}

- (instancetype)init;

- (id<JavaUtilEnumeration>)elements;

- (id)getWithId:(id)key;

- (jboolean)isEmpty;

- (id<JavaUtilEnumeration>)keys;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilDictionary)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDictionary)

#endif // _JavaUtilDictionary_H_
