//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/NameBasedCandidateFilter.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_H_
#define _OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_H_

@class JavaLangReflectField;
@class OrgMockitoInternalUtilMockUtil;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@interface OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter > {
}

- (instancetype)initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter:(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)next;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter)

#endif // _OrgMockitoInternalConfigurationInjectionFilterNameBasedCandidateFilter_H_