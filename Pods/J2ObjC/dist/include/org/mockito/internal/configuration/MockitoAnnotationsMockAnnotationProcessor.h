//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/MockitoAnnotationsMockAnnotationProcessor.java
//

#ifndef _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_
#define _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_

@class JavaLangReflectField;
@protocol OrgMockitoMockitoAnnotations_Mock;

#include "J2ObjC_header.h"
#include "org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@interface OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor > {
}

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoMockitoAnnotations_Mock>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor)

#endif // _OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_H_
