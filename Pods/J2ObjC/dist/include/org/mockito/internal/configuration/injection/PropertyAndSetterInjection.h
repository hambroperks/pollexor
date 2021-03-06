//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/PropertyAndSetterInjection.java
//

#ifndef _OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_H_
#define _OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_H_

@class IOSClass;
@class JavaLangReflectField;
@class OrgMockitoInternalUtilReflectionFieldInitializationReport;
@protocol JavaUtilList;
@protocol JavaUtilSet;
@protocol OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter;

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"
#include "org/mockito/internal/configuration/injection/MockInjectionStrategy.h"
#include "org/mockito/internal/util/collections/ListUtil.h"

@interface OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy {
}

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)injectMocksField
                                              withId:(id)injectMocksFieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection)

@interface OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(JavaLangReflectField *)field1
               withId:(JavaLangReflectField *)field2;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_FieldTypeAndNameComparator)

@interface OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_$1 : NSObject < OrgMockitoInternalUtilCollectionsListUtil_Filter > {
}

- (jboolean)isOutWithId:(JavaLangReflectField *)object;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_$1)

#endif // _OrgMockitoInternalConfigurationInjectionPropertyAndSetterInjection_H_
