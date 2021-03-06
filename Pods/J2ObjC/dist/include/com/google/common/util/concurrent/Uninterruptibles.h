//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/Uninterruptibles.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentUninterruptibles_RESTRICT
#define ComGoogleCommonUtilConcurrentUninterruptibles_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentUninterruptibles_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentUninterruptibles_) && (ComGoogleCommonUtilConcurrentUninterruptibles_INCLUDE_ALL || ComGoogleCommonUtilConcurrentUninterruptibles_INCLUDE)
#define _ComGoogleCommonUtilConcurrentUninterruptibles_

@class JavaLangThread;
@class JavaUtilConcurrentCountDownLatch;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilConcurrentFuture;


@interface ComGoogleCommonUtilConcurrentUninterruptibles : NSObject {
}

+ (void)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(JavaUtilConcurrentCountDownLatch *)latch;

+ (jboolean)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(JavaUtilConcurrentCountDownLatch *)latch
                                                            withLong:(jlong)timeout
                                  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (void)joinUninterruptiblyWithJavaLangThread:(JavaLangThread *)toJoin;

+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future;

+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                                            withLong:(jlong)timeout
                  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (void)joinUninterruptiblyWithJavaLangThread:(JavaLangThread *)toJoin
                                     withLong:(jlong)timeout
           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (id)takeUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)queue;

+ (void)putUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)queue
                                                       withId:(id)element;

+ (void)sleepUninterruptiblyWithLong:(jlong)sleepFor
  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUninterruptibles)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch_(JavaUtilConcurrentCountDownLatch *latch);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch_withLong_withJavaUtilConcurrentTimeUnitEnum_(JavaUtilConcurrentCountDownLatch *latch, jlong timeout, JavaUtilConcurrentTimeUnitEnum *unit);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_joinUninterruptiblyWithJavaLangThread_(JavaLangThread *toJoin);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_getUninterruptiblyWithJavaUtilConcurrentFuture_(id<JavaUtilConcurrentFuture> future);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_getUninterruptiblyWithJavaUtilConcurrentFuture_withLong_withJavaUtilConcurrentTimeUnitEnum_(id<JavaUtilConcurrentFuture> future, jlong timeout, JavaUtilConcurrentTimeUnitEnum *unit);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_joinUninterruptiblyWithJavaLangThread_withLong_withJavaUtilConcurrentTimeUnitEnum_(JavaLangThread *toJoin, jlong timeout, JavaUtilConcurrentTimeUnitEnum *unit);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_takeUninterruptiblyWithJavaUtilConcurrentBlockingQueue_(id<JavaUtilConcurrentBlockingQueue> queue);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_putUninterruptiblyWithJavaUtilConcurrentBlockingQueue_withId_(id<JavaUtilConcurrentBlockingQueue> queue, id element);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_sleepUninterruptiblyWithLong_withJavaUtilConcurrentTimeUnitEnum_(jlong sleepFor, JavaUtilConcurrentTimeUnitEnum *unit);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUninterruptibles)
