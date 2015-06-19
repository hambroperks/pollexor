//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/primitives/UnsignedBytes.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonPrimitivesUnsignedBytes_RESTRICT
#define ComGoogleCommonPrimitivesUnsignedBytes_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesUnsignedBytes_RESTRICT
#if !defined (_ComGoogleCommonPrimitivesUnsignedBytes_) && (ComGoogleCommonPrimitivesUnsignedBytes_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedBytes_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedBytes_

@class IOSByteArray;


#define ComGoogleCommonPrimitivesUnsignedBytes_MAX_POWER_OF_TWO -128
#define ComGoogleCommonPrimitivesUnsignedBytes_MAX_VALUE -1
#define ComGoogleCommonPrimitivesUnsignedBytes_UNSIGNED_MASK 255

@interface ComGoogleCommonPrimitivesUnsignedBytes : NSObject {
}

+ (jint)toIntWithByte:(jbyte)value;

+ (jbyte)checkedCastWithLong:(jlong)value;

+ (jbyte)saturatedCastWithLong:(jlong)value;

+ (jint)compareWithByte:(jbyte)a
               withByte:(jbyte)b;

+ (jbyte)minWithByteArray:(IOSByteArray *)array;

+ (jbyte)maxWithByteArray:(IOSByteArray *)array;

+ (NSString *)toStringWithByte:(jbyte)x;

+ (NSString *)toStringWithByte:(jbyte)x
                       withInt:(jint)radix;

+ (jbyte)parseUnsignedByteWithNSString:(NSString *)string;

+ (jbyte)parseUnsignedByteWithNSString:(NSString *)string
                               withInt:(jint)radix;

+ (NSString *)joinWithNSString:(NSString *)separator
                 withByteArray:(IOSByteArray *)array;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedBytes)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedBytes_toIntWithByte_(jbyte value);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedBytes_compareWithByte_withByte_(jbyte a, jbyte b);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_minWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_maxWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedBytes_toStringWithByte_(jbyte x);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedBytes_toStringWithByte_withInt_(jbyte x, jint radix);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_parseUnsignedByteWithNSString_(NSString *string);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesUnsignedBytes_parseUnsignedByteWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedBytes_joinWithNSString_withByteArray_(NSString *separator, IOSByteArray *array);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedBytes, MAX_POWER_OF_TWO, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedBytes, MAX_VALUE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedBytes, UNSIGNED_MASK, jint)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedBytes)
