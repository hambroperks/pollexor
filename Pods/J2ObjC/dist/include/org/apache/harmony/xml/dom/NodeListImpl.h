//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/NodeListImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomNodeListImpl_H_
#define _OrgApacheHarmonyXmlDomNodeListImpl_H_

@class OrgApacheHarmonyXmlDomNodeImpl;
@protocol JavaUtilList;
@protocol OrgW3cDomNode;

#include "J2ObjC_header.h"
#include "org/w3c/dom/NodeList.h"

@interface OrgApacheHarmonyXmlDomNodeListImpl : NSObject < OrgW3cDomNodeList > {
}

- (instancetype)init;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)list;

- (void)addWithOrgApacheHarmonyXmlDomNodeImpl:(OrgApacheHarmonyXmlDomNodeImpl *)node;

- (jint)getLength;

- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomNodeListImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomNodeListImpl)

#endif // _OrgApacheHarmonyXmlDomNodeListImpl_H_
