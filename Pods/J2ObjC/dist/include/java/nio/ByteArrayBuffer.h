//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteArrayBuffer.java
//

#ifndef _JavaNioByteArrayBuffer_H_
#define _JavaNioByteArrayBuffer_H_

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;
@class JavaNioCharBuffer;
@class JavaNioDoubleBuffer;
@class JavaNioFloatBuffer;
@class JavaNioIntBuffer;
@class JavaNioLongBuffer;
@class JavaNioShortBuffer;

#include "J2ObjC_header.h"
#include "java/nio/ByteBuffer.h"

@interface JavaNioByteArrayBuffer : JavaNioByteBuffer {
 @public
  IOSByteArray *backingArray_;
  jint arrayOffset_;
}

- (instancetype)initWithByteArray:(IOSByteArray *)backingArray;

- (JavaNioByteBuffer *)asReadOnlyBuffer;

- (JavaNioByteBuffer *)compact;

- (JavaNioByteBuffer *)duplicate;

- (JavaNioByteBuffer *)slice;

- (jboolean)isReadOnly;

- (IOSByteArray *)protectedArray;

- (jint)protectedArrayOffset;

- (jboolean)protectedHasArray;

- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)byteCount;


- (void)getWithCharArray:(IOSCharArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)count;

- (void)getWithDoubleArray:(IOSDoubleArray *)dst
                   withInt:(jint)dstOffset
                   withInt:(jint)count;

- (void)getWithFloatArray:(IOSFloatArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)count;

- (void)getWithIntArray:(IOSIntArray *)dst
                withInt:(jint)dstOffset
                withInt:(jint)count;

- (void)getWithLongArray:(IOSLongArray *)dst
                 withInt:(jint)dstOffset
                 withInt:(jint)count;

- (void)getWithShortArray:(IOSShortArray *)dst
                  withInt:(jint)dstOffset
                  withInt:(jint)count;

- (jbyte)get;

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

- (jboolean)isDirect;

- (JavaNioByteBuffer *)putWithByte:(jbyte)b;

- (JavaNioByteBuffer *)putWithInt:(jint)index
                         withByte:(jbyte)b;

- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)byteCount;


- (void)putWithCharArray:(IOSCharArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)count;

- (void)putWithDoubleArray:(IOSDoubleArray *)src
                   withInt:(jint)srcOffset
                   withInt:(jint)count;

- (void)putWithFloatArray:(IOSFloatArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)count;

- (void)putWithIntArray:(IOSIntArray *)src
                withInt:(jint)srcOffset
                withInt:(jint)count;

- (void)putWithLongArray:(IOSLongArray *)src
                 withInt:(jint)srcOffset
                 withInt:(jint)count;

- (void)putWithShortArray:(IOSShortArray *)src
                  withInt:(jint)srcOffset
                  withInt:(jint)count;

- (JavaNioByteBuffer *)putCharWithInt:(jint)index
                             withChar:(jchar)value;

- (JavaNioByteBuffer *)putCharWithChar:(jchar)value;

- (JavaNioByteBuffer *)putDoubleWithDouble:(jdouble)value;

- (JavaNioByteBuffer *)putDoubleWithInt:(jint)index
                             withDouble:(jdouble)value;

- (JavaNioByteBuffer *)putFloatWithFloat:(jfloat)value;

- (JavaNioByteBuffer *)putFloatWithInt:(jint)index
                             withFloat:(jfloat)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)value;

- (JavaNioByteBuffer *)putIntWithInt:(jint)index
                             withInt:(jint)value;

- (JavaNioByteBuffer *)putLongWithInt:(jint)index
                             withLong:(jlong)value;

- (JavaNioByteBuffer *)putLongWithLong:(jlong)value;

- (JavaNioByteBuffer *)putShortWithInt:(jint)index
                             withShort:(jshort)value;

- (JavaNioByteBuffer *)putShortWithShort:(jshort)value;

- (JavaNioCharBuffer *)asCharBuffer;

- (JavaNioDoubleBuffer *)asDoubleBuffer;

- (JavaNioFloatBuffer *)asFloatBuffer;

- (JavaNioIntBuffer *)asIntBuffer;

- (JavaNioLongBuffer *)asLongBuffer;

- (JavaNioShortBuffer *)asShortBuffer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioByteArrayBuffer)

J2OBJC_FIELD_SETTER(JavaNioByteArrayBuffer, backingArray_, IOSByteArray *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteArrayBuffer)

#endif // _JavaNioByteArrayBuffer_H_
