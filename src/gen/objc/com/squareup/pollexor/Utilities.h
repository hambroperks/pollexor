//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/Utilities.java
//

#ifndef _PXRUtilities_H_
#define _PXRUtilities_H_

@class IOSByteArray;
@class JavaLangStringBuilder;

#include "J2ObjC_header.h"

/**
 @brief Utility methods for ThumborUrlBuilder .
 */
@interface PXRUtilities : NSObject {
}

#pragma mark Public

/**
 @brief Base64 encodes a byte array.
 @param bytes Bytes to encode.
 @return Encoded string.
 @throws IllegalArgumentException if <code>bytes</code> is null or exceeds 3/4ths of <code>Integer.MAX_VALUE</code> .
 */
+ (NSString *)base64EncodeWithByteArray:(IOSByteArray *)bytes;

#pragma mark Package-Private

/**
 @brief Encrypt a string with HMAC-SHA1 using the specified key.
 @param message Input string.
 @param key Encryption key.
 @return Encrypted output.
 */
+ (IOSByteArray *)hmacSha1WithJavaLangStringBuilder:(JavaLangStringBuilder *)message
                                       withNSString:(NSString *)key;

/**
 @brief Create an MD5 hash of a string.
 @param input Input string.
 @return Hash of input.
 @throws IllegalArgumentException if <code>input</code> is blank.
 */
+ (NSString *)md5WithNSString:(NSString *)input;

/**
 @brief Normalize a string to a desired length by repeatedly appending itself and/or truncating.
 @param string Input string.
 @param desiredLength Desired length of string.
 @return Output string which is guaranteed to have a length equal to the desired length argument.
 @throws IllegalArgumentException if <code>string</code> is blank or <code>desiredLength</code> is not greater than 0.
 */
+ (NSString *)normalizeStringWithNSString:(NSString *)string
                                  withInt:(jint)desiredLength;

/**
 @brief Pad a StringBuilder to a desired multiple on the right using a specified character.
 @param builder Builder to pad.
 @param padding Padding character.
 @param multipleOf Number which the length must be a multiple of.
 @throws IllegalArgumentException if <code>builder</code> is null or <code>multipleOf</code> is less than 2.
 */
+ (void)rightPadStringWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                       withChar:(jchar)padding
                                        withInt:(jint)multipleOf;

@end

J2OBJC_EMPTY_STATIC_INIT(PXRUtilities)

FOUNDATION_EXPORT NSString *PXRUtilities_base64EncodeWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT void PXRUtilities_rightPadStringWithJavaLangStringBuilder_withChar_withInt_(JavaLangStringBuilder *builder, jchar padding, jint multipleOf);

FOUNDATION_EXPORT NSString *PXRUtilities_normalizeStringWithNSString_withInt_(NSString *string, jint desiredLength);

FOUNDATION_EXPORT NSString *PXRUtilities_md5WithNSString_(NSString *input);

FOUNDATION_EXPORT IOSByteArray *PXRUtilities_hmacSha1WithJavaLangStringBuilder_withNSString_(JavaLangStringBuilder *message, NSString *key);

J2OBJC_TYPE_LITERAL_HEADER(PXRUtilities)

typedef PXRUtilities ComSquareupPollexorUtilities;

#endif // _PXRUtilities_H_
