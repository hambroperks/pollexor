//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/Ranges.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectRanges_RESTRICT
#define ComGoogleCommonCollectRanges_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRanges_RESTRICT
#if !defined (_ComGoogleCommonCollectRanges_) && (ComGoogleCommonCollectRanges_INCLUDE_ALL || ComGoogleCommonCollectRanges_INCLUDE)
#define _ComGoogleCommonCollectRanges_

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaLangIterable;


@interface ComGoogleCommonCollectRanges : NSObject {
}

+ (ComGoogleCommonCollectRange *)openWithJavaLangComparable:(id<JavaLangComparable>)lower
                                     withJavaLangComparable:(id<JavaLangComparable>)upper;

+ (ComGoogleCommonCollectRange *)closedWithJavaLangComparable:(id<JavaLangComparable>)lower
                                       withJavaLangComparable:(id<JavaLangComparable>)upper;

+ (ComGoogleCommonCollectRange *)closedOpenWithJavaLangComparable:(id<JavaLangComparable>)lower
                                           withJavaLangComparable:(id<JavaLangComparable>)upper;

+ (ComGoogleCommonCollectRange *)openClosedWithJavaLangComparable:(id<JavaLangComparable>)lower
                                           withJavaLangComparable:(id<JavaLangComparable>)upper;

+ (ComGoogleCommonCollectRange *)rangeWithJavaLangComparable:(id<JavaLangComparable>)lower
                     withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)lowerType
                                      withJavaLangComparable:(id<JavaLangComparable>)upper
                     withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)upperType;

+ (ComGoogleCommonCollectRange *)lessThanWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectRange *)atMostWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectRange *)upToWithJavaLangComparable:(id<JavaLangComparable>)endpoint
                    withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

+ (ComGoogleCommonCollectRange *)greaterThanWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectRange *)atLeastWithJavaLangComparable:(id<JavaLangComparable>)endpoint;

+ (ComGoogleCommonCollectRange *)downToWithJavaLangComparable:(id<JavaLangComparable>)endpoint
                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)boundType;

+ (ComGoogleCommonCollectRange *)all;

+ (ComGoogleCommonCollectRange *)singletonWithJavaLangComparable:(id<JavaLangComparable>)value;

+ (ComGoogleCommonCollectRange *)encloseAllWithJavaLangIterable:(id<JavaLangIterable>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRanges)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_openWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_closedWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_closedOpenWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_openClosedWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> lower, id<JavaLangComparable> upper);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_rangeWithJavaLangComparable_withComGoogleCommonCollectBoundTypeEnum_withJavaLangComparable_withComGoogleCommonCollectBoundTypeEnum_(id<JavaLangComparable> lower, ComGoogleCommonCollectBoundTypeEnum *lowerType, id<JavaLangComparable> upper, ComGoogleCommonCollectBoundTypeEnum *upperType);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_lessThanWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_atMostWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_upToWithJavaLangComparable_withComGoogleCommonCollectBoundTypeEnum_(id<JavaLangComparable> endpoint, ComGoogleCommonCollectBoundTypeEnum *boundType);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_greaterThanWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_atLeastWithJavaLangComparable_(id<JavaLangComparable> endpoint);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_downToWithJavaLangComparable_withComGoogleCommonCollectBoundTypeEnum_(id<JavaLangComparable> endpoint, ComGoogleCommonCollectBoundTypeEnum *boundType);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_all();

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_singletonWithJavaLangComparable_(id<JavaLangComparable> value);

FOUNDATION_EXPORT ComGoogleCommonCollectRange *ComGoogleCommonCollectRanges_encloseAllWithJavaLangIterable_(id<JavaLangIterable> values);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRanges)
