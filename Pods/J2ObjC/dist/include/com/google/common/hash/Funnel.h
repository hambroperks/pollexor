//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/hash/Funnel.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonHashFunnel_RESTRICT
#define ComGoogleCommonHashFunnel_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonHashFunnel_RESTRICT
#if !defined (_ComGoogleCommonHashFunnel_) && (ComGoogleCommonHashFunnel_INCLUDE_ALL || ComGoogleCommonHashFunnel_INCLUDE)
#define _ComGoogleCommonHashFunnel_

@protocol ComGoogleCommonHashPrimitiveSink;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@protocol ComGoogleCommonHashFunnel < JavaIoSerializable, NSObject, JavaObject >
- (void)funnelWithId:(id)from
withComGoogleCommonHashPrimitiveSink:(id<ComGoogleCommonHashPrimitiveSink>)into;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashFunnel)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashFunnel)