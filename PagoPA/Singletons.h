#import <Foundation/Foundation.h>
@import PagoPaSDK;

@interface Singletons : NSObject

+(void) configurePagoPACore:(PagoPACore *) pagoPACore;
+(PagoPACore *) pagoPACore;

@end
