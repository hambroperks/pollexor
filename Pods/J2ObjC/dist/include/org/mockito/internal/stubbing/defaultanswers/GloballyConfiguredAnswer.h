//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/GloballyConfiguredAnswer.java
//

#ifndef _OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_H_
#define _OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_H_

@protocol OrgMockitoInvocationInvocationOnMock;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_serialVersionUID 3585893470101750917LL

@interface OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
}

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer)

#endif // _OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_H_
