//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/OutOfMemoryError.java
//

#ifndef _JavaLangOutOfMemoryError_H_
#define _JavaLangOutOfMemoryError_H_

#include "J2ObjC_header.h"
#include "java/lang/VirtualMachineError.h"

#define JavaLangOutOfMemoryError_serialVersionUID 8228564086184010517LL

@interface JavaLangOutOfMemoryError : JavaLangVirtualMachineError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangOutOfMemoryError)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangOutOfMemoryError, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangOutOfMemoryError)

#endif // _JavaLangOutOfMemoryError_H_
