//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAPublicKey.java
//

#ifndef _JavaSecurityInterfacesRSAPublicKey_H_
#define _JavaSecurityInterfacesRSAPublicKey_H_

@class JavaMathBigInteger;

#include "J2ObjC_header.h"
#include "java/security/PublicKey.h"
#include "java/security/interfaces/RSAKey.h"

#define JavaSecurityInterfacesRSAPublicKey_serialVersionUID -8727434096241101194LL

@protocol JavaSecurityInterfacesRSAPublicKey < JavaSecurityPublicKey, JavaSecurityInterfacesRSAKey, NSObject, JavaObject >
- (JavaMathBigInteger *)getPublicExponent;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAPublicKey)

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInterfacesRSAPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAPublicKey)

#endif // _JavaSecurityInterfacesRSAPublicKey_H_
