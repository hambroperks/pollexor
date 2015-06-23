//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/Thumbor.java
//

#ifndef _ComSquareupPollexorThumbor_H_
#define _ComSquareupPollexorThumbor_H_

#include "J2ObjC_header.h"

@class ComSquareupPollexorThumborUrlBuilder;

/**
 @brief Representation of a remote <a href="https://github.com/globocom/thumbor">thumbor</a> installation.
 */
@interface ComSquareupPollexorThumbor : NSObject

#pragma mark Public

/**
 @brief Begin building a url for this host with the specified image.
 */
- (ComSquareupPollexorThumborUrlBuilder *)buildImageWithNSString:(NSString *)image;

/**
 @brief Create a new instance for the specified host.
 */
+ (ComSquareupPollexorThumbor *)createWithNSString:(NSString *)host;

/**
 @brief Create a new instance for the specified host and encryption key.
 */
+ (ComSquareupPollexorThumbor *)createWithNSString:(NSString *)host
                                      withNSString:(NSString *)key;

- (NSString *)getHost;

- (NSString *)getKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ComSquareupPollexorThumbor)

FOUNDATION_EXPORT ComSquareupPollexorThumbor *ComSquareupPollexorThumbor_createWithNSString_(NSString *host);

FOUNDATION_EXPORT ComSquareupPollexorThumbor *ComSquareupPollexorThumbor_createWithNSString_withNSString_(NSString *host, NSString *key);

J2OBJC_TYPE_LITERAL_HEADER(ComSquareupPollexorThumbor)

#endif // _ComSquareupPollexorThumbor_H_
