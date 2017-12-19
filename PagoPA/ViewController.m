#import "ViewController.h"
#import "Singletons.h"

@interface ViewController () <PagoPACoreDelegate>

@property (weak, nonatomic) IBOutlet UILabel *buildLabel;
@property (weak, nonatomic) IBOutlet UILabel *label3;
@property (weak, nonatomic) IBOutlet UILabel *label2;
@property (weak, nonatomic) IBOutlet UILabel *label1;
@property (weak, nonatomic) IBOutlet UIView *paymentView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSString * build = [[NSBundle mainBundle] objectForInfoDictionaryKey:(NSString *)kCFBundleVersionKey];
    NSString * version = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
    _buildLabel.text = [NSString stringWithFormat:@"Versione %@ (%@)", version, build];
    _paymentView.hidden = YES;
}

- (IBAction)closeAction:(id)sender {
    _paymentView.hidden = YES;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)startAction:(id)sender
{
    [[Singletons pagoPACore] startPaymentSessionWithPaymentId:[[NSUUID UUID] UUIDString] presentingViewController:self delegate:self];
}

-(void) pagoPACore:(PagoPACore *) pagoPACore didCompletePayment:(PagoPAPayment *) payment;
{
    _paymentView.hidden = NO;
    _label1.text = payment.receiver;
    _label2.text = payment.subject;
    _label3.text = payment.amount;
    // payment completed with success
}

-(void) pagoPACorePaymentFailed:(PagoPACore *) pagoPACore;
{
    // payment failed
}

-(void) pagoPACorePaymentAbortedByUser:(PagoPACore *) pagoPACore;
{
    // payment cancelled by the user
}

@end
