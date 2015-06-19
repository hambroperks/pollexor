//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/CountDownLatch.java
//

#ifndef _JavaUtilConcurrentCountDownLatch_H_
#define _JavaUtilConcurrentCountDownLatch_H_

@class JavaUtilConcurrentCountDownLatch_Sync;
@class JavaUtilConcurrentTimeUnitEnum;

#include "J2ObjC_header.h"
#include "java/util/concurrent/locks/AbstractQueuedSynchronizer.h"

@interface JavaUtilConcurrentCountDownLatch : NSObject {
}

- (instancetype)initWithInt:(jint)count;

- (void)await;

- (jboolean)awaitWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)countDown;

- (jlong)getCount;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCountDownLatch)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCountDownLatch)

#define JavaUtilConcurrentCountDownLatch_Sync_serialVersionUID 4982264981922014374LL

@interface JavaUtilConcurrentCountDownLatch_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer {
}

- (instancetype)initWithInt:(jint)count;

- (jint)getCount;

- (jint)tryAcquireSharedWithInt:(jint)acquires;

- (jboolean)tryReleaseSharedWithInt:(jint)releases;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCountDownLatch_Sync)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentCountDownLatch_Sync, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCountDownLatch_Sync)

#endif // _JavaUtilConcurrentCountDownLatch_H_
