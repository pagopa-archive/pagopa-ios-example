//
//  WALThreadLauncherObjC.h

//
//  Created  on 01/08/17.
//  
//

#import <Foundation/Foundation.h>
#import "WALThreadLauncher.h"

@interface WALThreadLauncherObjC : NSObject <WALThreadLauncher>

- (void)startThread:(NSString *)name runFn:(WALAsyncTask *)runFn;

@end
