//
//  WALScaledFont.h

//
//  Created  on 31/10/17.
//  
//

@import UIKit;

@interface WALScaledFont : NSObject

-(instancetype) init;
-(instancetype) initWithFontName:(NSString *) fontName;

-(UIFont *) fontForTextStyle:(UIFontTextStyle) fontTextStyle;

@property (readonly, strong, nonatomic) NSString * fontName;

@end
