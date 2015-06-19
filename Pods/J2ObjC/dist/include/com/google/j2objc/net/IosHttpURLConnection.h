//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/net/IosHttpURLConnection.java
//

#ifndef _ComGoogleJ2objcNetIosHttpURLConnection_H_
#define _ComGoogleJ2objcNetIosHttpURLConnection_H_

@class JavaIoIOException;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetURL;
@protocol JavaUtilList;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"
#include "java/net/HttpURLConnection.h"
#include "java/util/Map.h"

@interface ComGoogleJ2objcNetIosHttpURLConnection : JavaNetHttpURLConnection {
}

- (instancetype)initWithJavaNetURL:(JavaNetURL *)url;

- (void)disconnect;

- (jboolean)usingProxy;

- (JavaIoInputStream *)getInputStream;

- (void)connect;

- (id<JavaUtilMap>)getHeaderFields;

- (NSString *)getHeaderFieldWithInt:(jint)pos;

- (NSString *)getHeaderFieldWithNSString:(NSString *)key;

- (jlong)getHeaderFieldDateWithNSString:(NSString *)field
                               withLong:(jlong)defaultValue;

- (NSString *)getHeaderFieldKeyWithInt:(jint)posn;

- (jint)getHeaderFieldIntWithNSString:(NSString *)field
                              withInt:(jint)defaultValue;

- (jlong)getHeaderFieldLongWithNSString:(NSString *)field
                               withLong:(jlong)defaultValue;

- (id<JavaUtilMap>)getRequestProperties;

- (void)setRequestPropertyWithNSString:(NSString *)field
                          withNSString:(NSString *)newValue;

- (void)addRequestPropertyWithNSString:(NSString *)field
                          withNSString:(NSString *)newValue;

- (NSString *)getRequestPropertyWithNSString:(NSString *)field;

- (JavaIoInputStream *)getErrorStream;

- (jlong)getIfModifiedSince;

- (void)setIfModifiedSinceWithLong:(jlong)newValue;

- (JavaIoOutputStream *)getOutputStream;

- (jint)getResponseCode;


@end

FOUNDATION_EXPORT BOOL ComGoogleJ2objcNetIosHttpURLConnection_initialized;
J2OBJC_STATIC_INIT(ComGoogleJ2objcNetIosHttpURLConnection)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *ComGoogleJ2objcNetIosHttpURLConnection_HTTP_DATE_FORMAT_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleJ2objcNetIosHttpURLConnection, HTTP_DATE_FORMAT_, NSString *)

FOUNDATION_EXPORT id<JavaUtilMap> ComGoogleJ2objcNetIosHttpURLConnection_RESPONSE_CODES_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleJ2objcNetIosHttpURLConnection, RESPONSE_CODES_, id<JavaUtilMap>)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcNetIosHttpURLConnection)

@interface ComGoogleJ2objcNetIosHttpURLConnection_HeaderEntry : NSObject < JavaUtilMap_Entry > {
}

- (instancetype)initWithNSString:(NSString *)k
                    withNSString:(NSString *)v;

- (NSString *)getKey;

- (NSString *)getValue;

- (NSString *)setValueWithId:(NSString *)object;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcNetIosHttpURLConnection_HeaderEntry)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcNetIosHttpURLConnection_HeaderEntry)

#endif // _ComGoogleJ2objcNetIosHttpURLConnection_H_
