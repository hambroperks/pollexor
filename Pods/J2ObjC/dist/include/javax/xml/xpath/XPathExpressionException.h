//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/xpath/XPathExpressionException.java
//

#ifndef _JavaxXmlXpathXPathExpressionException_H_
#define _JavaxXmlXpathXPathExpressionException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "javax/xml/xpath/XPathException.h"

#define JavaxXmlXpathXPathExpressionException_serialVersionUID -1837080260374986980LL

@interface JavaxXmlXpathXPathExpressionException : JavaxXmlXpathXPathException {
}

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPathExpressionException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaxXmlXpathXPathExpressionException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathExpressionException)

#endif // _JavaxXmlXpathXPathExpressionException_H_
