//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/RemovalListener.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCacheRemovalListener_RESTRICT
#define ComGoogleCommonCacheRemovalListener_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheRemovalListener_RESTRICT
#if !defined (_ComGoogleCommonCacheRemovalListener_) && (ComGoogleCommonCacheRemovalListener_INCLUDE_ALL || ComGoogleCommonCacheRemovalListener_INCLUDE)
#define _ComGoogleCommonCacheRemovalListener_

@class ComGoogleCommonCacheRemovalNotification;


@protocol ComGoogleCommonCacheRemovalListener < NSObject, JavaObject >

- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheRemovalListener)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheRemovalListener)