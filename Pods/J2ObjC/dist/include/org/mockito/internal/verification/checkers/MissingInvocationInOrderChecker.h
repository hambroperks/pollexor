//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/MissingInvocationInOrderChecker.java
//

#ifndef _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_
#define _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoVerificationVerificationMode;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker : NSObject {
}

- (instancetype)init;

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker)

#endif // _OrgMockitoInternalVerificationCheckersMissingInvocationInOrderChecker_H_
