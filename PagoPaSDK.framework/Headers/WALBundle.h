//
//  WALBundle.h
//  Pods
//
//  Created  on 14/04/16.
//
//

@import UIKit;

@interface WALBundle : NSObject

@property (strong, nonatomic) NSBundle * bundle;

+(WALBundle *) sharedBundle;

-(instancetype) initWithClass:(Class) aClass;
-(instancetype) initWithClass:(Class) aClass frameworkName:(NSString *) frameworkName;

-(UIImage *) imageNamed:(NSString *) imageName;
-(NSString *) localizedStringWithName:(NSString *) name;
-(nullable __kindof UIViewController *) instantiateViewControllerFromXibWithClass:(Class) viewControllerClass;
-(nullable __kindof UIViewController *) instantiateViewControllerFromStoryboardWithName:(NSString *) storyboardName identifier:(NSString *) storyboardIdentifier;
-(UINib *) nibWithName:(NSString *) nibName;

@end
