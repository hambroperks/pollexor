//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/Matchers.java
//

#ifndef _OrgMockitoMatchers_H_
#define _OrgMockitoMatchers_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgMockitoInternalProgressHandyReturnValues;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;
@protocol OrgHamcrestMatcher;
@protocol OrgMockitoInternalProgressMockingProgress;

#include "J2ObjC_header.h"

@interface OrgMockitoMatchers : NSObject {
}

+ (jboolean)anyBoolean;

+ (jbyte)anyByte;

+ (jchar)anyChar;

+ (jint)anyInt;

+ (jlong)anyLong;

+ (jfloat)anyFloat;

+ (jdouble)anyDouble;

+ (jshort)anyShort;

+ (id)anyObject;

+ (id)anyVararg;

+ (id)anyWithIOSClass:(IOSClass *)clazz;

+ (id)any;

+ (NSString *)anyString;

+ (id<JavaUtilList>)anyList;

+ (id<JavaUtilList>)anyListOfWithIOSClass:(IOSClass *)clazz;

+ (id<JavaUtilSet>)anySet;

+ (id<JavaUtilSet>)anySetOfWithIOSClass:(IOSClass *)clazz;

+ (id<JavaUtilMap>)anyMap;

+ (id<JavaUtilMap>)anyMapOfWithIOSClass:(IOSClass *)keyClazz
                           withIOSClass:(IOSClass *)valueClazz;

+ (id<JavaUtilCollection>)anyCollection;

+ (id<JavaUtilCollection>)anyCollectionOfWithIOSClass:(IOSClass *)clazz;

+ (id)isAWithIOSClass:(IOSClass *)clazz;

+ (jboolean)eqWithBoolean:(jboolean)value;

+ (jbyte)eqWithByte:(jbyte)value;

+ (jchar)eqWithChar:(jchar)value;

+ (jdouble)eqWithDouble:(jdouble)value;

+ (jfloat)eqWithFloat:(jfloat)value;

+ (jint)eqWithInt:(jint)value;

+ (jlong)eqWithLong:(jlong)value;

+ (jshort)eqWithShort:(jshort)value;

+ (id)eqWithId:(id)value;

+ (id)refEqWithId:(id)value
withNSStringArray:(IOSObjectArray *)excludeFields;

+ (id)sameWithId:(id)value;

+ (id)isNull;

+ (id)isNullWithIOSClass:(IOSClass *)clazz;

+ (id)notNull;

+ (id)notNullWithIOSClass:(IOSClass *)clazz;

+ (id)isNotNull;

+ (id)isNotNullWithIOSClass:(IOSClass *)clazz;

+ (NSString *)containsWithNSString:(NSString *)substring;

+ (NSString *)matchesWithNSString:(NSString *)regex;

+ (NSString *)endsWithWithNSString:(NSString *)suffix;

+ (NSString *)startsWithWithNSString:(NSString *)prefix;

+ (id)argThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jchar)charThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jboolean)booleanThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jbyte)byteThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jshort)shortThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jint)intThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jlong)longThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jfloat)floatThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

+ (jdouble)doubleThatWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL OrgMockitoMatchers_initialized;
J2OBJC_STATIC_INIT(OrgMockitoMatchers)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jboolean OrgMockitoMatchers_anyBoolean();

FOUNDATION_EXPORT jbyte OrgMockitoMatchers_anyByte();

FOUNDATION_EXPORT jchar OrgMockitoMatchers_anyChar();

FOUNDATION_EXPORT jint OrgMockitoMatchers_anyInt();

FOUNDATION_EXPORT jlong OrgMockitoMatchers_anyLong();

FOUNDATION_EXPORT jfloat OrgMockitoMatchers_anyFloat();

FOUNDATION_EXPORT jdouble OrgMockitoMatchers_anyDouble();

FOUNDATION_EXPORT jshort OrgMockitoMatchers_anyShort();

FOUNDATION_EXPORT id OrgMockitoMatchers_anyObject();

FOUNDATION_EXPORT id OrgMockitoMatchers_anyVararg();

FOUNDATION_EXPORT id OrgMockitoMatchers_anyWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_any();

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_anyString();

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoMatchers_anyList();

FOUNDATION_EXPORT id<JavaUtilList> OrgMockitoMatchers_anyListOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoMatchers_anySet();

FOUNDATION_EXPORT id<JavaUtilSet> OrgMockitoMatchers_anySetOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoMatchers_anyMap();

FOUNDATION_EXPORT id<JavaUtilMap> OrgMockitoMatchers_anyMapOfWithIOSClass_withIOSClass_(IOSClass *keyClazz, IOSClass *valueClazz);

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoMatchers_anyCollection();

FOUNDATION_EXPORT id<JavaUtilCollection> OrgMockitoMatchers_anyCollectionOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_isAWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT jboolean OrgMockitoMatchers_eqWithBoolean_(jboolean value);

FOUNDATION_EXPORT jbyte OrgMockitoMatchers_eqWithByte_(jbyte value);

FOUNDATION_EXPORT jchar OrgMockitoMatchers_eqWithChar_(jchar value);

FOUNDATION_EXPORT jdouble OrgMockitoMatchers_eqWithDouble_(jdouble value);

FOUNDATION_EXPORT jfloat OrgMockitoMatchers_eqWithFloat_(jfloat value);

FOUNDATION_EXPORT jint OrgMockitoMatchers_eqWithInt_(jint value);

FOUNDATION_EXPORT jlong OrgMockitoMatchers_eqWithLong_(jlong value);

FOUNDATION_EXPORT jshort OrgMockitoMatchers_eqWithShort_(jshort value);

FOUNDATION_EXPORT id OrgMockitoMatchers_eqWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoMatchers_refEqWithId_withNSStringArray_(id value, IOSObjectArray *excludeFields);

FOUNDATION_EXPORT id OrgMockitoMatchers_sameWithId_(id value);

FOUNDATION_EXPORT id OrgMockitoMatchers_isNull();

FOUNDATION_EXPORT id OrgMockitoMatchers_isNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_notNull();

FOUNDATION_EXPORT id OrgMockitoMatchers_notNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id OrgMockitoMatchers_isNotNull();

FOUNDATION_EXPORT id OrgMockitoMatchers_isNotNullWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_containsWithNSString_(NSString *substring);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_matchesWithNSString_(NSString *regex);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_endsWithWithNSString_(NSString *suffix);

FOUNDATION_EXPORT NSString *OrgMockitoMatchers_startsWithWithNSString_(NSString *prefix);

FOUNDATION_EXPORT id OrgMockitoMatchers_argThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jchar OrgMockitoMatchers_charThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jboolean OrgMockitoMatchers_booleanThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jbyte OrgMockitoMatchers_byteThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jshort OrgMockitoMatchers_shortThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jint OrgMockitoMatchers_intThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jlong OrgMockitoMatchers_longThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jfloat OrgMockitoMatchers_floatThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT jdouble OrgMockitoMatchers_doubleThatWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT id<OrgMockitoInternalProgressMockingProgress> OrgMockitoMatchers_mockingProgress_;
J2OBJC_STATIC_FIELD_GETTER(OrgMockitoMatchers, mockingProgress_, id<OrgMockitoInternalProgressMockingProgress>)
J2OBJC_STATIC_FIELD_SETTER(OrgMockitoMatchers, mockingProgress_, id<OrgMockitoInternalProgressMockingProgress>)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMatchers)

#endif // _OrgMockitoMatchers_H_
