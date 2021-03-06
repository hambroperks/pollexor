//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/ResultSetMetaData.java
//

#ifndef _JavaSqlResultSetMetaData_H_
#define _JavaSqlResultSetMetaData_H_

#include "J2ObjC_header.h"
#include "java/sql/Wrapper.h"

#define JavaSqlResultSetMetaData_columnNoNulls 0
#define JavaSqlResultSetMetaData_columnNullable 1
#define JavaSqlResultSetMetaData_columnNullableUnknown 2

@protocol JavaSqlResultSetMetaData < JavaSqlWrapper, NSObject, JavaObject >
- (NSString *)getCatalogNameWithInt:(jint)column;

- (NSString *)getColumnClassNameWithInt:(jint)column;

- (jint)getColumnCount;

- (jint)getColumnDisplaySizeWithInt:(jint)column;

- (NSString *)getColumnLabelWithInt:(jint)column;

- (NSString *)getColumnNameWithInt:(jint)column;

- (jint)getColumnTypeWithInt:(jint)column;

- (NSString *)getColumnTypeNameWithInt:(jint)column;

- (jint)getPrecisionWithInt:(jint)column;

- (jint)getScaleWithInt:(jint)column;

- (NSString *)getSchemaNameWithInt:(jint)column;

- (NSString *)getTableNameWithInt:(jint)column;

- (jboolean)isAutoIncrementWithInt:(jint)column;

- (jboolean)isCaseSensitiveWithInt:(jint)column;

- (jboolean)isCurrencyWithInt:(jint)column;

- (jboolean)isDefinitelyWritableWithInt:(jint)column;

- (jint)isNullableWithInt:(jint)column;

- (jboolean)isReadOnlyWithInt:(jint)column;

- (jboolean)isSearchableWithInt:(jint)column;

- (jboolean)isSignedWithInt:(jint)column;

- (jboolean)isWritableWithInt:(jint)column;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlResultSetMetaData)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlResultSetMetaData, columnNoNulls, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlResultSetMetaData, columnNullable, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaSqlResultSetMetaData, columnNullableUnknown, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlResultSetMetaData)

#endif // _JavaSqlResultSetMetaData_H_
