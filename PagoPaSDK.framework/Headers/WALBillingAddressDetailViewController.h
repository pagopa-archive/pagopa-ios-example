//
//  WALBillingAddressDetailViewController.h

//
//  Created  on 12/09/17.
//
//

#import <UIKit/UIKit.h>

@protocol WALBillingAddressDetailUpdateView;
@protocol WALBillingAddressDetailAddView;
@class WALBillingAddressDetailUpdatePresenter;
@class WALBillingAddressDetailAddPresenter;

@interface WALBillingAddressDetailViewController : UIViewController <WALBillingAddressDetailUpdateView, WALBillingAddressDetailAddView>

@property (strong, nonatomic) WALBillingAddressDetailUpdatePresenter * updatePresenter;
@property (strong, nonatomic) WALBillingAddressDetailAddPresenter * addPresenter;

@end
