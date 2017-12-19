#import <Foundation/Foundation.h>
@import wallet_core_sdk;

@interface Singletons : NSObject

+(void) configurePagoPACore:(PagoPACore *) pagoPACore;
+(PagoPACore *) pagoPACore;

@end
