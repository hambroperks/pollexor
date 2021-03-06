//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/guava/sources/com/google/common/collect/Tables.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectTables_RESTRICT
#define ComGoogleCommonCollectTables_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTables_RESTRICT
#if ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_INCLUDE
#define ComGoogleCommonCollectTables_UnmodifiableTable_INCLUDE 1
#endif
#if ComGoogleCommonCollectTables_ImmutableCell_INCLUDE
#define ComGoogleCommonCollectTables_AbstractCell_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectTables_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_INCLUDE)
#define _ComGoogleCommonCollectTables_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCollectRowSortedTable;
@protocol ComGoogleCommonCollectTable;
@protocol ComGoogleCommonCollectTable_Cell;
@protocol JavaUtilMap;


@interface ComGoogleCommonCollectTables : NSObject {
}

+ (id<ComGoogleCommonCollectTable_Cell>)immutableCellWithId:(id)rowKey
                                                     withId:(id)columnKey
                                                     withId:(id)value;

+ (id<ComGoogleCommonCollectTable>)transposeWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

+ (id<ComGoogleCommonCollectTable>)newCustomTableWithJavaUtilMap:(id<JavaUtilMap>)backingMap
                                 withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectTable>)transformValuesWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)fromTable
                                                  withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonCollectTable>)unmodifiableTableWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

+ (id<ComGoogleCommonCollectRowSortedTable>)unmodifiableRowSortedTableWithComGoogleCommonCollectRowSortedTable:(id<ComGoogleCommonCollectRowSortedTable>)table;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectTables_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectTables)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable_Cell> ComGoogleCommonCollectTables_immutableCellWithId_withId_withId_(id rowKey, id columnKey, id value);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_transposeWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_newCustomTableWithJavaUtilMap_withComGoogleCommonBaseSupplier_(id<JavaUtilMap> backingMap, id<ComGoogleCommonBaseSupplier> factory);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_transformValuesWithComGoogleCommonCollectTable_withComGoogleCommonBaseFunction_(id<ComGoogleCommonCollectTable> fromTable, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonCollectTable> ComGoogleCommonCollectTables_unmodifiableTableWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonCollectRowSortedTable> ComGoogleCommonCollectTables_unmodifiableRowSortedTableWithComGoogleCommonCollectRowSortedTable_(id<ComGoogleCommonCollectRowSortedTable> table);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonCollectTables_UNMODIFIABLE_WRAPPER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTables, UNMODIFIABLE_WRAPPER_, id<ComGoogleCommonBaseFunction>)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables)
#if !defined (_ComGoogleCommonCollectTables_AbstractCell_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_AbstractCell_INCLUDE)
#define _ComGoogleCommonCollectTables_AbstractCell_

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_Cell_INCLUDE 1
#include "com/google/common/collect/Table.h"


@interface ComGoogleCommonCollectTables_AbstractCell : NSObject < ComGoogleCommonCollectTable_Cell > {
}

- (instancetype)init;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_AbstractCell)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_AbstractCell)
#if !defined (_ComGoogleCommonCollectTables_ImmutableCell_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_ImmutableCell_INCLUDE)
#define _ComGoogleCommonCollectTables_ImmutableCell_

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectTables_ImmutableCell_serialVersionUID 0LL

@interface ComGoogleCommonCollectTables_ImmutableCell : ComGoogleCommonCollectTables_AbstractCell < JavaIoSerializable > {
}

- (instancetype)initWithId:(id)rowKey
                    withId:(id)columnKey
                    withId:(id)value;

- (id)getRowKey;

- (id)getColumnKey;

- (id)getValue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_ImmutableCell)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTables_ImmutableCell, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_ImmutableCell)
#if !defined (_ComGoogleCommonCollectTables_TransposeTable_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransposeTable_INCLUDE)
#define _ComGoogleCommonCollectTables_TransposeTable_

@class ComGoogleCommonCollectTables_TransposeTable_CellSet;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"


@interface ComGoogleCommonCollectTables_TransposeTable : NSObject < ComGoogleCommonCollectTable > {
 @public
  id<ComGoogleCommonCollectTable> original_;
  ComGoogleCommonCollectTables_TransposeTable_CellSet *cellSet__;
}

- (instancetype)initWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)original;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (jint)size;

- (id<JavaUtilCollection>)values;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

- (id<JavaUtilSet>)cellSet;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectTables_TransposeTable_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectTables_TransposeTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransposeTable, original_, id<ComGoogleCommonCollectTable>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransposeTable, cellSet__, ComGoogleCommonCollectTables_TransposeTable_CellSet *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonCollectTables_TransposeTable_TRANSPOSE_CELL_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTables_TransposeTable, TRANSPOSE_CELL_, id<ComGoogleCommonBaseFunction>)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransposeTable)
#if !defined (_ComGoogleCommonCollectTables_TransposeTable_CellSet_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransposeTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectTables_TransposeTable_CellSet_

@class ComGoogleCommonCollectTables_TransposeTable;

#define ComGoogleCommonCollectCollections2_RESTRICT 1
#define ComGoogleCommonCollectCollections2_TransformedCollection_INCLUDE 1
#include "com/google/common/collect/Collections2.h"

#define JavaUtilSet_RESTRICT 1
#define JavaUtilSet_INCLUDE 1
#include "java/util/Set.h"


@interface ComGoogleCommonCollectTables_TransposeTable_CellSet : ComGoogleCommonCollectCollections2_TransformedCollection < JavaUtilSet > {
}

- (instancetype)initWithComGoogleCommonCollectTables_TransposeTable:(ComGoogleCommonCollectTables_TransposeTable *)outer$;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (jboolean)containsWithId:(id)obj;

- (jboolean)removeWithId:(id)obj;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_TransposeTable_CellSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransposeTable_CellSet)
#if !defined (_ComGoogleCommonCollectTables_TransposeTable_$1_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransposeTable_$1_INCLUDE)
#define _ComGoogleCommonCollectTables_TransposeTable_$1_

@protocol ComGoogleCommonCollectTable_Cell;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonCollectTables_TransposeTable_$1 : NSObject < ComGoogleCommonBaseFunction > {
}

- (id<ComGoogleCommonCollectTable_Cell>)applyWithId:(id<ComGoogleCommonCollectTable_Cell>)cell;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_TransposeTable_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransposeTable_$1)
#if !defined (_ComGoogleCommonCollectTables_TransformedTable_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransformedTable_INCLUDE)
#define _ComGoogleCommonCollectTables_TransformedTable_

@class ComGoogleCommonCollectTables_TransformedTable_CellSet;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectTable_RESTRICT 1
#define ComGoogleCommonCollectTable_INCLUDE 1
#include "com/google/common/collect/Table.h"


@interface ComGoogleCommonCollectTables_TransformedTable : NSObject < ComGoogleCommonCollectTable > {
 @public
  id<ComGoogleCommonCollectTable> fromTable_;
  id<ComGoogleCommonBaseFunction> function_;
  ComGoogleCommonCollectTables_TransformedTable_CellSet *cellSet__;
  id<JavaUtilCollection> values__;
  id<JavaUtilMap> rowMap__;
  id<JavaUtilMap> columnMap__;
}

- (instancetype)initWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)fromTable
                    withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (jint)size;

- (void)clear;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<ComGoogleCommonBaseFunction>)cellFunction;

- (id<JavaUtilSet>)cellSet;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilMap>)createRowMap;

- (id<JavaUtilMap>)rowMap;

- (id<JavaUtilMap>)createColumnMap;

- (id<JavaUtilMap>)columnMap;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_TransformedTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransformedTable, fromTable_, id<ComGoogleCommonCollectTable>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransformedTable, function_, id<ComGoogleCommonBaseFunction>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransformedTable, cellSet__, ComGoogleCommonCollectTables_TransformedTable_CellSet *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransformedTable, values__, id<JavaUtilCollection>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransformedTable, rowMap__, id<JavaUtilMap>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_TransformedTable, columnMap__, id<JavaUtilMap>)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransformedTable)
#if !defined (_ComGoogleCommonCollectTables_TransformedTable_CellSet_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransformedTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectTables_TransformedTable_CellSet_

@class ComGoogleCommonCollectTables_TransformedTable;

#define ComGoogleCommonCollectCollections2_RESTRICT 1
#define ComGoogleCommonCollectCollections2_TransformedCollection_INCLUDE 1
#include "com/google/common/collect/Collections2.h"

#define JavaUtilSet_RESTRICT 1
#define JavaUtilSet_INCLUDE 1
#include "java/util/Set.h"


@interface ComGoogleCommonCollectTables_TransformedTable_CellSet : ComGoogleCommonCollectCollections2_TransformedCollection < JavaUtilSet > {
}

- (instancetype)initWithComGoogleCommonCollectTables_TransformedTable:(ComGoogleCommonCollectTables_TransformedTable *)outer$;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (jboolean)containsWithId:(id)obj;

- (jboolean)removeWithId:(id)obj;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_TransformedTable_CellSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransformedTable_CellSet)
#if !defined (_ComGoogleCommonCollectTables_TransformedTable_$1_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransformedTable_$1_INCLUDE)
#define _ComGoogleCommonCollectTables_TransformedTable_$1_

@class ComGoogleCommonCollectTables_TransformedTable;
@protocol ComGoogleCommonCollectTable_Cell;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonCollectTables_TransformedTable_$1 : NSObject < ComGoogleCommonBaseFunction > {
}

- (id<ComGoogleCommonCollectTable_Cell>)applyWithId:(id<ComGoogleCommonCollectTable_Cell>)cell;

- (instancetype)initWithComGoogleCommonCollectTables_TransformedTable:(ComGoogleCommonCollectTables_TransformedTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_TransformedTable_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransformedTable_$1)
#if !defined (_ComGoogleCommonCollectTables_TransformedTable_$2_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransformedTable_$2_INCLUDE)
#define _ComGoogleCommonCollectTables_TransformedTable_$2_

@class ComGoogleCommonCollectTables_TransformedTable;
@protocol JavaUtilMap;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonCollectTables_TransformedTable_$2 : NSObject < ComGoogleCommonBaseFunction > {
}

- (id<JavaUtilMap>)applyWithId:(id<JavaUtilMap>)row;

- (instancetype)initWithComGoogleCommonCollectTables_TransformedTable:(ComGoogleCommonCollectTables_TransformedTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_TransformedTable_$2)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransformedTable_$2)
#if !defined (_ComGoogleCommonCollectTables_TransformedTable_$3_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_TransformedTable_$3_INCLUDE)
#define _ComGoogleCommonCollectTables_TransformedTable_$3_

@class ComGoogleCommonCollectTables_TransformedTable;
@protocol JavaUtilMap;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonCollectTables_TransformedTable_$3 : NSObject < ComGoogleCommonBaseFunction > {
}

- (id<JavaUtilMap>)applyWithId:(id<JavaUtilMap>)column;

- (instancetype)initWithComGoogleCommonCollectTables_TransformedTable:(ComGoogleCommonCollectTables_TransformedTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_TransformedTable_$3)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_TransformedTable_$3)
#if !defined (_ComGoogleCommonCollectTables_UnmodifiableTable_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_UnmodifiableTable_INCLUDE)
#define _ComGoogleCommonCollectTables_UnmodifiableTable_

@protocol ComGoogleCommonCollectTable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingTable_RESTRICT 1
#define ComGoogleCommonCollectForwardingTable_INCLUDE 1
#include "com/google/common/collect/ForwardingTable.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectTables_UnmodifiableTable_serialVersionUID 0LL

@interface ComGoogleCommonCollectTables_UnmodifiableTable : ComGoogleCommonCollectForwardingTable < JavaIoSerializable > {
 @public
  id<ComGoogleCommonCollectTable> delegate__;
}

- (instancetype)initWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)delegate;

- (id<ComGoogleCommonCollectTable>)delegate;

- (id<JavaUtilSet>)cellSet;

- (void)clear;

- (id<JavaUtilMap>)columnWithId:(id)columnKey;

- (id<JavaUtilSet>)columnKeySet;

- (id<JavaUtilMap>)columnMap;

- (id)putWithId:(id)rowKey
         withId:(id)columnKey
         withId:(id)value;

- (void)putAllWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

- (id<JavaUtilMap>)rowWithId:(id)rowKey;

- (id<JavaUtilSet>)rowKeySet;

- (id<JavaUtilMap>)rowMap;

- (id<JavaUtilCollection>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_UnmodifiableTable)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectTables_UnmodifiableTable, delegate__, id<ComGoogleCommonCollectTable>)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTables_UnmodifiableTable, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_UnmodifiableTable)
#if !defined (_ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_INCLUDE)
#define _ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_

@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectRowSortedTable_RESTRICT 1
#define ComGoogleCommonCollectRowSortedTable_INCLUDE 1
#include "com/google/common/collect/RowSortedTable.h"


#define ComGoogleCommonCollectTables_UnmodifiableRowSortedMap_serialVersionUID 0LL

@interface ComGoogleCommonCollectTables_UnmodifiableRowSortedMap : ComGoogleCommonCollectTables_UnmodifiableTable < ComGoogleCommonCollectRowSortedTable > {
}

- (instancetype)initWithComGoogleCommonCollectRowSortedTable:(id<ComGoogleCommonCollectRowSortedTable>)delegate;

- (id<ComGoogleCommonCollectRowSortedTable>)delegate;

- (id<JavaUtilSortedMap>)rowMap;

- (id<JavaUtilSortedSet>)rowKeySet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_UnmodifiableRowSortedMap)
#if !defined (_ComGoogleCommonCollectTables_$1_) && (ComGoogleCommonCollectTables_INCLUDE_ALL || ComGoogleCommonCollectTables_$1_INCLUDE)
#define _ComGoogleCommonCollectTables_$1_

@protocol JavaUtilMap;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonCollectTables_$1 : NSObject < ComGoogleCommonBaseFunction > {
}

- (id<JavaUtilMap>)applyWithId:(id<JavaUtilMap>)input;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTables_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTables_$1)
