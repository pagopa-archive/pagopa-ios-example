//
//  PPAViewsBuilderObjc.h

//
//  Created  on 25/10/17.
//  
//

#import <Foundation/Foundation.h>
#import "WALPpaViewsBuilder.h"
#import "PagoPABundle.h"
#import "PPAAppearance.h"

@class WALUiNativeRouterObjC;

@interface PPAViewsBuilderObjc : NSObject <WALPpaViewsBuilder, PPAAppearanceProtocol>

-(instancetype) initWithNativeRouter:(WALUiNativeRouterObjC *) nativeRouterObjc bundle:(PagoPABundle *) bundle;

@property (strong, readonly, nonatomic) WALUiNativeRouterObjC * nativeRouter;

@end
