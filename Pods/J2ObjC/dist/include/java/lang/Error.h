//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Error.java
//

#ifndef _JavaLangError_H_
#define _JavaLangError_H_

#include "J2ObjC_header.h"
#include "java/lang/Throwable.h"

#define JavaLangError_serialVersionUID 4980196508277280342LL

@interface JavaLangError : JavaLangThrowable {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)throwable;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangError)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangError, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangError)

#endif // _JavaLangError_H_
