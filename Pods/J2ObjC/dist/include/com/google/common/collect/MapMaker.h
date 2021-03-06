//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/MapMaker.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectMapMaker_RESTRICT
#define ComGoogleCommonCollectMapMaker_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectMapMaker_RESTRICT
#if ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_INCLUDE
#define ComGoogleCommonCollectMapMaker_NullConcurrentMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$5_INCLUDE
#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_INCLUDE 1
#endif
#if ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$4_INCLUDE
#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_INCLUDE 1
#endif
#if ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$3_INCLUDE
#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_INCLUDE 1
#endif
#if ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$2_INCLUDE
#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_INCLUDE 1
#endif
#if ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$1_INCLUDE
#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectMapMaker_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonBaseTicker;
@class ComGoogleCommonCollectMapMakerInternalMap;
@class ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum;
@class ComGoogleCommonCollectMapMaker_RemovalCauseEnum;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilConcurrentConcurrentMap;

#define ComGoogleCommonCollectGenericMapMaker_RESTRICT 1
#define ComGoogleCommonCollectGenericMapMaker_INCLUDE 1
#include "com/google/common/collect/GenericMapMaker.h"


#define ComGoogleCommonCollectMapMaker_DEFAULT_CONCURRENCY_LEVEL 4
#define ComGoogleCommonCollectMapMaker_DEFAULT_EXPIRATION_NANOS 0
#define ComGoogleCommonCollectMapMaker_DEFAULT_INITIAL_CAPACITY 16
#define ComGoogleCommonCollectMapMaker_UNSET_INT -1

@interface ComGoogleCommonCollectMapMaker : ComGoogleCommonCollectGenericMapMaker {
 @public
  jboolean useCustomMap_;
  jint initialCapacity__;
  jint concurrencyLevel__;
  jint maximumSize__;
  ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *keyStrength_;
  ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *valueStrength_;
  jlong expireAfterWriteNanos_;
  jlong expireAfterAccessNanos_;
  ComGoogleCommonCollectMapMaker_RemovalCauseEnum *nullRemovalCause_;
  ComGoogleCommonBaseEquivalence *keyEquivalence__;
  ComGoogleCommonBaseTicker *ticker_;
}

- (instancetype)init;

- (ComGoogleCommonCollectMapMaker *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCollectMapMaker *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (jint)getInitialCapacity;

- (ComGoogleCommonCollectMapMaker *)maximumSizeWithInt:(jint)size;

- (ComGoogleCommonCollectMapMaker *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (jint)getConcurrencyLevel;

- (ComGoogleCommonCollectMapMaker *)weakKeys;

- (ComGoogleCommonCollectMapMaker *)setKeyStrengthWithComGoogleCommonCollectMapMakerInternalMap_StrengthEnum:(ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)strength;

- (ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)getKeyStrength;

- (ComGoogleCommonCollectMapMaker *)weakValues;

- (ComGoogleCommonCollectMapMaker *)softValues;

- (ComGoogleCommonCollectMapMaker *)setValueStrengthWithComGoogleCommonCollectMapMakerInternalMap_StrengthEnum:(ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)strength;

- (ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)getValueStrength;

- (ComGoogleCommonCollectMapMaker *)expireAfterWriteWithLong:(jlong)duration
                          withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jlong)getExpireAfterWriteNanos;

- (ComGoogleCommonCollectMapMaker *)expireAfterAccessWithLong:(jlong)duration
                           withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jlong)getExpireAfterAccessNanos;

- (ComGoogleCommonBaseTicker *)getTicker;

- (ComGoogleCommonCollectGenericMapMaker *)removalListenerWithComGoogleCommonCollectMapMaker_RemovalListener:(id<ComGoogleCommonCollectMapMaker_RemovalListener>)listener;

- (id<JavaUtilConcurrentConcurrentMap>)makeMap;

- (ComGoogleCommonCollectMapMakerInternalMap *)makeCustomMap;

- (id<JavaUtilConcurrentConcurrentMap>)makeComputingMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyStrength_, ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, valueStrength_, ComGoogleCommonCollectMapMakerInternalMap_StrengthEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, nullRemovalCause_, ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, keyEquivalence__, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker, ticker_, ComGoogleCommonBaseTicker *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker, DEFAULT_INITIAL_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker, DEFAULT_CONCURRENCY_LEVEL, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker, DEFAULT_EXPIRATION_NANOS, jint)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker, UNSET_INT, jint)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalListener_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalListener_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalListener_

@class ComGoogleCommonCollectMapMaker_RemovalNotification;


@protocol ComGoogleCommonCollectMapMaker_RemovalListener < NSObject, JavaObject >

- (void)onRemovalWithComGoogleCommonCollectMapMaker_RemovalNotification:(ComGoogleCommonCollectMapMaker_RemovalNotification *)notification;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalListener)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalListener)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalNotification_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalNotification_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalNotification_

@class ComGoogleCommonCollectMapMaker_RemovalCauseEnum;

#define ComGoogleCommonCollectImmutableEntry_RESTRICT 1
#define ComGoogleCommonCollectImmutableEntry_INCLUDE 1
#include "com/google/common/collect/ImmutableEntry.h"


#define ComGoogleCommonCollectMapMaker_RemovalNotification_serialVersionUID 0LL

@interface ComGoogleCommonCollectMapMaker_RemovalNotification : ComGoogleCommonCollectImmutableEntry {
}

- (instancetype)initWithId:(id)key
                    withId:(id)value
withComGoogleCommonCollectMapMaker_RemovalCauseEnum:(ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)cause;

- (ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)getCause;

- (jboolean)wasEvicted;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalNotification)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker_RemovalNotification, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalNotification)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalCauseEnum_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalCauseEnum_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalCauseEnum_

#define JavaLangEnum_RESTRICT 1
#define JavaLangEnum_INCLUDE 1
#include "java/lang/Enum.h"


typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectMapMaker_RemovalCause) {
  ComGoogleCommonCollectMapMaker_RemovalCause_EXPLICIT = 0,
  ComGoogleCommonCollectMapMaker_RemovalCause_REPLACED = 1,
  ComGoogleCommonCollectMapMaker_RemovalCause_COLLECTED = 2,
  ComGoogleCommonCollectMapMaker_RemovalCause_EXPIRED = 3,
  ComGoogleCommonCollectMapMaker_RemovalCause_SIZE = 4,
};

@interface ComGoogleCommonCollectMapMaker_RemovalCauseEnum : JavaLangEnum < NSCopying > {
}

- (jboolean)wasEvicted;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values();

+ (ComGoogleCommonCollectMapMaker_RemovalCauseEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalCauseEnum *ComGoogleCommonCollectMapMaker_RemovalCauseEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectMapMaker_RemovalCauseEnum_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCauseEnum)

FOUNDATION_EXPORT ComGoogleCommonCollectMapMaker_RemovalCauseEnum *ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[];

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_EXPLICIT ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_EXPLICIT]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, EXPLICIT)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_REPLACED ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_REPLACED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, REPLACED)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_COLLECTED ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_COLLECTED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, COLLECTED)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_EXPIRED ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_EXPIRED]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, EXPIRED)

#define ComGoogleCommonCollectMapMaker_RemovalCauseEnum_SIZE ComGoogleCommonCollectMapMaker_RemovalCauseEnum_values_[ComGoogleCommonCollectMapMaker_RemovalCause_SIZE]
J2OBJC_ENUM_CONSTANT_GETTER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum, SIZE)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$1_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$1_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$1_


@interface ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$1 : ComGoogleCommonCollectMapMaker_RemovalCauseEnum {
}

- (jboolean)wasEvicted;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$1)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$2_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$2_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$2_


@interface ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$2 : ComGoogleCommonCollectMapMaker_RemovalCauseEnum {
}

- (jboolean)wasEvicted;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$2)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$3_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$3_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$3_


@interface ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$3 : ComGoogleCommonCollectMapMaker_RemovalCauseEnum {
}

- (jboolean)wasEvicted;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$3)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$3)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$4_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$4_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$4_


@interface ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$4 : ComGoogleCommonCollectMapMaker_RemovalCauseEnum {
}

- (jboolean)wasEvicted;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$4)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$4)
#if !defined (_ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$5_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$5_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$5_


@interface ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$5 : ComGoogleCommonCollectMapMaker_RemovalCauseEnum {
}

- (jboolean)wasEvicted;

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$5)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_RemovalCauseEnum_$5)
#if !defined (_ComGoogleCommonCollectMapMaker_NullConcurrentMap_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_NullConcurrentMap_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_NullConcurrentMap_

@class ComGoogleCommonCollectMapMaker;
@class ComGoogleCommonCollectMapMaker_RemovalCauseEnum;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilSet;

#define JavaUtilAbstractMap_RESTRICT 1
#define JavaUtilAbstractMap_INCLUDE 1
#include "java/util/AbstractMap.h"

#define JavaUtilConcurrentConcurrentMap_RESTRICT 1
#define JavaUtilConcurrentConcurrentMap_INCLUDE 1
#include "java/util/concurrent/ConcurrentMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectMapMaker_NullConcurrentMap_serialVersionUID 0LL

@interface ComGoogleCommonCollectMapMaker_NullConcurrentMap : JavaUtilAbstractMap < JavaUtilConcurrentConcurrentMap, JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)key;

- (void)notifyRemovalWithId:(id)key
                     withId:(id)value;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)putIfAbsentWithId:(id)key
                 withId:(id)value;

- (id)removeWithId:(id)key;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id)replaceWithId:(id)key
             withId:(id)value;

- (jboolean)replaceWithId:(id)key
                   withId:(id)oldValue
                   withId:(id)newValue;

- (id<JavaUtilSet>)entrySet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_NullConcurrentMap)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker_NullConcurrentMap, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_NullConcurrentMap)
#if !defined (_ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_

@class ComGoogleCommonCollectMapMaker;
@protocol ComGoogleCommonBaseFunction;


#define ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap_serialVersionUID 0LL

@interface ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap : ComGoogleCommonCollectMapMaker_NullConcurrentMap {
 @public
  id<ComGoogleCommonBaseFunction> computingFunction_;
}

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (id)getWithId:(id)k;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap, computingFunction_, id<ComGoogleCommonBaseFunction>)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_NullComputingConcurrentMap)
#if !defined (_ComGoogleCommonCollectMapMaker_ComputingMapAdapter_) && (ComGoogleCommonCollectMapMaker_INCLUDE_ALL || ComGoogleCommonCollectMapMaker_ComputingMapAdapter_INCLUDE)
#define _ComGoogleCommonCollectMapMaker_ComputingMapAdapter_

@class ComGoogleCommonCollectMapMaker;
@protocol ComGoogleCommonBaseFunction;

#define ComGoogleCommonCollectComputingConcurrentHashMap_RESTRICT 1
#define ComGoogleCommonCollectComputingConcurrentHashMap_INCLUDE 1
#include "com/google/common/collect/ComputingConcurrentHashMap.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectMapMaker_ComputingMapAdapter_serialVersionUID 0LL

@interface ComGoogleCommonCollectMapMaker_ComputingMapAdapter : ComGoogleCommonCollectComputingConcurrentHashMap < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonCollectMapMaker:(ComGoogleCommonCollectMapMaker *)mapMaker
                       withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (id)getWithId:(id)key;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMapMaker_ComputingMapAdapter)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectMapMaker_ComputingMapAdapter, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMapMaker_ComputingMapAdapter)
