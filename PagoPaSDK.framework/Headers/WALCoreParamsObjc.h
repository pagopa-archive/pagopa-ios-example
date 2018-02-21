//
//  WALCoreParamsObjc.h
//  PagoPaSDK
//
//  Created by Davide Di Stefano on 02/02/18.
//

#import <Foundation/Foundation.h>
#import "WALCoreParamsInterface.h"
#import "WALEventLoopObjc.h"
#import "WALHttpObjc.h"
#import "WALThreadLauncherObjC.h"
#import "WALHttpCallback.h"
#import "WALUiNativeRouterObjC.h"
#import "WALUiRouter.h"
#import "WALBundle.h"
#import "WALI18nObjC.h"
#import "WALLoggerObjc.h"
#import "WALCoreViewsBuilderObjC.h"
#import "WALCore.h"
#import "WALPreferencesObjc.h"
#import "WALHttpSessionTokenType.h"
#import "WALDeviceObjc.h"
#import "WALUiNativeRouter.h"
#import "WALCoreViewsBuilder.h"

@interface WALCoreParamsObjc : NSObject <WALCoreParamsInterface>

@property (strong, nonatomic) id<WALUiNativeRouter> uiNativeRouter;
@property (strong, nonatomic) WALEventLoopObjc * uiThread;
@property (strong, nonatomic) WALThreadLauncherObjC * threadLauncher;
@property (strong, nonatomic) WALHttpObjc * http;
@property (strong, nonatomic) WALI18nObjC * I18n;
@property (strong, nonatomic) WALLoggerObjc * logger;
@property (strong, nonatomic) id<WALCoreViewsBuilder> coreViewsBuilder;
@property (strong, nonatomic) WALPreferencesObjc * preferences;
@property (strong, nonatomic) WALDeviceObjc * device;
@property (strong, nonatomic) NSString * baseUrl;
@property (strong, nonatomic) NSString * apiPrefix;
@property (strong, nonatomic) NSString * apiVersion;
@property (strong, nonatomic) NSString * jsonRootObject;
@property (strong, nonatomic) NSString * documentsPath;
@property (readwrite, nonatomic) WALHttpSessionTokenType sessionTokenType;

@end
