//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/ThreadLocal.java
//

#ifndef _JavaLangThreadLocal_H_
#define _JavaLangThreadLocal_H_

@class JavaUtilConcurrentAtomicAtomicInteger;

#include "J2ObjC_header.h"

@interface JavaLangThreadLocal : NSObject {
}

- (id)get;

- (id)initialValue OBJC_METHOD_FAMILY_NONE;

- (void)remove;

- (void)setWithId:(id)value;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL JavaLangThreadLocal_initialized;
J2OBJC_STATIC_INIT(JavaLangThreadLocal)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaLangThreadLocal_KEY_PREFIX_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThreadLocal, KEY_PREFIX_, NSString *)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *JavaLangThreadLocal_nextId_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThreadLocal, nextId_, JavaUtilConcurrentAtomicAtomicInteger *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadLocal)

#endif // _JavaLangThreadLocal_H_