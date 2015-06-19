//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/X509EncodedKeySpec.java
//

#ifndef _JavaSecuritySpecX509EncodedKeySpec_H_
#define _JavaSecuritySpecX509EncodedKeySpec_H_

@class IOSByteArray;

#include "J2ObjC_header.h"
#include "java/security/spec/EncodedKeySpec.h"

@interface JavaSecuritySpecX509EncodedKeySpec : JavaSecuritySpecEncodedKeySpec {
}

- (instancetype)initWithByteArray:(IOSByteArray *)encodedKey;

- (IOSByteArray *)getEncoded;

- (NSString *)getFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecX509EncodedKeySpec)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecX509EncodedKeySpec)

#endif // _JavaSecuritySpecX509EncodedKeySpec_H_
