//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/NoSuchProviderException.java
//

#ifndef _JavaSecurityNoSuchProviderException_H_
#define _JavaSecurityNoSuchProviderException_H_

#include "J2ObjC_header.h"
#include "java/security/GeneralSecurityException.h"

#define JavaSecurityNoSuchProviderException_serialVersionUID 8488111756688534474LL

@interface JavaSecurityNoSuchProviderException : JavaSecurityGeneralSecurityException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityNoSuchProviderException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityNoSuchProviderException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityNoSuchProviderException)

#endif // _JavaSecurityNoSuchProviderException_H_
