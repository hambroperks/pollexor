//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/PublicKeyImpl.java
//

#ifndef _OrgApacheHarmonySecurityPublicKeyImpl_H_
#define _OrgApacheHarmonySecurityPublicKeyImpl_H_

@class IOSByteArray;

#include "J2ObjC_header.h"
#include "java/security/PublicKey.h"

#define OrgApacheHarmonySecurityPublicKeyImpl_serialVersionUID 7179022516819534075LL

@interface OrgApacheHarmonySecurityPublicKeyImpl : NSObject < JavaSecurityPublicKey > {
}

- (instancetype)initWithNSString:(NSString *)algorithm;

- (NSString *)getAlgorithm;

- (NSString *)getFormat;

- (IOSByteArray *)getEncoded;

- (void)setAlgorithmWithNSString:(NSString *)algorithm;

- (void)setEncodingWithByteArray:(IOSByteArray *)encoding;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityPublicKeyImpl)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityPublicKeyImpl, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityPublicKeyImpl)

#endif // _OrgApacheHarmonySecurityPublicKeyImpl_H_
