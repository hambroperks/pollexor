//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Scanner.java
//

#ifndef _JavaUtilScanner_H_
#define _JavaUtilScanner_H_

@class IOSClass;
@class JavaIoFile;
@class JavaIoIOException;
@class JavaIoInputStream;
@class JavaLangStringBuilder;
@class JavaMathBigDecimal;
@class JavaMathBigInteger;
@class JavaNioCharBuffer;
@class JavaTextDecimalFormat;
@class JavaUtilLocale;
@class JavaUtilRegexMatcher;
@class JavaUtilRegexPattern;
@protocol JavaLangReadable;
@protocol JavaNioChannelsReadableByteChannel;
@protocol JavaUtilRegexMatchResult;

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"
#include "java/util/Iterator.h"

#define JavaUtilScanner_DEFAULT_RADIX 10

@interface JavaUtilScanner : NSObject < JavaIoCloseable, JavaUtilIterator > {
}

- (instancetype)initWithJavaIoFile:(JavaIoFile *)src;

- (instancetype)initWithJavaIoFile:(JavaIoFile *)src
                      withNSString:(NSString *)charsetName;

- (instancetype)initWithNSString:(NSString *)src;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)src;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)src
                             withNSString:(NSString *)charsetName;

- (instancetype)initWithJavaLangReadable:(id<JavaLangReadable>)src;

- (instancetype)initWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src;

- (instancetype)initWithJavaNioChannelsReadableByteChannel:(id<JavaNioChannelsReadableByteChannel>)src
                                              withNSString:(NSString *)charsetName;

- (void)close;

- (JavaUtilRegexPattern *)delimiter;

- (NSString *)findInLineWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (NSString *)findInLineWithNSString:(NSString *)pattern;

- (NSString *)findWithinHorizonWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern
                                                withInt:(jint)horizon;

- (NSString *)findWithinHorizonWithNSString:(NSString *)pattern
                                    withInt:(jint)horizon;

- (jboolean)hasNext;

- (jboolean)hasNextWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (jboolean)hasNextWithNSString:(NSString *)pattern;

- (jboolean)hasNextBigDecimal;

- (jboolean)hasNextBigInteger;

- (jboolean)hasNextBigIntegerWithInt:(jint)radix;

- (jboolean)hasNextBoolean;

- (jboolean)hasNextByte;

- (jboolean)hasNextByteWithInt:(jint)radix;

- (jboolean)hasNextDouble;

- (jboolean)hasNextFloat;

- (jboolean)hasNextInt;

- (jboolean)hasNextIntWithInt:(jint)radix;

- (jboolean)hasNextLine;

- (jboolean)hasNextLong;

- (jboolean)hasNextLongWithInt:(jint)radix;

- (jboolean)hasNextShort;

- (jboolean)hasNextShortWithInt:(jint)radix;

- (JavaIoIOException *)ioException;

- (JavaUtilLocale *)locale;

- (id<JavaUtilRegexMatchResult>)match;

- (NSString *)next;

- (NSString *)nextWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (NSString *)nextWithNSString:(NSString *)pattern;

- (JavaMathBigDecimal *)nextBigDecimal;

- (JavaMathBigInteger *)nextBigInteger;

- (JavaMathBigInteger *)nextBigIntegerWithInt:(jint)radix;

- (jboolean)nextBoolean;

- (jbyte)nextByte;

- (jbyte)nextByteWithInt:(jint)radix;

- (jdouble)nextDouble;

- (jfloat)nextFloat;

- (jint)nextInt;

- (jint)nextIntWithInt:(jint)radix;

- (NSString *)nextLine;

- (jlong)nextLong;

- (jlong)nextLongWithInt:(jint)radix;

- (jshort)nextShort;

- (jshort)nextShortWithInt:(jint)radix;

- (jint)radix;

- (JavaUtilScanner *)skipWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (JavaUtilScanner *)skipWithNSString:(NSString *)pattern;

- (NSString *)description;

- (JavaUtilScanner *)useDelimiterWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

- (JavaUtilScanner *)useDelimiterWithNSString:(NSString *)pattern;

- (JavaUtilScanner *)useLocaleWithJavaUtilLocale:(JavaUtilLocale *)l;

- (JavaUtilScanner *)useRadixWithInt:(jint)radix;

- (void)remove;

- (JavaUtilScanner *)reset;

@end

FOUNDATION_EXPORT BOOL JavaUtilScanner_initialized;
J2OBJC_STATIC_INIT(JavaUtilScanner)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaUtilScanner_NL_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, NL_, NSString *)

FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilScanner_DEFAULT_DELIMITER_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, DEFAULT_DELIMITER_, JavaUtilRegexPattern *)

FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilScanner_BOOLEAN_PATTERN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, BOOLEAN_PATTERN_, JavaUtilRegexPattern *)

FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilScanner_LINE_TERMINATOR_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, LINE_TERMINATOR_, JavaUtilRegexPattern *)

FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilScanner_MULTI_LINE_TERMINATOR_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, MULTI_LINE_TERMINATOR_, JavaUtilRegexPattern *)

FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilScanner_LINE_PATTERN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, LINE_PATTERN_, JavaUtilRegexPattern *)

FOUNDATION_EXPORT JavaUtilRegexPattern *JavaUtilScanner_ANY_PATTERN_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, ANY_PATTERN_, JavaUtilRegexPattern *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilScanner, DEFAULT_RADIX, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilScanner)

#endif // _JavaUtilScanner_H_
