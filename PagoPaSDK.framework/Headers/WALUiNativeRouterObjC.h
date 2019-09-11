//
//  WALUiRouterObjC.h

//
//  Created  on 07/09/17.
//  
//

@import UIKit;
#import "WALUiNativeRouter.h"
#import "WALBundle.h"
#import "WALUiRouteInformation.h"

@class WALUiNativeRouterObjC;

@protocol WALUiNativeRouterObjCDelegate <NSObject>

@optional
-(void) nativeRouterDidCloseAllScreens:(WALUiNativeRouterObjC *) nativeRouter;

@end

@interface WALUiNativeRouterObjC : NSObject <WALUiNativeRouter>

-(instancetype) initWithNavigationController:(UINavigationController *) navigationController;

@property (nonatomic, weak) id<WALUiNativeRouterObjCDelegate> delegate;
@property (strong, nonatomic) UINavigationController * navigationController;
@property (strong, nonnull, nonatomic) WALBundle * bundle;

-(void) executeRouting:(nonnull WALUiRouteInformation *)route viewController:(UIViewController *) viewController;

// override in subclasses
- (void)goTo:(nonnull WALUiRouteInformation *)route viewController:(UIViewController *) viewController;
// override in subclasses
- (void)replaceWith:(nonnull WALUiRouteInformation *)route viewController:(UIViewController *) viewController;
// override in subclasses
- (void)replaceAllWith:(nonnull WALUiRouteInformation *)route viewController:(UIViewController *) viewController;
// override in subclasses
- (void)setOptionalRoute:(nonnull WALUiRouteInformation *)route viewController:(UIViewController *) viewController;
- (void)startLoading:(nonnull NSString *)loadingText;
- (void)stopLoading;

@end
