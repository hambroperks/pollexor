//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/cache/CacheStats.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCacheCacheStats_RESTRICT
#define ComGoogleCommonCacheCacheStats_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCacheCacheStats_RESTRICT
#if !defined (_ComGoogleCommonCacheCacheStats_) && (ComGoogleCommonCacheCacheStats_INCLUDE_ALL || ComGoogleCommonCacheCacheStats_INCLUDE)
#define _ComGoogleCommonCacheCacheStats_


@interface ComGoogleCommonCacheCacheStats : NSObject {
}

- (instancetype)initWithLong:(jlong)hitCount
                    withLong:(jlong)missCount
                    withLong:(jlong)loadSuccessCount
                    withLong:(jlong)loadExceptionCount
                    withLong:(jlong)totalLoadTime
                    withLong:(jlong)evictionCount;

- (jlong)requestCount;

- (jlong)hitCount;

- (jdouble)hitRate;

- (jlong)missCount;

- (jdouble)missRate;

- (jlong)loadCount;

- (jlong)loadSuccessCount;

- (jlong)loadExceptionCount;

- (jdouble)loadExceptionRate;

- (jlong)totalLoadTime;

- (jdouble)averageLoadPenalty;

- (jlong)evictionCount;

- (ComGoogleCommonCacheCacheStats *)minusWithComGoogleCommonCacheCacheStats:(ComGoogleCommonCacheCacheStats *)other;

- (ComGoogleCommonCacheCacheStats *)plusWithComGoogleCommonCacheCacheStats:(ComGoogleCommonCacheCacheStats *)other;

- (NSUInteger)hash;

- (jboolean)isEqual:(id)object;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheCacheStats)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheStats)
