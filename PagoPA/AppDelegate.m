#import "AppDelegate.h"
#import "Singletons.h"
@import PagoPaSDK;

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    PagoPACore * pagoPACore = [[PagoPACore alloc] init];
    [Singletons configurePagoPACore:pagoPACore];
    
    UINavigationController * navigationController = [[UINavigationController alloc] init];
    self.window = [[UIWindow alloc]initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.rootViewController = navigationController;
    [self.window makeKeyAndVisible];
    
    UIViewController * viewController = [[UIStoryboard storyboardWithName:@"Main" bundle:nil] instantiateViewControllerWithIdentifier:@"Start"];
    [navigationController pushViewController:viewController animated:NO];
    return YES;
}

@end
