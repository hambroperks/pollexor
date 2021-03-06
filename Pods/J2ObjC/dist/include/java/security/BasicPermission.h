//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/BasicPermission.java
//

#ifndef _JavaSecurityBasicPermission_H_
#define _JavaSecurityBasicPermission_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/security/Permission.h"

@interface JavaSecurityBasicPermission : JavaSecurityPermission < JavaIoSerializable > {
}

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)action;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityBasicPermission)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityBasicPermission)

#endif // _JavaSecurityBasicPermission_H_
