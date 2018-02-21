//
//  WALBillingAddressListTableViewController.h

//
//  Created  on 31/08/17.
//  
//

#import <UIKit/UIKit.h>
@protocol WALBillingAddressListView;
@class WALBillingAddressListPresenter;

@interface WALBillingAddressListTableViewController : UITableViewController <WALBillingAddressListView>

@property (strong, nonatomic) WALBillingAddressListPresenter * presenter;

@end
