//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/api/VerificationDataInOrderImpl.java
//

#ifndef _OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_H_
#define _OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_H_

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

#include "J2ObjC_header.h"
#include "org/mockito/internal/verification/api/VerificationDataInOrder.h"

@interface OrgMockitoInternalVerificationApiVerificationDataInOrderImpl : NSObject < OrgMockitoInternalVerificationApiVerificationDataInOrder > {
}

- (instancetype)initWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)inOrder
                                                       withJavaUtilList:(id<JavaUtilList>)allInvocations
                      withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<JavaUtilList>)getAllInvocations;

- (id<OrgMockitoInternalVerificationApiInOrderContext>)getOrderingContext;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl)

#endif // _OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_H_
