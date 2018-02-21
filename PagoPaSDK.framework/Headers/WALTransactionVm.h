// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from transaction_vm.djinni

#import <Foundation/Foundation.h>

@interface WALTransactionVm : NSObject
- (nonnull instancetype)initWithTransactionId:(int64_t)transactionId
                                      created:(nonnull NSString *)created
                                      updated:(nonnull NSString *)updated
                                       amount:(nonnull NSString *)amount
                       transactionDescription:(nonnull NSString *)transactionDescription
                                     merchant:(nonnull NSString *)merchant
                                statusMessage:(nonnull NSString *)statusMessage
                                        error:(BOOL)error
                                          fee:(nonnull NSString *)fee
                                        total:(nonnull NSString *)total;
+ (nonnull instancetype)transactionVmWithTransactionId:(int64_t)transactionId
                                               created:(nonnull NSString *)created
                                               updated:(nonnull NSString *)updated
                                                amount:(nonnull NSString *)amount
                                transactionDescription:(nonnull NSString *)transactionDescription
                                              merchant:(nonnull NSString *)merchant
                                         statusMessage:(nonnull NSString *)statusMessage
                                                 error:(BOOL)error
                                                   fee:(nonnull NSString *)fee
                                                 total:(nonnull NSString *)total;

@property (nonatomic, readonly) int64_t transactionId;

@property (nonatomic, readonly, nonnull) NSString * created;

@property (nonatomic, readonly, nonnull) NSString * updated;

@property (nonatomic, readonly, nonnull) NSString * amount;

@property (nonatomic, readonly, nonnull) NSString * transactionDescription;

@property (nonatomic, readonly, nonnull) NSString * merchant;

@property (nonatomic, readonly, nonnull) NSString * statusMessage;

@property (nonatomic, readonly) BOOL error;

@property (nonatomic, readonly, nonnull) NSString * fee;

@property (nonatomic, readonly, nonnull) NSString * total;

@end