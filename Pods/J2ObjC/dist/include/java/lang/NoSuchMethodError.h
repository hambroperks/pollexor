//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NoSuchMethodError.java
//

#ifndef _JavaLangNoSuchMethodError_H_
#define _JavaLangNoSuchMethodError_H_

#include "J2ObjC_header.h"
#include "java/lang/IncompatibleClassChangeError.h"

#define JavaLangNoSuchMethodError_serialVersionUID -3765521442372831335LL

@interface JavaLangNoSuchMethodError : JavaLangIncompatibleClassChangeError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchMethodError)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangNoSuchMethodError, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchMethodError)

#endif // _JavaLangNoSuchMethodError_H_