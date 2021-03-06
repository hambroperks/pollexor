//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/MockCreationValidator.java
//

#ifndef _OrgMockitoInternalUtilMockCreationValidator_H_
#define _OrgMockitoInternalUtilMockCreationValidator_H_

@class IOSClass;
@protocol JavaUtilCollection;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalUtilMockCreationValidator : NSObject {
}

- (jboolean)isTypeMockableWithIOSClass:(IOSClass *)clz;

- (void)validateTypeWithIOSClass:(IOSClass *)classToMock;

- (void)validateExtraInterfacesWithIOSClass:(IOSClass *)classToMock
                     withJavaUtilCollection:(id<JavaUtilCollection>)extraInterfaces;

- (void)validateMockedTypeWithIOSClass:(IOSClass *)classToMock
                                withId:(id)spiedInstance;

- (void)validateDelegatedInstanceWithIOSClass:(IOSClass *)classToMock
                                       withId:(id)delegatedInstance;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilMockCreationValidator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilMockCreationValidator)

#endif // _OrgMockitoInternalUtilMockCreationValidator_H_
