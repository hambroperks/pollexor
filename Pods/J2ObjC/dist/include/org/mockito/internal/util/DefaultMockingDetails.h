//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/DefaultMockingDetails.java
//

#ifndef _OrgMockitoInternalUtilDefaultMockingDetails_H_
#define _OrgMockitoInternalUtilDefaultMockingDetails_H_

@class OrgMockitoInternalUtilMockUtil;

#include "J2ObjC_header.h"
#include "org/mockito/MockingDetails.h"

@interface OrgMockitoInternalUtilDefaultMockingDetails : NSObject < OrgMockitoMockingDetails > {
}

- (instancetype)initWithId:(id)toInspect
withOrgMockitoInternalUtilMockUtil:(OrgMockitoInternalUtilMockUtil *)delegate;

- (jboolean)isMock;

- (jboolean)isSpy;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilDefaultMockingDetails)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilDefaultMockingDetails)

#endif // _OrgMockitoInternalUtilDefaultMockingDetails_H_
