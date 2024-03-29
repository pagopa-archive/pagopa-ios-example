// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ppa_payment_method_type_vm.djinni

#import <Foundation/Foundation.h>

@interface WALPpaPaymentMethodTypeVm : NSObject
- (nonnull instancetype)initWithCreditCardFee:(nonnull NSString *)creditCardFee
                               bankAccountFee:(nonnull NSString *)bankAccountFee
                       otherPaymentMethodsFee:(nonnull NSString *)otherPaymentMethodsFee;
+ (nonnull instancetype)ppaPaymentMethodTypeVmWithCreditCardFee:(nonnull NSString *)creditCardFee
                                                 bankAccountFee:(nonnull NSString *)bankAccountFee
                                         otherPaymentMethodsFee:(nonnull NSString *)otherPaymentMethodsFee;

@property (nonatomic, readonly, nonnull) NSString * creditCardFee;

@property (nonatomic, readonly, nonnull) NSString * bankAccountFee;

@property (nonatomic, readonly, nonnull) NSString * otherPaymentMethodsFee;

@end
