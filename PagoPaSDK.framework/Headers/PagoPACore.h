//
//  PagoPACore.h
//

@import UIKit;
#import "PPAViewsBuilderObjC.h"

@interface PagoPAPayment : NSObject

@property (strong, nonatomic) NSString * email;
@property (strong, nonatomic) NSString * name;
@property (strong, nonatomic) NSString * amount;
@property (strong, nonatomic) NSString * receiver;
@property (strong, nonatomic) NSString * subject;

@end

@class PagoPACore;

@protocol PagoPACoreDelegate <NSObject>

@optional
-(void) pagoPACore:(PagoPACore *) pagoPACore didCompletePayment:(PagoPAPayment *) payment;
-(void) pagoPACorePaymentFailed:(PagoPACore *) pagoPACore;
-(void) pagoPACorePaymentAbortedByUser:(PagoPACore *) pagoPACore;

@end

@interface PagoPACore : NSObject

-(instancetype) init: (NSString *) baseUrl;
-(instancetype) initWithViewsBuilder:(NSString *) baseUrl viewsBuilder:(PPAViewsBuilderObjc *) viewsBuilder;

-(void) startPaymentSessionWithPaymentId:(NSString *) paymentId presentingViewController:(UIViewController*) presentingViewController delegate:(id<PagoPACoreDelegate>) delegate;

-(void) setNotificationToken:(NSString *) notificationToken;
-(void) didReceiveNotification:(NSDictionary *) notification;

@end
