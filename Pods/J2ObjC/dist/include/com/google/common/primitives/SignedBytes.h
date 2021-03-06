//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/primitives/SignedBytes.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonPrimitivesSignedBytes_RESTRICT
#define ComGoogleCommonPrimitivesSignedBytes_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonPrimitivesSignedBytes_RESTRICT
#if !defined (_ComGoogleCommonPrimitivesSignedBytes_) && (ComGoogleCommonPrimitivesSignedBytes_INCLUDE_ALL || ComGoogleCommonPrimitivesSignedBytes_INCLUDE)
#define _ComGoogleCommonPrimitivesSignedBytes_

@class IOSByteArray;
@protocol JavaUtilComparator;


#define ComGoogleCommonPrimitivesSignedBytes_MAX_POWER_OF_TWO 64

@interface ComGoogleCommonPrimitivesSignedBytes : NSObject {
}

+ (jbyte)checkedCastWithLong:(jlong)value;

+ (jbyte)saturatedCastWithLong:(jlong)value;

+ (jint)compareWithByte:(jbyte)a
               withByte:(jbyte)b;

+ (jbyte)minWithByteArray:(IOSByteArray *)array;

+ (jbyte)maxWithByteArray:(IOSByteArray *)array;

+ (NSString *)joinWithNSString:(NSString *)separator
                 withByteArray:(IOSByteArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesSignedBytes)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_checkedCastWithLong_(jlong value);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_saturatedCastWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesSignedBytes_compareWithByte_withByte_(jbyte a, jbyte b);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_minWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT jbyte ComGoogleCommonPrimitivesSignedBytes_maxWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesSignedBytes_joinWithNSString_withByteArray_(NSString *separator, IOSByteArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesSignedBytes_lexicographicalComparator();

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonPrimitivesSignedBytes, MAX_POWER_OF_TWO, jbyte)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesSignedBytes)
#if !defined (_ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_) && (ComGoogleCommonPrimitivesSignedBytes_INCLUDE_ALL || ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_INCLUDE)
#define _ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_

@class IOSByteArray;

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparator) {
  ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparator_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum : JavaLangEnum < NSCopying, JavaUtilComparator > {
}

- (jint)compareWithId:(IOSByteArray *)left
               withId:(IOSByteArray *)right;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_values();

+ (ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum *ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_values_[];

#define ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_INSTANCE ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum_values_[ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparator_INSTANCE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum, INSTANCE)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesSignedBytes_LexicographicalComparatorEnum)
