//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/VoidMethodStubbableImpl.java
//

#ifndef _OrgMockitoInternalStubbingVoidMethodStubbableImpl_H_
#define _OrgMockitoInternalStubbingVoidMethodStubbableImpl_H_

@class JavaLangThrowable;
@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol OrgMockitoStubbingAnswer;

#include "J2ObjC_header.h"
#include "org/mockito/stubbing/VoidMethodStubbable.h"

@interface OrgMockitoInternalStubbingVoidMethodStubbableImpl : NSObject < OrgMockitoStubbingVoidMethodStubbable > {
}

- (instancetype)initWithId:(id)mock
withOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainerImpl;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toThrowWithJavaLangThrowable:(JavaLangThrowable *)throwable;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toReturn;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id)on;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingVoidMethodStubbableImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingVoidMethodStubbableImpl)

#endif // _OrgMockitoInternalStubbingVoidMethodStubbableImpl_H_
