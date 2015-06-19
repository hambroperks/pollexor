//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/ArrayListMultimap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectArrayListMultimap_RESTRICT
#define ComGoogleCommonCollectArrayListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectArrayListMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectArrayListMultimap_) && (ComGoogleCommonCollectArrayListMultimap_INCLUDE_ALL || ComGoogleCommonCollectArrayListMultimap_INCLUDE)
#define _ComGoogleCommonCollectArrayListMultimap_

@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilList;

#define ComGoogleCommonCollectAbstractListMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractListMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractListMultimap.h"


#define ComGoogleCommonCollectArrayListMultimap_DEFAULT_VALUES_PER_KEY 3
#define ComGoogleCommonCollectArrayListMultimap_serialVersionUID 0LL

@interface ComGoogleCommonCollectArrayListMultimap : ComGoogleCommonCollectAbstractListMultimap {
 @public
  jint expectedValuesPerKey_;
}

+ (ComGoogleCommonCollectArrayListMultimap *)create;

+ (ComGoogleCommonCollectArrayListMultimap *)createWithInt:(jint)expectedKeys
                                                   withInt:(jint)expectedValuesPerKey;

+ (ComGoogleCommonCollectArrayListMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilList>)createCollection;

- (void)trimToSize;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectArrayListMultimap)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectArrayListMultimap *ComGoogleCommonCollectArrayListMultimap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectArrayListMultimap *ComGoogleCommonCollectArrayListMultimap_createWithInt_withInt_(jint expectedKeys, jint expectedValuesPerKey);

FOUNDATION_EXPORT ComGoogleCommonCollectArrayListMultimap *ComGoogleCommonCollectArrayListMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectArrayListMultimap, DEFAULT_VALUES_PER_KEY, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectArrayListMultimap, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectArrayListMultimap)
