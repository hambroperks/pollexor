//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ContiguousSet.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectContiguousSet_RESTRICT
#define ComGoogleCommonCollectContiguousSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectContiguousSet_RESTRICT
#if !defined (_ComGoogleCommonCollectContiguousSet_) && (ComGoogleCommonCollectContiguousSet_INCLUDE_ALL || ComGoogleCommonCollectContiguousSet_INCLUDE)
#define _ComGoogleCommonCollectContiguousSet_

@class ComGoogleCommonCollectBoundTypeEnum;
@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;

#define ComGoogleCommonCollectImmutableSortedSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedSet.h"


@interface ComGoogleCommonCollectContiguousSet : ComGoogleCommonCollectImmutableSortedSet {
 @public
  ComGoogleCommonCollectDiscreteDomain *domain_;
}

+ (ComGoogleCommonCollectContiguousSet *)createWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                      withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (instancetype)initWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (ComGoogleCommonCollectContiguousSet *)headSetWithId:(id<JavaLangComparable>)toElement;

- (ComGoogleCommonCollectContiguousSet *)headSetWithId:(id<JavaLangComparable>)toElement
                                           withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectContiguousSet *)subSetWithId:(id<JavaLangComparable>)fromElement
                                               withId:(id<JavaLangComparable>)toElement;

- (ComGoogleCommonCollectContiguousSet *)subSetWithId:(id<JavaLangComparable>)fromElement
                                          withBoolean:(jboolean)fromInclusive
                                               withId:(id<JavaLangComparable>)toElement
                                          withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectContiguousSet *)tailSetWithId:(id<JavaLangComparable>)fromElement;

- (ComGoogleCommonCollectContiguousSet *)tailSetWithId:(id<JavaLangComparable>)fromElement
                                           withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectContiguousSet *)headSetImplWithId:(id<JavaLangComparable>)toElement
                                               withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectContiguousSet *)subSetImplWithId:(id<JavaLangComparable>)fromElement
                                              withBoolean:(jboolean)fromInclusive
                                                   withId:(id<JavaLangComparable>)toElement
                                              withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectContiguousSet *)tailSetImplWithId:(id<JavaLangComparable>)fromElement
                                               withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectContiguousSet *)intersectionWithComGoogleCommonCollectContiguousSet:(ComGoogleCommonCollectContiguousSet *)other;

- (ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)rangeWithComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)lowerBoundType
                                      withComGoogleCommonCollectBoundTypeEnum:(ComGoogleCommonCollectBoundTypeEnum *)upperBoundType;

- (NSString *)description;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectContiguousSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectContiguousSet, domain_, ComGoogleCommonCollectDiscreteDomain *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectContiguousSet *ComGoogleCommonCollectContiguousSet_createWithComGoogleCommonCollectRange_withComGoogleCommonCollectDiscreteDomain_(ComGoogleCommonCollectRange *range, ComGoogleCommonCollectDiscreteDomain *domain);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectContiguousSet)