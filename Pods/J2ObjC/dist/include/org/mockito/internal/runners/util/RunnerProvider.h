//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/util/RunnerProvider.java
//

#ifndef _OrgMockitoInternalRunnersUtilRunnerProvider_H_
#define _OrgMockitoInternalRunnersUtilRunnerProvider_H_

@class IOSClass;
@protocol OrgMockitoInternalRunnersRunnerImpl;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalRunnersUtilRunnerProvider : NSObject {
}

- (jboolean)isJUnit45OrHigherAvailable;

- (id<OrgMockitoInternalRunnersRunnerImpl>)newInstanceWithNSString:(NSString *)runnerClassName
                                                      withIOSClass:(IOSClass *)constructorParam OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgMockitoInternalRunnersUtilRunnerProvider_initialized;
J2OBJC_STATIC_INIT(OrgMockitoInternalRunnersUtilRunnerProvider)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jboolean OrgMockitoInternalRunnersUtilRunnerProvider_hasJUnit45OrHigher_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalRunnersUtilRunnerProvider, hasJUnit45OrHigher_, jboolean)
J2OBJC_STATIC_FIELD_REF_GETTER(OrgMockitoInternalRunnersUtilRunnerProvider, hasJUnit45OrHigher_, jboolean)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersUtilRunnerProvider)

#endif // _OrgMockitoInternalRunnersUtilRunnerProvider_H_
