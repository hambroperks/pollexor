//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/finder/AllInvocationsFinder.java
//

#ifndef _OrgMockitoInternalInvocationFinderAllInvocationsFinder_H_
#define _OrgMockitoInternalInvocationFinderAllInvocationsFinder_H_

@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"

@interface OrgMockitoInternalInvocationFinderAllInvocationsFinder : NSObject {
}

- (id<JavaUtilList>)findWithJavaUtilList:(id<JavaUtilList>)mocks;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationFinderAllInvocationsFinder)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationFinderAllInvocationsFinder)

@interface OrgMockitoInternalInvocationFinderAllInvocationsFinder_SequenceNumberComparator : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(id<OrgMockitoInvocationInvocation>)o1
               withId:(id<OrgMockitoInvocationInvocation>)o2;

- (instancetype)initWithOrgMockitoInternalInvocationFinderAllInvocationsFinder:(OrgMockitoInternalInvocationFinderAllInvocationsFinder *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationFinderAllInvocationsFinder_SequenceNumberComparator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationFinderAllInvocationsFinder_SequenceNumberComparator)

#endif // _OrgMockitoInternalInvocationFinderAllInvocationsFinder_H_
