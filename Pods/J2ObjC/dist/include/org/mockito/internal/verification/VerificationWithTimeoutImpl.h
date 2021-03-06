//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationWithTimeoutImpl.java
//

#ifndef _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_
#define _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoVerificationVerificationMode;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalVerificationVerificationWithTimeoutImpl : NSObject {
 @public
  id<OrgMockitoVerificationVerificationMode> delegate_;
  jint timeout_;
  jint treshhold_;
}

- (instancetype)initWithInt:(jint)treshhold
                    withInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)sleepWithInt:(jint)sleep;

- (id<OrgMockitoVerificationVerificationMode>)getDelegate;

- (jint)getTimeout;

- (jint)getTreshhold;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationVerificationWithTimeoutImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationVerificationWithTimeoutImpl, delegate_, id<OrgMockitoVerificationVerificationMode>)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationVerificationWithTimeoutImpl)

#endif // _OrgMockitoInternalVerificationVerificationWithTimeoutImpl_H_
