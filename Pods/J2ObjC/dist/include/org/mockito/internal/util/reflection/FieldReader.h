//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/reflection/FieldReader.java
//

#ifndef _OrgMockitoInternalUtilReflectionFieldReader_H_
#define _OrgMockitoInternalUtilReflectionFieldReader_H_

@class JavaLangReflectField;
@class OrgMockitoInternalUtilReflectionAccessibilityChanger;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalUtilReflectionFieldReader : NSObject {
 @public
  id target_;
  JavaLangReflectField *field_;
  OrgMockitoInternalUtilReflectionAccessibilityChanger *changer_;
}

- (instancetype)initWithId:(id)target
  withJavaLangReflectField:(JavaLangReflectField *)field;

- (jboolean)isNull;

- (id)read;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldReader)

J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldReader, target_, id)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldReader, field_, JavaLangReflectField *)
J2OBJC_FIELD_SETTER(OrgMockitoInternalUtilReflectionFieldReader, changer_, OrgMockitoInternalUtilReflectionAccessibilityChanger *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldReader)

#endif // _OrgMockitoInternalUtilReflectionFieldReader_H_
