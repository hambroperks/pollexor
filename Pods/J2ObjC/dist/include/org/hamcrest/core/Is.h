//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/Is.java
//

#ifndef _OrgHamcrestCoreIs_H_
#define _OrgHamcrestCoreIs_H_

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

#include "J2ObjC_header.h"
#include "org/hamcrest/BaseMatcher.h"

@interface OrgHamcrestCoreIs : OrgHamcrestBaseMatcher {
}

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (jboolean)matchesWithId:(id)arg;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

+ (id<OrgHamcrestMatcher>)isWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (id<OrgHamcrestMatcher>)isWithId:(id)value;

+ (id<OrgHamcrestMatcher>)isWithIOSClass:(IOSClass *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIs)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithId_(id value);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIs_isWithIOSClass_(IOSClass *type);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIs)

#endif // _OrgHamcrestCoreIs_H_
