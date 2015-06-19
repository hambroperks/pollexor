//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/runner/TestRunListener.java
//

#ifndef _JunitRunnerTestRunListener_H_
#define _JunitRunnerTestRunListener_H_

#include "J2ObjC_header.h"

#define JunitRunnerTestRunListener_STATUS_ERROR 1
#define JunitRunnerTestRunListener_STATUS_FAILURE 2

@protocol JunitRunnerTestRunListener < NSObject, JavaObject >

- (void)testRunStartedWithNSString:(NSString *)testSuiteName
                           withInt:(jint)testCount;

- (void)testRunEndedWithLong:(jlong)elapsedTime;

- (void)testRunStoppedWithLong:(jlong)elapsedTime;

- (void)testStartedWithNSString:(NSString *)testName;

- (void)testEndedWithNSString:(NSString *)testName;

- (void)testFailedWithInt:(jint)status
             withNSString:(NSString *)testName
             withNSString:(NSString *)trace;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitRunnerTestRunListener)

J2OBJC_STATIC_FIELD_GETTER(JunitRunnerTestRunListener, STATUS_ERROR, jint)

J2OBJC_STATIC_FIELD_GETTER(JunitRunnerTestRunListener, STATUS_FAILURE, jint)

J2OBJC_TYPE_LITERAL_HEADER(JunitRunnerTestRunListener)

#endif // _JunitRunnerTestRunListener_H_
