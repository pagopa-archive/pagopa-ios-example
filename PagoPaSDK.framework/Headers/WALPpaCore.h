// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ppa_core.djinni

#import "WALCore.h"
#import <Foundation/Foundation.h>
@class WALPpaCore;
@class WALPpaSession;
@protocol WALPpaViewsBuilder;


@interface WALPpaCore : NSObject

+ (nullable WALPpaCore *)createPpaCore:(nullable WALCore *)core
                       ppaViewsBuilder:(nullable id<WALPpaViewsBuilder>)ppaViewsBuilder;

/** important: call this method after the ppa_core object creation! */
- (void)setupPpaCore;

- (nullable WALPpaSession *)getPpaSession;

- (void)setNotificationToken:(nonnull NSString *)token;

- (void)didReceiveUpdatedTransactionNotification:(nonnull NSString *)transactionId;

@end
