//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/namespace/NamespaceContext.java
//

#ifndef _JavaxXmlNamespaceNamespaceContext_H_
#define _JavaxXmlNamespaceNamespaceContext_H_

@protocol JavaUtilIterator;

#include "J2ObjC_header.h"

@protocol JavaxXmlNamespaceNamespaceContext < NSObject, JavaObject >

- (NSString *)getNamespaceURIWithNSString:(NSString *)prefix;

- (NSString *)getPrefixWithNSString:(NSString *)namespaceURI;

- (id<JavaUtilIterator>)getPrefixesWithNSString:(NSString *)namespaceURI;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlNamespaceNamespaceContext)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlNamespaceNamespaceContext)

#endif // _JavaxXmlNamespaceNamespaceContext_H_