//
//  WALCoreViewsBuilderObjC.h

//
//  Created  on 25/10/17.
//  
//

#import <Foundation/Foundation.h>
#import "WALCoreViewsBuilder.h"
#import "WALBundle.h"

@class WALUiNativeRouterObjC;

@interface WALCoreViewsBuilderObjC : NSObject <WALCoreViewsBuilder>

-(instancetype) initWithNativeRouter:(WALUiNativeRouterObjC *) nativeRouterObjc bundle:(WALBundle *) bundle;

@end
