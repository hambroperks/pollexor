//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ConcurrentHashMultiset.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectConcurrentHashMultiset_RESTRICT
#define ComGoogleCommonCollectConcurrentHashMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectConcurrentHashMultiset_RESTRICT
#if !defined (_ComGoogleCommonCollectConcurrentHashMultiset_) && (ComGoogleCommonCollectConcurrentHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectConcurrentHashMultiset_INCLUDE)
#define _ComGoogleCommonCollectConcurrentHashMultiset_

@class ComGoogleCommonCollectConcurrentHashMultiset_EntrySet;
@class ComGoogleCommonCollectGenericMapMaker;
@class IOSObjectArray;
@class JavaIoObjectOutputStream;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectAbstractMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultiset_INCLUDE 1
#include "com/google/common/collect/AbstractMultiset.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectConcurrentHashMultiset_serialVersionUID 1LL

@interface ComGoogleCommonCollectConcurrentHashMultiset : ComGoogleCommonCollectAbstractMultiset < JavaIoSerializable > {
}

+ (ComGoogleCommonCollectConcurrentHashMultiset *)create;

+ (ComGoogleCommonCollectConcurrentHashMultiset *)createWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (ComGoogleCommonCollectConcurrentHashMultiset *)createWithComGoogleCommonCollectGenericMapMaker:(ComGoogleCommonCollectGenericMapMaker *)mapMaker;

- (instancetype)initWithJavaUtilConcurrentConcurrentMap:(id<JavaUtilConcurrentConcurrentMap>)countMap;

- (jint)countWithId:(id)element;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jboolean)removeExactlyWithId:(id)element
                        withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)expectedOldCount
                   withInt:(jint)newCount;

- (id<JavaUtilSet>)createElementSet;

- (id<JavaUtilSet>)entrySet;

- (jint)distinctElements;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)entryIterator;

- (void)clear;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectConcurrentHashMultiset)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *ComGoogleCommonCollectConcurrentHashMultiset_create();

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *ComGoogleCommonCollectConcurrentHashMultiset_createWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectConcurrentHashMultiset *ComGoogleCommonCollectConcurrentHashMultiset_createWithComGoogleCommonCollectGenericMapMaker_(ComGoogleCommonCollectGenericMapMaker *mapMaker);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectConcurrentHashMultiset, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectConcurrentHashMultiset)
#if !defined (_ComGoogleCommonCollectConcurrentHashMultiset_EntrySet_) && (ComGoogleCommonCollectConcurrentHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectConcurrentHashMultiset_EntrySet_INCLUDE)
#define _ComGoogleCommonCollectConcurrentHashMultiset_EntrySet_

@class ComGoogleCommonCollectConcurrentHashMultiset;
@class IOSObjectArray;
@protocol JavaUtilList;

#define ComGoogleCommonCollectAbstractMultiset_RESTRICT 1
#define ComGoogleCommonCollectAbstractMultiset_EntrySet_INCLUDE 1
#include "com/google/common/collect/AbstractMultiset.h"


@interface ComGoogleCommonCollectConcurrentHashMultiset_EntrySet : ComGoogleCommonCollectAbstractMultiset_EntrySet {
}

- (ComGoogleCommonCollectConcurrentHashMultiset *)multiset;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

- (instancetype)initWithComGoogleCommonCollectConcurrentHashMultiset:(ComGoogleCommonCollectConcurrentHashMultiset *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectConcurrentHashMultiset_EntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectConcurrentHashMultiset_EntrySet)
#if !defined (_ComGoogleCommonCollectConcurrentHashMultiset_$1_) && (ComGoogleCommonCollectConcurrentHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectConcurrentHashMultiset_$1_INCLUDE)
#define _ComGoogleCommonCollectConcurrentHashMultiset_$1_

@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingSet_RESTRICT 1
#define ComGoogleCommonCollectForwardingSet_INCLUDE 1
#include "com/google/common/collect/ForwardingSet.h"


@interface ComGoogleCommonCollectConcurrentHashMultiset_$1 : ComGoogleCommonCollectForwardingSet {
}

- (id<JavaUtilSet>)delegate;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)capture$0;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectConcurrentHashMultiset_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectConcurrentHashMultiset_$1)
#if !defined (_ComGoogleCommonCollectConcurrentHashMultiset_$2_) && (ComGoogleCommonCollectConcurrentHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectConcurrentHashMultiset_$2_INCLUDE)
#define _ComGoogleCommonCollectConcurrentHashMultiset_$2_

@class ComGoogleCommonCollectConcurrentHashMultiset;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectConcurrentHashMultiset_$2 : ComGoogleCommonCollectAbstractIterator {
}

- (id<ComGoogleCommonCollectMultiset_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectConcurrentHashMultiset:(ComGoogleCommonCollectConcurrentHashMultiset *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectConcurrentHashMultiset_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectConcurrentHashMultiset_$2)
#if !defined (_ComGoogleCommonCollectConcurrentHashMultiset_$3_) && (ComGoogleCommonCollectConcurrentHashMultiset_INCLUDE_ALL || ComGoogleCommonCollectConcurrentHashMultiset_$3_INCLUDE)
#define _ComGoogleCommonCollectConcurrentHashMultiset_$3_

@class ComGoogleCommonCollectConcurrentHashMultiset;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilIterator;

#define ComGoogleCommonCollectForwardingIterator_RESTRICT 1
#define ComGoogleCommonCollectForwardingIterator_INCLUDE 1
#include "com/google/common/collect/ForwardingIterator.h"


@interface ComGoogleCommonCollectConcurrentHashMultiset_$3 : ComGoogleCommonCollectForwardingIterator {
}

- (id<JavaUtilIterator>)delegate;

- (id<ComGoogleCommonCollectMultiset_Entry>)next;

- (void)remove;

- (instancetype)initWithComGoogleCommonCollectConcurrentHashMultiset:(ComGoogleCommonCollectConcurrentHashMultiset *)outer$
                                                withJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectConcurrentHashMultiset_$3)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectConcurrentHashMultiset_$3)
