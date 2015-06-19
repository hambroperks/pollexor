//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Socket.java
//

#ifndef _JavaNetSocket_H_
#define _JavaNetSocket_H_

@class JavaIoFileDescriptor;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetInetAddress;
@class JavaNetProxy;
@class JavaNetSocketAddress;
@class JavaNetSocketImpl;
@class JavaNioChannelsSocketChannel;
@protocol JavaNetSocketImplFactory;

#include "J2ObjC_header.h"
#include "java/io/Closeable.h"

@interface JavaNetSocket : NSObject < JavaIoCloseable > {
 @public
  JavaNetSocketImpl *impl_;
  jboolean isCreated_;
}

- (instancetype)init;

- (instancetype)initWithJavaNetProxy:(JavaNetProxy *)proxy;

- (instancetype)initWithNSString:(NSString *)dstName
                         withInt:(jint)dstPort;

- (instancetype)initWithNSString:(NSString *)dstName
                         withInt:(jint)dstPort
          withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                         withInt:(jint)localPort;

- (instancetype)initWithNSString:(NSString *)hostName
                         withInt:(jint)port
                     withBoolean:(jboolean)streaming;

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)dstAddress
                                   withInt:(jint)dstPort;

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)dstAddress
                                   withInt:(jint)dstPort
                    withJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                                   withInt:(jint)localPort;

- (instancetype)initWithJavaNetInetAddress:(JavaNetInetAddress *)addr
                                   withInt:(jint)port
                               withBoolean:(jboolean)streaming;

- (instancetype)initWithJavaNetSocketImpl:(JavaNetSocketImpl *)impl;

- (void)close;

- (void)onClose;

- (JavaNetInetAddress *)getInetAddress;

- (JavaIoInputStream *)getInputStream;

- (jboolean)getKeepAlive;

- (JavaNetInetAddress *)getLocalAddress;

- (jint)getLocalPort;

- (JavaIoOutputStream *)getOutputStream;

- (jint)getPort;

- (jint)getSoLinger;

- (jint)getReceiveBufferSize;

- (jint)getSendBufferSize;

- (jint)getSoTimeout;

- (jboolean)getTcpNoDelay;

- (void)setKeepAliveWithBoolean:(jboolean)keepAlive;

+ (void)setSocketImplFactoryWithJavaNetSocketImplFactory:(id<JavaNetSocketImplFactory>)fac;

- (void)setSendBufferSizeWithInt:(jint)size;

- (void)setReceiveBufferSizeWithInt:(jint)size;

- (void)setSoLingerWithBoolean:(jboolean)on
                       withInt:(jint)timeout;

- (void)setSoTimeoutWithInt:(jint)timeout;

- (void)setTcpNoDelayWithBoolean:(jboolean)on;

- (NSString *)description;

- (void)shutdownInput;

- (void)shutdownOutput;

- (JavaNetSocketAddress *)getLocalSocketAddress;

- (JavaNetSocketAddress *)getRemoteSocketAddress;

- (jboolean)isBound;

- (jboolean)isConnected;

- (jboolean)isClosed;

- (void)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr;

- (void)onBindWithJavaNetInetAddress:(JavaNetInetAddress *)localAddress
                             withInt:(jint)localPort;

- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr;

- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)remoteAddr
                                withInt:(jint)timeout;

- (void)onConnectWithJavaNetInetAddress:(JavaNetInetAddress *)remoteAddress
                                withInt:(jint)remotePort;

- (jboolean)isInputShutdown;

- (jboolean)isOutputShutdown;

- (void)setReuseAddressWithBoolean:(jboolean)reuse;

- (jboolean)getReuseAddress;

- (void)setOOBInlineWithBoolean:(jboolean)oobinline;

- (jboolean)getOOBInline;

- (void)setTrafficClassWithInt:(jint)value;

- (jint)getTrafficClass;

- (void)sendUrgentDataWithInt:(jint)value;

- (void)accepted;

- (JavaNioChannelsSocketChannel *)getChannel;

- (JavaIoFileDescriptor *)getFileDescriptor$;

- (void)setPerformancePreferencesWithInt:(jint)connectionTime
                                 withInt:(jint)latency
                                 withInt:(jint)bandwidth;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocket)

J2OBJC_FIELD_SETTER(JavaNetSocket, impl_, JavaNetSocketImpl *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT void JavaNetSocket_setSocketImplFactoryWithJavaNetSocketImplFactory_(id<JavaNetSocketImplFactory> fac);

FOUNDATION_EXPORT id<JavaNetSocketImplFactory> JavaNetSocket_factory_;
J2OBJC_STATIC_FIELD_GETTER(JavaNetSocket, factory_, id<JavaNetSocketImplFactory>)
J2OBJC_STATIC_FIELD_SETTER(JavaNetSocket, factory_, id<JavaNetSocketImplFactory>)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocket)

#endif // _JavaNetSocket_H_
