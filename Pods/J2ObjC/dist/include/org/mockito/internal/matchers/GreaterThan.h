//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/GreaterThan.java
//

#ifndef _OrgMockitoInternalMatchersGreaterThan_H_
#define _OrgMockitoInternalMatchersGreaterThan_H_

@protocol JavaLangComparable;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/internal/matchers/CompareTo.h"

#define OrgMockitoInternalMatchersGreaterThan_serialVersionUID 7446529803235604408LL

@interface OrgMockitoInternalMatchersGreaterThan : OrgMockitoInternalMatchersCompareTo < JavaIoSerializable > {
}

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersGreaterThan)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersGreaterThan, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersGreaterThan)

#endif // _OrgMockitoInternalMatchersGreaterThan_H_