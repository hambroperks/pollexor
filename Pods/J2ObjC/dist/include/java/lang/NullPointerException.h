//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NullPointerException.java
//

#ifndef _JavaLangNullPointerException_H_
#define _JavaLangNullPointerException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

#define JavaLangNullPointerException_serialVersionUID 5162710183389028792LL

@interface JavaLangNullPointerException : JavaLangRuntimeException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNullPointerException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangNullPointerException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNullPointerException)

#endif // _JavaLangNullPointerException_H_
