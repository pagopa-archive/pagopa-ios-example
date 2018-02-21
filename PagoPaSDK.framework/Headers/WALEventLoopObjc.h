//
//  WALEventLoopObjc.h

//
//  Created  on 01/08/17.
//  
//

#import <Foundation/Foundation.h>
#import "WALEventLoop.h"

@interface WALEventLoopObjc : NSObject <WALEventLoop>

- (void)post:(nullable WALAsyncTask *)task;

@end
