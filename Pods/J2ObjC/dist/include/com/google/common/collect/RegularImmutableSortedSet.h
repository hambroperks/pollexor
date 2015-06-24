//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/RegularImmutableSortedSet.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectRegularImmutableSortedSet_RESTRICT
#define ComGoogleCommonCollectRegularImmutableSortedSet_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableSortedSet_RESTRICT
#if !defined (_ComGoogleCommonCollectRegularImmutableSortedSet_) && (ComGoogleCommonCollectRegularImmutableSortedSet_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableSortedSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableSortedSet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

#define ComGoogleCommonCollectImmutableSortedSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSortedSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSortedSet.h"


@interface ComGoogleCommonCollectRegularImmutableSortedSet : ComGoogleCommonCollectImmutableSortedSet {
}

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)elements
                                     withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectUnmodifiableIterator *)descendingIterator;

- (jboolean)isEmpty;

- (jint)size;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)targets;

- (jboolean)isPartialView;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jboolean)isEqual:(id)object;

- (id)first;

- (id)last;

- (id)lowerWithId:(id)element;

- (id)floorWithId:(id)element;

- (id)ceilingWithId:(id)element;

- (id)higherWithId:(id)element;

- (ComGoogleCommonCollectImmutableSortedSet *)headSetImplWithId:(id)toElement
                                                    withBoolean:(jboolean)inclusive;

- (jint)headIndexWithId:(id)toElement
            withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)subSetImplWithId:(id)fromElement
                                                   withBoolean:(jboolean)fromInclusive
                                                        withId:(id)toElement
                                                   withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)tailSetImplWithId:(id)fromElement
                                                    withBoolean:(jboolean)inclusive;

- (jint)tailIndexWithId:(id)fromElement
            withBoolean:(jboolean)inclusive;

- (id<JavaUtilComparator>)unsafeComparator;

- (ComGoogleCommonCollectImmutableSortedSet *)getSubSetWithInt:(jint)newFromIndex
                                                       withInt:(jint)newToIndex;

- (jint)indexOfWithId:(id)target;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (ComGoogleCommonCollectImmutableSortedSet *)createDescendingSet;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableSortedSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableSortedSet)