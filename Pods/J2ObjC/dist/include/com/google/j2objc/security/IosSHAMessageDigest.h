//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosSHAMessageDigest.java
//

#ifndef _ComGoogleJ2objcSecurityIosSHAMessageDigest_H_
#define _ComGoogleJ2objcSecurityIosSHAMessageDigest_H_

@class IOSByteArray;
@class JavaIoByteArrayOutputStream;

#include "J2ObjC_header.h"
#include "java/security/MessageDigest.h"

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest : JavaSecurityMessageDigest {
 @public
  JavaIoByteArrayOutputStream *buffer_;
}

- (instancetype)initWithNSString:(NSString *)algorithm;

- (void)engineUpdateWithByte:(jbyte)input;

- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

- (void)engineReset;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest)

J2OBJC_FIELD_SETTER(ComGoogleJ2objcSecurityIosSHAMessageDigest, buffer_, JavaIoByteArrayOutputStream *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1 : ComGoogleJ2objcSecurityIosSHAMessageDigest {
}

- (instancetype)init;

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA1)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256 : ComGoogleJ2objcSecurityIosSHAMessageDigest {
}

- (instancetype)init;

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA256)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384 : ComGoogleJ2objcSecurityIosSHAMessageDigest {
}

- (instancetype)init;

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA384)

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512 : ComGoogleJ2objcSecurityIosSHAMessageDigest {
}

- (instancetype)init;

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosSHAMessageDigest_SHA512)

#endif // _ComGoogleJ2objcSecurityIosSHAMessageDigest_H_
