//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/SelectionKeyImpl.java
//

#ifndef _JavaNioSelectionKeyImpl_H_
#define _JavaNioSelectionKeyImpl_H_

@class JavaNioChannelsSelectableChannel;
@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiAbstractSelectableChannel;
@class JavaNioSelectorImpl;

#include "J2ObjC_header.h"
#include "java/nio/channels/spi/AbstractSelectionKey.h"

@interface JavaNioSelectionKeyImpl : JavaNioChannelsSpiAbstractSelectionKey {
}

- (instancetype)initWithJavaNioChannelsSpiAbstractSelectableChannel:(JavaNioChannelsSpiAbstractSelectableChannel *)channel
                                                            withInt:(jint)operations
                                                             withId:(id)attachment
                                            withJavaNioSelectorImpl:(JavaNioSelectorImpl *)selector;

- (JavaNioChannelsSelectableChannel *)channel;

- (jint)interestOps;

- (jint)interestOpsNoCheck;

- (JavaNioChannelsSelectionKey *)interestOpsWithInt:(jint)operations;

- (jint)readyOps;

- (JavaNioChannelsSelector *)selector;

- (void)setReadyOpsWithInt:(jint)readyOps;

- (jboolean)isConnected;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioSelectionKeyImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioSelectionKeyImpl)

#endif // _JavaNioSelectionKeyImpl_H_