//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/InvocationNotifierHandler.java
//

#ifndef _OrgMockitoInternalHandlerInvocationNotifierHandler_H_
#define _OrgMockitoInternalHandlerInvocationNotifierHandler_H_

@class JavaLangThrowable;
@protocol JavaUtilList;
@protocol OrgMockitoInternalStubbingInvocationContainer;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingVoidMethodStubbable;

#include "J2ObjC_header.h"
#include "org/mockito/internal/InternalMockHandler.h"
#include "org/mockito/invocation/MockHandler.h"

@interface OrgMockitoInternalHandlerInvocationNotifierHandler : NSObject < OrgMockitoInvocationMockHandler, OrgMockitoInternalInternalMockHandler > {
}

- (instancetype)initWithOrgMockitoInternalInternalMockHandler:(id<OrgMockitoInternalInternalMockHandler>)mockHandler
                       withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id<OrgMockitoStubbingVoidMethodStubbable>)voidMethodStubbableWithId:(id)mock;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (id<OrgMockitoInternalStubbingInvocationContainer>)getInvocationContainer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerInvocationNotifierHandler)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerInvocationNotifierHandler)

#endif // _OrgMockitoInternalHandlerInvocationNotifierHandler_H_
