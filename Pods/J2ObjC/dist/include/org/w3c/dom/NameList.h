//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/NameList.java
//

#ifndef _OrgW3cDomNameList_H_
#define _OrgW3cDomNameList_H_

#include "J2ObjC_header.h"

@protocol OrgW3cDomNameList < NSObject, JavaObject >

- (NSString *)getNameWithInt:(jint)index;

- (NSString *)getNamespaceURIWithInt:(jint)index;

- (jint)getLength;

- (jboolean)containsWithNSString:(NSString *)str;

- (jboolean)containsNSWithNSString:(NSString *)namespaceURI
                      withNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomNameList)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomNameList)

#endif // _OrgW3cDomNameList_H_
