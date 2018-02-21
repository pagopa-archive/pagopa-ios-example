// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from billing_address_list.djinni

#import "WALBillingAddressVm.h"
#import "WALHttpError.h"
#import <Foundation/Foundation.h>


@protocol WALBillingAddressCallback

- (void)onBillingAddressReloadSuccess:(nonnull NSArray<WALBillingAddressVm *> *)billingAddresses;

- (void)onBillingAddressReloadNetworkError:(nonnull WALHttpError *)error;

@end