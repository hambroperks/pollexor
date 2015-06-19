//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteBuffer.java
//

#ifndef _JavaNioByteBuffer_H_
#define _JavaNioByteBuffer_H_

@class IOSByteArray;
@class JavaNioByteOrder;
@class JavaNioCharBuffer;
@class JavaNioDoubleBuffer;
@class JavaNioFloatBuffer;
@class JavaNioIntBuffer;
@class JavaNioLongBuffer;
@class JavaNioShortBuffer;

#include "J2ObjC_header.h"
#include "java/lang/Comparable.h"
#include "java/nio/Buffer.h"

@interface JavaNioByteBuffer : JavaNioBuffer < JavaLangComparable > {
 @public
  JavaNioByteOrder *order__;
}

+ (JavaNioByteBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

+ (JavaNioByteBuffer *)allocateDirectWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

+ (JavaNioByteBuffer *)wrapWithByteArray:(IOSByteArray *)array;

+ (JavaNioByteBuffer *)wrapWithByteArray:(IOSByteArray *)array
                                 withInt:(jint)start
                                 withInt:(jint)byteCount;

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

- (IOSByteArray *)array;

- (jint)arrayOffset;

- (JavaNioCharBuffer *)asCharBuffer;

- (JavaNioDoubleBuffer *)asDoubleBuffer;

- (JavaNioFloatBuffer *)asFloatBuffer;

- (JavaNioIntBuffer *)asIntBuffer;

- (JavaNioLongBuffer *)asLongBuffer;

- (JavaNioByteBuffer *)asReadOnlyBuffer;

- (JavaNioShortBuffer *)asShortBuffer;

- (JavaNioByteBuffer *)compact;

- (jint)compareToWithId:(JavaNioByteBuffer *)otherBuffer;

- (JavaNioByteBuffer *)duplicate;

- (jboolean)isEqual:(id)other;

- (jbyte)get;

- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst;

- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)byteCount;

- (jbyte)getWithInt:(jint)index;

- (jchar)getChar;

- (jchar)getCharWithInt:(jint)index;

- (jdouble)getDouble;

- (jdouble)getDoubleWithInt:(jint)index;

- (jfloat)getFloat;

- (jfloat)getFloatWithInt:(jint)index;

- (jint)getInt;

- (jint)getIntWithInt:(jint)index;

- (jlong)getLong;

- (jlong)getLongWithInt:(jint)index;

- (jshort)getShort;

- (jshort)getShortWithInt:(jint)index;

- (jboolean)hasArray;

- (NSUInteger)hash;

- (jboolean)isDirect;

- (jboolean)isValid;

- (JavaNioByteOrder *)order;

- (JavaNioByteBuffer *)orderWithJavaNioByteOrder:(JavaNioByteOrder *)byteOrder;

- (IOSByteArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioByteBuffer *)putWithByte:(jbyte)b;

- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src;

- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)byteCount;

- (JavaNioByteBuffer *)putWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

- (JavaNioByteBuffer *)putWithInt:(jint)index
                         withByte:(jbyte)b;

- (JavaNioByteBuffer *)putCharWithChar:(jchar)value;

- (JavaNioByteBuffer *)putCharWithInt:(jint)index
                             withChar:(jchar)value;

- (JavaNioByteBuffer *)putDoubleWithDouble:(jdouble)value;

- (JavaNioByteBuffer *)putDoubleWithInt:(jint)index
                             withDouble:(jdouble)value;

- (JavaNioByteBuffer *)putFloatWithFloat:(jfloat)value;

- (JavaNioByteBuffer *)putFloatWithInt:(jint)index
                             withFloat:(jfloat)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)index
                             withInt:(jint)value;

- (JavaNioByteBuffer *)putLongWithLong:(jlong)value;

- (JavaNioByteBuffer *)putLongWithInt:(jint)index
                             withLong:(jlong)value;

- (JavaNioByteBuffer *)putShortWithShort:(jshort)value;

- (JavaNioByteBuffer *)putShortWithInt:(jint)index
                             withShort:(jshort)value;

- (JavaNioByteBuffer *)slice;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioByteBuffer)

J2OBJC_FIELD_SETTER(JavaNioByteBuffer, order__, JavaNioByteOrder *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_allocateDirectWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_wrapWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_wrapWithByteArray_withInt_withInt_(IOSByteArray *array, jint start, jint byteCount);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteBuffer)

#endif // _JavaNioByteBuffer_H_
