//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/CoderResult.java
//

#ifndef _JavaNioCharsetCoderResult_H_
#define _JavaNioCharsetCoderResult_H_

@class JavaUtilWeakHashMap;

#include "J2ObjC_header.h"

#define JavaNioCharsetCoderResult_TYPE_MALFORMED_INPUT 3
#define JavaNioCharsetCoderResult_TYPE_OVERFLOW 2
#define JavaNioCharsetCoderResult_TYPE_UNDERFLOW 1
#define JavaNioCharsetCoderResult_TYPE_UNMAPPABLE_CHAR 4

@interface JavaNioCharsetCoderResult : NSObject {
}

+ (JavaNioCharsetCoderResult *)malformedForLengthWithInt:(jint)length;

+ (JavaNioCharsetCoderResult *)unmappableForLengthWithInt:(jint)length;

- (jboolean)isUnderflow;

- (jboolean)isError;

- (jboolean)isMalformed;

- (jboolean)isOverflow;

- (jboolean)isUnmappable;

- (jint)length;

- (void)throwException;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL JavaNioCharsetCoderResult_initialized;
J2OBJC_STATIC_INIT(JavaNioCharsetCoderResult)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_malformedForLengthWithInt_(jint length);

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_unmappableForLengthWithInt_(jint length);

J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, TYPE_UNDERFLOW, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, TYPE_OVERFLOW, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, TYPE_MALFORMED_INPUT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, TYPE_UNMAPPABLE_CHAR, jint)

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_UNDERFLOW__;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, UNDERFLOW__, JavaNioCharsetCoderResult *)

FOUNDATION_EXPORT JavaNioCharsetCoderResult *JavaNioCharsetCoderResult_OVERFLOW__;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, OVERFLOW__, JavaNioCharsetCoderResult *)

FOUNDATION_EXPORT JavaUtilWeakHashMap *JavaNioCharsetCoderResult__malformedErrors_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, _malformedErrors_, JavaUtilWeakHashMap *)
J2OBJC_STATIC_FIELD_SETTER(JavaNioCharsetCoderResult, _malformedErrors_, JavaUtilWeakHashMap *)

FOUNDATION_EXPORT JavaUtilWeakHashMap *JavaNioCharsetCoderResult__unmappableErrors_;
J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetCoderResult, _unmappableErrors_, JavaUtilWeakHashMap *)
J2OBJC_STATIC_FIELD_SETTER(JavaNioCharsetCoderResult, _unmappableErrors_, JavaUtilWeakHashMap *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCoderResult)

#endif // _JavaNioCharsetCoderResult_H_
