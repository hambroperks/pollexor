//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/LessOrEqual.java
//

#ifndef _OrgMockitoInternalMatchersLessOrEqual_H_
#define _OrgMockitoInternalMatchersLessOrEqual_H_

@protocol JavaLangComparable;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/matchers/CompareTo.h"

#define OrgMockitoInternalMatchersLessOrEqual_serialVersionUID -6648773374429103565LL

@interface OrgMockitoInternalMatchersLessOrEqual : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable > {
}

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersLessOrEqual)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersLessOrEqual, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersLessOrEqual)

#endif // _OrgMockitoInternalMatchersLessOrEqual_H_
