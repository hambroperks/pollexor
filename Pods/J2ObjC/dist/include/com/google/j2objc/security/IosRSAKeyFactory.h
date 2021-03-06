//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosRSAKeyFactory.java
//

#ifndef _ComGoogleJ2objcSecurityIosRSAKeyFactory_H_
#define _ComGoogleJ2objcSecurityIosRSAKeyFactory_H_

@class IOSClass;
@protocol JavaSecurityKey;
@protocol JavaSecurityPrivateKey;
@protocol JavaSecurityPublicKey;
@protocol JavaSecuritySpecKeySpec;

#include "J2ObjC_header.h"
#include "java/security/KeyFactorySpi.h"

@interface ComGoogleJ2objcSecurityIosRSAKeyFactory : JavaSecurityKeyFactorySpi {
}

- (id<JavaSecurityPublicKey>)engineGeneratePublicWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (id<JavaSecurityPrivateKey>)engineGeneratePrivateWithJavaSecuritySpecKeySpec:(id<JavaSecuritySpecKeySpec>)keySpec;

- (id)engineGetKeySpecWithJavaSecurityKey:(id<JavaSecurityKey>)key
                             withIOSClass:(IOSClass *)keySpec;

- (id<JavaSecurityKey>)engineTranslateKeyWithJavaSecurityKey:(id<JavaSecurityKey>)key;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosRSAKeyFactory)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosRSAKeyFactory)

#endif // _ComGoogleJ2objcSecurityIosRSAKeyFactory_H_
