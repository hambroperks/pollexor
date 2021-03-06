//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/base/Stopwatch.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonBaseStopwatch_RESTRICT
#define ComGoogleCommonBaseStopwatch_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonBaseStopwatch_RESTRICT
#if !defined (_ComGoogleCommonBaseStopwatch_) && (ComGoogleCommonBaseStopwatch_INCLUDE_ALL || ComGoogleCommonBaseStopwatch_INCLUDE)
#define _ComGoogleCommonBaseStopwatch_

@class ComGoogleCommonBaseTicker;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonBaseStopwatch : NSObject {
}

- (instancetype)init;

- (instancetype)initWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

- (jboolean)isRunning;

- (ComGoogleCommonBaseStopwatch *)start;

- (ComGoogleCommonBaseStopwatch *)stop;

- (ComGoogleCommonBaseStopwatch *)reset;

- (jlong)elapsedWithJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)desiredUnit;

- (jlong)elapsedTimeWithJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)desiredUnit;

- (jlong)elapsedMillis;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)significantDigits;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseStopwatch)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseStopwatch)
