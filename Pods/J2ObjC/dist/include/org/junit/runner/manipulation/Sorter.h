//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/manipulation/Sorter.java
//

#ifndef _OrgJunitRunnerManipulationSorter_H_
#define _OrgJunitRunnerManipulationSorter_H_

@class OrgJunitRunnerDescription;

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"

@interface OrgJunitRunnerManipulationSorter : NSObject < JavaUtilComparator > {
}

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (void)applyWithId:(id)object;

- (jint)compareWithId:(OrgJunitRunnerDescription *)o1
               withId:(OrgJunitRunnerDescription *)o2;

@end

FOUNDATION_EXPORT BOOL OrgJunitRunnerManipulationSorter_initialized;
J2OBJC_STATIC_INIT(OrgJunitRunnerManipulationSorter)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT OrgJunitRunnerManipulationSorter *OrgJunitRunnerManipulationSorter_NULL__;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerManipulationSorter, NULL__, OrgJunitRunnerManipulationSorter *)
J2OBJC_STATIC_FIELD_SETTER(OrgJunitRunnerManipulationSorter, NULL__, OrgJunitRunnerManipulationSorter *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationSorter)

@interface OrgJunitRunnerManipulationSorter_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(OrgJunitRunnerDescription *)o1
               withId:(OrgJunitRunnerDescription *)o2;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerManipulationSorter_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationSorter_$1)

#endif // _OrgJunitRunnerManipulationSorter_H_
