//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/debugging/MockitoDebuggerImpl.java
//

#ifndef _OrgMockitoInternalDebuggingMockitoDebuggerImpl_H_
#define _OrgMockitoInternalDebuggingMockitoDebuggerImpl_H_

@class IOSObjectArray;
@class OrgMockitoInternalInvocationFinderAllInvocationsFinder;
@class OrgMockitoInternalInvocationUnusedStubsFinder;

#include "J2ObjC_header.h"
#include "org/mockito/MockitoDebugger.h"

@interface OrgMockitoInternalDebuggingMockitoDebuggerImpl : NSObject < OrgMockitoMockitoDebugger > {
}

- (NSString *)printInvocationsWithNSObjectArray:(IOSObjectArray *)mocks;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalDebuggingMockitoDebuggerImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalDebuggingMockitoDebuggerImpl)

#endif // _OrgMockitoInternalDebuggingMockitoDebuggerImpl_H_
