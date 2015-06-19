//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/primitives/UnsignedInteger.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonPrimitivesUnsignedInteger_RESTRICT
#define ComGoogleCommonPrimitivesUnsignedInteger_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesUnsignedInteger_RESTRICT
#if !defined (_ComGoogleCommonPrimitivesUnsignedInteger_) && (ComGoogleCommonPrimitivesUnsignedInteger_INCLUDE_ALL || ComGoogleCommonPrimitivesUnsignedInteger_INCLUDE)
#define _ComGoogleCommonPrimitivesUnsignedInteger_

@class JavaMathBigInteger;

#define JavaLangComparable_RESTRICT 1
#define JavaLangComparable_INCLUDE 1
#include "java/lang/Comparable.h"


@interface ComGoogleCommonPrimitivesUnsignedInteger : NSNumber < JavaLangComparable > {
}



+ (ComGoogleCommonPrimitivesUnsignedInteger *)asUnsignedWithInt:(jint)value;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)fromIntBitsWithInt:(jint)bits;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithLong:(jlong)value;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithJavaMathBigInteger:(JavaMathBigInteger *)value;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithNSString:(NSString *)string;

+ (ComGoogleCommonPrimitivesUnsignedInteger *)valueOfWithNSString:(NSString *)string
                                                          withInt:(jint)radix;

- (ComGoogleCommonPrimitivesUnsignedInteger *)addWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)plusWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)subtractWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)minusWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)multiplyWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)timesWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)divideWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)dividedByWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)remainderWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (ComGoogleCommonPrimitivesUnsignedInteger *)modWithComGoogleCommonPrimitivesUnsignedInteger:(ComGoogleCommonPrimitivesUnsignedInteger *)val;

- (jint)intValue;

- (jlong)longLongValue;

- (jfloat)floatValue;

- (jdouble)doubleValue;

- (JavaMathBigInteger *)bigIntegerValue;

- (jint)compareToWithId:(ComGoogleCommonPrimitivesUnsignedInteger *)other;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)obj;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)radix;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesUnsignedInteger_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedInteger)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_asUnsignedWithInt_(jint value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_fromIntBitsWithInt_(jint bits);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithLong_(jlong value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithJavaMathBigInteger_(JavaMathBigInteger *value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithNSString_(NSString *string);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_valueOfWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_ZERO_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedInteger, ZERO_, ComGoogleCommonPrimitivesUnsignedInteger *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_ONE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedInteger, ONE_, ComGoogleCommonPrimitivesUnsignedInteger *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInteger *ComGoogleCommonPrimitivesUnsignedInteger_MAX_VALUE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesUnsignedInteger, MAX_VALUE_, ComGoogleCommonPrimitivesUnsignedInteger *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedInteger)
