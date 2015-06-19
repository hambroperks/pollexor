//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/util/concurrent/AbstractScheduledService.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentAbstractScheduledService_RESTRICT
#define ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentAbstractScheduledService_RESTRICT
#if ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_INCLUDE
#define ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$2_INCLUDE
#define ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$1_INCLUDE
#define ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_

@class ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler;
@class ComGoogleCommonUtilConcurrentAbstractService;
@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@class JavaUtilLoggingLogger;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;
@protocol ComGoogleCommonUtilConcurrentService_Listener;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentScheduledExecutorService;

#define ComGoogleCommonUtilConcurrentService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentService_INCLUDE 1
#include "com/google/common/util/concurrent/Service.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService : NSObject < ComGoogleCommonUtilConcurrentService > {
}

- (instancetype)init;

- (void)runOneIteration;

- (void)startUp;

- (void)shutDown;

- (ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler *)scheduler;

- (id<JavaUtilConcurrentScheduledExecutorService>)executor;

- (NSString *)serviceName;

- (NSString *)description;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)start;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)startAndWait;

- (jboolean)isRunning;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)state;

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)stop;

- (ComGoogleCommonUtilConcurrentService_StateEnum *)stopAndWait;

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(id<ComGoogleCommonUtilConcurrentService_Listener>)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (JavaLangThrowable *)failureCause;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentAbstractScheduledService_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonUtilConcurrentAbstractScheduledService_logger_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentAbstractScheduledService, logger_, JavaUtilLoggingLogger *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_

@class ComGoogleCommonUtilConcurrentAbstractService;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentScheduledExecutorService;


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler : NSObject {
}

+ (ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler *)newFixedDelayScheduleWithLong:(jlong)initialDelay
                                                                                          withLong:(jlong)delay
                                                                withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler *)newFixedRateScheduleWithLong:(jlong)initialDelay
                                                                                         withLong:(jlong)period
                                                               withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilConcurrentFuture>)scheduleWithComGoogleCommonUtilConcurrentAbstractService:(ComGoogleCommonUtilConcurrentAbstractService *)service
                                          withJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)executor
                                                                    withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler *ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_newFixedDelayScheduleWithLong_withLong_withJavaUtilConcurrentTimeUnitEnum_(jlong initialDelay, jlong delay, JavaUtilConcurrentTimeUnitEnum *unit);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler *ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_newFixedRateScheduleWithLong_withLong_withJavaUtilConcurrentTimeUnitEnum_(jlong initialDelay, jlong period, JavaUtilConcurrentTimeUnitEnum *unit);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$1_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$1_

@class ComGoogleCommonUtilConcurrentAbstractService;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentScheduledExecutorService;


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$1 : ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler {
}

- (id<JavaUtilConcurrentFuture>)scheduleWithComGoogleCommonUtilConcurrentAbstractService:(ComGoogleCommonUtilConcurrentAbstractService *)service
                                          withJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)executor
                                                                    withJavaLangRunnable:(id<JavaLangRunnable>)task;

- (instancetype)initWithLong:(jlong)capture$0
                    withLong:(jlong)capture$1
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)capture$2;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$1)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$2_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$2_

@class ComGoogleCommonUtilConcurrentAbstractService;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentScheduledExecutorService;


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$2 : ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler {
}

- (id<JavaUtilConcurrentFuture>)scheduleWithComGoogleCommonUtilConcurrentAbstractService:(ComGoogleCommonUtilConcurrentAbstractService *)service
                                          withJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)executor
                                                                    withJavaLangRunnable:(id<JavaLangRunnable>)task;

- (instancetype)initWithLong:(jlong)capture$0
                    withLong:(jlong)capture$1
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)capture$2;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler_$2)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_

@class ComGoogleCommonUtilConcurrentAbstractScheduledService;
@class JavaUtilConcurrentLocksReentrantLock;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentScheduledExecutorService;

#define ComGoogleCommonUtilConcurrentAbstractService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentAbstractService_INCLUDE 1
#include "com/google/common/util/concurrent/AbstractService.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate : ComGoogleCommonUtilConcurrentAbstractService {
}

- (void)doStart;

- (void)doStop;

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractScheduledService:(ComGoogleCommonUtilConcurrentAbstractScheduledService *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_ServiceDelegateTask_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_ServiceDelegateTask_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_ServiceDelegateTask_

@class ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_ServiceDelegateTask : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate:(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_ServiceDelegateTask)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_ServiceDelegateTask)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$1_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$1_

@class ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$1 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate:(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$1)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$2_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$2_

@class ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$2 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate:(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_ServiceDelegate_$2)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_

@class ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule;
@class ComGoogleCommonUtilConcurrentAbstractService;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentScheduledExecutorService;


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler : ComGoogleCommonUtilConcurrentAbstractScheduledService_Scheduler {
}

- (id<JavaUtilConcurrentFuture>)scheduleWithComGoogleCommonUtilConcurrentAbstractService:(ComGoogleCommonUtilConcurrentAbstractService *)service
                                          withJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)executor
                                                                    withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule *)getNextSchedule;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_ReschedulableCallable_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_ReschedulableCallable_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_ReschedulableCallable_

@class ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler;
@class ComGoogleCommonUtilConcurrentAbstractService;
@class JavaLangVoid;
@class JavaUtilConcurrentLocksReentrantLock;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentScheduledExecutorService;

#define ComGoogleCommonUtilConcurrentForwardingFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentForwardingFuture_INCLUDE 1
#include "com/google/common/util/concurrent/ForwardingFuture.h"

#define JavaUtilConcurrentCallable_RESTRICT 1
#define JavaUtilConcurrentCallable_INCLUDE 1
#include "java/util/concurrent/Callable.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_ReschedulableCallable : ComGoogleCommonUtilConcurrentForwardingFuture < JavaUtilConcurrentCallable > {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler:(ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler *)outer$
                                             withComGoogleCommonUtilConcurrentAbstractService:(ComGoogleCommonUtilConcurrentAbstractService *)service
                                               withJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)executor
                                                                         withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (id)call;

- (void)reschedule;

- (jboolean)cancelWithBoolean:(jboolean)mayInterruptIfRunning;

- (id<JavaUtilConcurrentFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_ReschedulableCallable)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_ReschedulableCallable)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule_

@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule : NSObject {
}

- (instancetype)initWithLong:(jlong)delay
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_CustomScheduler_Schedule)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_$1_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_$1_

@class JavaLangThread;
@protocol JavaLangRunnable;

#define JavaUtilConcurrentThreadFactory_RESTRICT 1
#define JavaUtilConcurrentThreadFactory_INCLUDE 1
#include "java/util/concurrent/ThreadFactory.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_$1 : NSObject < JavaUtilConcurrentThreadFactory > {
}

- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)runnable OBJC_METHOD_FAMILY_NONE;

- (instancetype)initWithNSString:(NSString *)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_$1)
#if !defined (_ComGoogleCommonUtilConcurrentAbstractScheduledService_$2_) && (ComGoogleCommonUtilConcurrentAbstractScheduledService_INCLUDE_ALL || ComGoogleCommonUtilConcurrentAbstractScheduledService_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentAbstractScheduledService_$2_

@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@protocol JavaUtilConcurrentScheduledExecutorService;

#define ComGoogleCommonUtilConcurrentService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentService_Listener_INCLUDE 1
#include "com/google/common/util/concurrent/Service.h"


@interface ComGoogleCommonUtilConcurrentAbstractScheduledService_$2 : NSObject < ComGoogleCommonUtilConcurrentService_Listener > {
}

- (void)starting;

- (void)running;

- (void)stoppingWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from;

- (void)terminatedWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from;

- (void)failedWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from
                                           withJavaLangThrowable:(JavaLangThrowable *)failure;

- (instancetype)initWithJavaUtilConcurrentScheduledExecutorService:(id<JavaUtilConcurrentScheduledExecutorService>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractScheduledService_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractScheduledService_$2)
