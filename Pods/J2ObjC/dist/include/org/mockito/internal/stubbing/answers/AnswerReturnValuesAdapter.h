//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/AnswerReturnValuesAdapter.java
//

#ifndef _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_
#define _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_

@protocol OrgMockitoInvocationInvocationOnMock;
@protocol OrgMockitoReturnValues;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_serialVersionUID 1418158596876713469LL

@interface OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
}

- (instancetype)initWithOrgMockitoReturnValues:(id<OrgMockitoReturnValues>)returnValues;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter)

#endif // _OrgMockitoInternalStubbingAnswersAnswerReturnValuesAdapter_H_
