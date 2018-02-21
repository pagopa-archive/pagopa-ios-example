//
//  WALWalletCore.h

//
//  Created  on 07/09/17.
//  
//

@import UIKit;

@class WALCore;
@class WALUiNativeRouterObjC;
#import "WALHttpSessionTokenType.h"

@interface WALWalletCore : NSObject

-(instancetype) initWithBaseUrl:(nonnull NSString *)baseUrl
                      apiPrefix:(nonnull NSString *)apiPrefix
                     apiVersion:(nonnull NSString *)apiVersion
                  documentsPath:(nonnull NSString *)documentsPath
                   nativeRouter:(nonnull WALUiNativeRouterObjC *) nativeRouter
           httpSessionTokenType:(WALHttpSessionTokenType) httpSessionTokenType;

-(instancetype) initWithBaseUrl:(nonnull NSString *)baseUrl
                      apiPrefix:(nonnull NSString *)apiPrefix
                     apiVersion:(nonnull NSString *)apiVersion
                  documentsPath:(nonnull NSString *)documentsPath
           navigationController:(nonnull UINavigationController *)navigationController
           httpSessionTokenType:(WALHttpSessionTokenType) httpSessionTokenType;

-(void) goTo:(NSString *) path;

@property (strong, nonnull, nonatomic) WALUiNativeRouterObjC * nativeRouter;
@property (strong, nonnull, nonatomic) WALCore * core;

@end
