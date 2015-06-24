//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/Utilities.java
//

#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "com/squareup/pollexor/Utilities.h"
#include "java/lang/Exception.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Integer.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/StringBuilder.h"
#include "java/security/MessageDigest.h"

#import <CommonCrypto/CommonHMAC.h>

@interface PXRUtilities () {
}
- (instancetype)init;
@end

@implementation PXRUtilities

NSString * PXRUtilities_BASE64_CHARS_ = @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";

- (instancetype)init {
  return [super init];
}

+ (NSString *)base64EncodeWithByteArray:(IOSByteArray *)bytes {
  return PXRUtilities_base64EncodeWithByteArray_(bytes);
}

+ (void)rightPadStringWithJavaLangStringBuilder:(JavaLangStringBuilder *)builder
                                       withChar:(jchar)padding
                                        withInt:(jint)multipleOf {
  PXRUtilities_rightPadStringWithJavaLangStringBuilder_withChar_withInt_(builder, padding, multipleOf);
}

+ (NSString *)normalizeStringWithNSString:(NSString *)string
                                  withInt:(jint)desiredLength {
  return PXRUtilities_normalizeStringWithNSString_withInt_(string, desiredLength);
}

+ (NSString *)md5WithNSString:(NSString *)input {
  return PXRUtilities_md5WithNSString_(input);
}

+ (IOSByteArray *)hmacSha1WithJavaLangStringBuilder:(JavaLangStringBuilder *)message
                                       withNSString:(NSString *)key {
  return PXRUtilities_hmacSha1WithJavaLangStringBuilder_withNSString_(message, key);
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "Utilities", NULL, 0x2, NULL },
    { "base64EncodeWithByteArray:", "base64Encode", "Ljava.lang.String;", 0x9, NULL },
    { "rightPadStringWithJavaLangStringBuilder:withChar:withInt:", "rightPadString", "V", 0x8, NULL },
    { "normalizeStringWithNSString:withInt:", "normalizeString", "Ljava.lang.String;", 0x8, NULL },
    { "md5WithNSString:", "md5", "Ljava.lang.String;", 0x8, NULL },
    { "hmacSha1WithJavaLangStringBuilder:withNSString:", "hmacSha1", "[B", 0x108, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "BASE64_CHARS_", NULL, 0x1a, "Ljava.lang.String;", &PXRUtilities_BASE64_CHARS_,  },
    { "BASE64_UPPER_BOUND_", NULL, 0x1a, "I", NULL, .constantValue.asInt = PXRUtilities_BASE64_UPPER_BOUND },
  };
  static const J2ObjcClassInfo _PXRUtilities = { 1, "Utilities", "com.squareup.pollexor", NULL, 0x10, 6, methods, 2, fields, 0, NULL};
  return &_PXRUtilities;
}

@end

NSString *PXRUtilities_base64EncodeWithByteArray_(IOSByteArray *bytes) {
  PXRUtilities_init();
  if (bytes == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"Input bytes must not be null."] autorelease];
  }
  if (((IOSByteArray *) nil_chk(bytes))->size_ >= PXRUtilities_BASE64_UPPER_BOUND) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:JreStrcat("$I", @"Input bytes length must not exceed ", PXRUtilities_BASE64_UPPER_BOUND)] autorelease];
  }
  jint triples = bytes->size_ / 3;
  if (bytes->size_ % 3 != 0) {
    triples += 1;
  }
  IOSCharArray *encoding = [IOSCharArray arrayWithLength:LShift32(triples, 2)];
  for (jint in = 0, out = 0; in < bytes->size_; in += 3, out += 4) {
    jint triple = LShift32((IOSByteArray_Get(bytes, in) & (jint) 0xff), 16);
    if (in + 1 < bytes->size_) {
      triple |= (LShift32((IOSByteArray_Get(bytes, in + 1) & (jint) 0xff), 8));
    }
    if (in + 2 < bytes->size_) {
      triple |= (IOSByteArray_Get(bytes, in + 2) & (jint) 0xff);
    }
    *IOSCharArray_GetRef(encoding, out) = [((NSString *) nil_chk(PXRUtilities_BASE64_CHARS_)) charAtWithInt:(RShift32(triple, 18)) & (jint) 0x3f];
    *IOSCharArray_GetRef(encoding, out + 1) = [PXRUtilities_BASE64_CHARS_ charAtWithInt:(RShift32(triple, 12)) & (jint) 0x3f];
    *IOSCharArray_GetRef(encoding, out + 2) = [PXRUtilities_BASE64_CHARS_ charAtWithInt:(RShift32(triple, 6)) & (jint) 0x3f];
    *IOSCharArray_GetRef(encoding, out + 3) = [PXRUtilities_BASE64_CHARS_ charAtWithInt:triple & (jint) 0x3f];
  }
  for (jint i = encoding->size_ - (triples * 3 - bytes->size_); i < encoding->size_; i++) {
    *IOSCharArray_GetRef(encoding, i) = '=';
  }
  return NSString_valueOfWithCharArray_(encoding);
}

void PXRUtilities_rightPadStringWithJavaLangStringBuilder_withChar_withInt_(JavaLangStringBuilder *builder, jchar padding, jint multipleOf) {
  PXRUtilities_init();
  if (builder == nil) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"Builder input must not be empty."] autorelease];
  }
  if (multipleOf < 2) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"Multiple must be greater than one."] autorelease];
  }
  jint needed = multipleOf - ([((JavaLangStringBuilder *) nil_chk(builder)) sequenceLength] % multipleOf);
  if (needed < multipleOf) {
    for (jint i = needed; i > 0; i--) {
      [builder appendWithChar:padding];
    }
  }
}

NSString *PXRUtilities_normalizeStringWithNSString_withInt_(NSString *string, jint desiredLength) {
  PXRUtilities_init();
  if (string == nil || ((jint) [string length]) == 0) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"Must supply a non-null, non-empty string."] autorelease];
  }
  if (desiredLength <= 0) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"Desired length must be greater than zero."] autorelease];
  }
  if (((jint) [((NSString *) nil_chk(string)) length]) >= desiredLength) {
    return [string substring:0 endIndex:desiredLength];
  }
  else {
    JavaLangStringBuilder *builder = [[[JavaLangStringBuilder alloc] initWithNSString:string] autorelease];
    while ([builder sequenceLength] < desiredLength) {
      [builder appendWithNSString:string];
    }
    return [builder substringWithInt:0 withInt:desiredLength];
  }
}

NSString *PXRUtilities_md5WithNSString_(NSString *input) {
  PXRUtilities_init();
  if (input == nil || ((jint) [input length]) == 0) {
    @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:@"Input string must not be blank."] autorelease];
  }
  @try {
    JavaSecurityMessageDigest *algorithm = JavaSecurityMessageDigest_getInstanceWithNSString_(@"MD5");
    [((JavaSecurityMessageDigest *) nil_chk(algorithm)) reset];
    [algorithm updateWithByteArray:[((NSString *) nil_chk(input)) getBytes]];
    IOSByteArray *messageDigest = [algorithm digest];
    JavaLangStringBuilder *hexString = [[[JavaLangStringBuilder alloc] init] autorelease];
    {
      IOSByteArray *a__ = messageDigest;
      jbyte const *b__ = ((IOSByteArray *) nil_chk(a__))->buffer_;
      jbyte const *e__ = b__ + a__->size_;
      while (b__ < e__) {
        jbyte messageByte = *b__++;
        [hexString appendWithNSString:[((NSString *) nil_chk(JavaLangInteger_toHexStringWithInt_((messageByte & (jint) 0xFF) | (jint) 0x100))) substring:1 endIndex:3]];
      }
    }
    return [hexString description];
  }
  @catch (JavaLangException *e) {
    @throw [[[JavaLangRuntimeException alloc] initWithJavaLangThrowable:e] autorelease];
  }
}

IOSByteArray *PXRUtilities_hmacSha1WithJavaLangStringBuilder_withNSString_(JavaLangStringBuilder *message, NSString *key) {
  PXRUtilities_init();
  NSString *data = [((JavaLangStringBuilder *) nil_chk(message)) description];
  
  const char *cKey  = [key cStringUsingEncoding:NSASCIIStringEncoding];
  const char *cData = [data cStringUsingEncoding:NSASCIIStringEncoding];
  
  unsigned char cHMAC[CC_SHA256_DIGEST_LENGTH];
  
  CCHmac(kCCHmacAlgSHA256, cKey, strlen(cKey), cData, strlen(cData), cHMAC);
  
  NSData *HMAC = [[NSData alloc] initWithBytes:cHMAC
  length:sizeof(cHMAC)];
  
  NSString *base64Hash = [HMAC base64EncodedStringWithOptions:nil];
  
  return [((NSString *) nil_chk(base64Hash)) getBytes];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(PXRUtilities)
