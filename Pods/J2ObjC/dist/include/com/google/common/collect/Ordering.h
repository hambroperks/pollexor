//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/Ordering.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectOrdering_RESTRICT
#define ComGoogleCommonCollectOrdering_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectOrdering_RESTRICT
#if ComGoogleCommonCollectOrdering_ArbitraryOrdering_INCLUDE
#define ComGoogleCommonCollectOrdering_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder_INCLUDE)
#define _ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder_

@class ComGoogleCommonCollectOrdering;


@interface ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder : NSObject {
}

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder_ARBITRARY_ORDERING_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder, ARBITRARY_ORDERING_, ComGoogleCommonCollectOrdering *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_ArbitraryOrderingHolder)
#if !defined (_ComGoogleCommonCollectOrdering_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_INCLUDE)
#define _ComGoogleCommonCollectOrdering_

@class ComGoogleCommonCollectImmutableList;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


#define ComGoogleCommonCollectOrdering_LEFT_IS_GREATER 1
#define ComGoogleCommonCollectOrdering_RIGHT_IS_GREATER -1

@interface ComGoogleCommonCollectOrdering : NSObject < JavaUtilComparator > {
}

+ (ComGoogleCommonCollectOrdering *)natural;

+ (ComGoogleCommonCollectOrdering *)fromWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectOrdering *)fromWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

+ (ComGoogleCommonCollectOrdering *)explicit__WithJavaUtilList:(id<JavaUtilList>)valuesInOrder;

+ (ComGoogleCommonCollectOrdering *)explicit__WithId:(id)leastValue
                                   withNSObjectArray:(IOSObjectArray *)remainingValuesInOrder;

+ (ComGoogleCommonCollectOrdering *)allEqual;

+ (ComGoogleCommonCollectOrdering *)usingToString;

+ (ComGoogleCommonCollectOrdering *)arbitrary;

- (instancetype)init;

- (ComGoogleCommonCollectOrdering *)reverse;

- (ComGoogleCommonCollectOrdering *)nullsFirst;

- (ComGoogleCommonCollectOrdering *)nullsLast;

- (ComGoogleCommonCollectOrdering *)onResultOfWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonCollectOrdering *)compoundWithJavaUtilComparator:(id<JavaUtilComparator>)secondaryComparator;

+ (ComGoogleCommonCollectOrdering *)compoundWithJavaLangIterable:(id<JavaLangIterable>)comparators;

- (ComGoogleCommonCollectOrdering *)lexicographical;

- (jint)compareWithId:(id)left
               withId:(id)right;

- (id)minWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (id)minWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id)minWithId:(id)a
         withId:(id)b;

- (id)minWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

- (id)maxWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (id)maxWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id)maxWithId:(id)a
         withId:(id)b;

- (id)maxWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

- (id<JavaUtilList>)leastOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                        withInt:(jint)k;

- (id<JavaUtilList>)leastOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements
                                        withInt:(jint)k;

- (id<JavaUtilList>)greatestOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                           withInt:(jint)k;

- (id<JavaUtilList>)greatestOfWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                           withInt:(jint)k;

- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (ComGoogleCommonCollectImmutableList *)immutableSortedCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (jboolean)isOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (jboolean)isStrictlyOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)sortedList
                              withId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_natural();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithJavaUtilList_(id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithId_withNSObjectArray_(id leastValue, IOSObjectArray *remainingValuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_allEqual();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_usingToString();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_arbitrary();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_compoundWithJavaLangIterable_(id<JavaLangIterable> comparators);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectOrdering, LEFT_IS_GREATER, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectOrdering, RIGHT_IS_GREATER, jint)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering)
#if !defined (_ComGoogleCommonCollectOrdering_ArbitraryOrdering_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_ArbitraryOrdering_INCLUDE)
#define _ComGoogleCommonCollectOrdering_ArbitraryOrdering_

@protocol JavaUtilMap;


@interface ComGoogleCommonCollectOrdering_ArbitraryOrdering : ComGoogleCommonCollectOrdering {
}

- (jint)compareWithId:(id)left
               withId:(id)right;

- (NSString *)description;

- (jint)identityHashCodeWithId:(id)object;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_ArbitraryOrdering)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_ArbitraryOrdering)
#if !defined (_ComGoogleCommonCollectOrdering_ArbitraryOrdering_$1_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_ArbitraryOrdering_$1_INCLUDE)
#define _ComGoogleCommonCollectOrdering_ArbitraryOrdering_$1_

@class JavaLangInteger;
@class JavaUtilConcurrentAtomicAtomicInteger;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonCollectOrdering_ArbitraryOrdering_$1 : NSObject < ComGoogleCommonBaseFunction > {
 @public
  JavaUtilConcurrentAtomicAtomicInteger *counter_;
}

- (JavaLangInteger *)applyWithId:(id)from;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_ArbitraryOrdering_$1)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectOrdering_ArbitraryOrdering_$1, counter_, JavaUtilConcurrentAtomicAtomicInteger *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_ArbitraryOrdering_$1)
#if !defined (_ComGoogleCommonCollectOrdering_IncomparableValueException_) && (ComGoogleCommonCollectOrdering_INCLUDE_ALL || ComGoogleCommonCollectOrdering_IncomparableValueException_INCLUDE)
#define _ComGoogleCommonCollectOrdering_IncomparableValueException_

#define JavaLangClassCastException_RESTRICT 1
#define JavaLangClassCastException_INCLUDE 1
#include "java/lang/ClassCastException.h"


#define ComGoogleCommonCollectOrdering_IncomparableValueException_serialVersionUID 0LL

@interface ComGoogleCommonCollectOrdering_IncomparableValueException : JavaLangClassCastException {
 @public
  id value_;
}

- (instancetype)initWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_IncomparableValueException)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectOrdering_IncomparableValueException, value_, id)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectOrdering_IncomparableValueException, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_IncomparableValueException)
