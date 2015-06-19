//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicLong.java
//

#ifndef _JavaUtilConcurrentAtomicAtomicLong_H_
#define _JavaUtilConcurrentAtomicAtomicLong_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define JavaUtilConcurrentAtomicAtomicLong_serialVersionUID 1927816293512124184LL

@interface JavaUtilConcurrentAtomicAtomicLong : NSNumber < JavaIoSerializable > {
}


- (instancetype)initWithLong:(jlong)initialValue;


- (instancetype)init;

- (jlong)get;

- (void)setWithLong:(jlong)newValue;

- (void)lazySetWithLong:(jlong)newValue;

- (jlong)getAndSetWithLong:(jlong)newValue;

- (jboolean)compareAndSetWithLong:(jlong)expect
                         withLong:(jlong)update;

- (jboolean)weakCompareAndSetWithLong:(jlong)expect
                             withLong:(jlong)update;

- (jlong)getAndIncrement;

- (jlong)getAndDecrement;

- (jlong)getAndAddWithLong:(jlong)delta;

- (jlong)incrementAndGet;

- (jlong)decrementAndGet;

- (jlong)addAndGetWithLong:(jlong)delta;

- (NSString *)description;

- (jint)intValue;

- (jlong)longLongValue;

- (jfloat)floatValue;

- (jdouble)doubleValue;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicLong)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentAtomicAtomicLong, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicLong)

#endif // _JavaUtilConcurrentAtomicAtomicLong_H_
