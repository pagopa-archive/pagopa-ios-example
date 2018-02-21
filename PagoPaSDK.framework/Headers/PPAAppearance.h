//
//  PPAAppearance.h

//
//  Created  on 31/10/17.
//  
//

@import UIKit;
#import "PagoPABundle.h"

typedef enum : NSUInteger {
    PPATextFieldStyleEmail,
    PPATextFieldStyleUsername,
    PPATextFieldStyleName,
    PPATextFieldStylePassword,
    PPATextFieldStylePhone,
    PPATextFieldStylePAN,
    PPATextFieldStyleCVV,
    PPATextFieldStyleDate,
    PPATextFieldStyleNumber,
} PPATextFieldStyle;

@interface PPAAppearance : NSObject

-(instancetype) init;

#define PPA_BLUE_COLOR [UIColor colorWithRed:0.22 green:0.30 blue:0.77 alpha:1.0]
#define PPA_DARK_TURQUOISE [UIColor colorWithRed:0.00 green:0.78 blue:0.80 alpha:1.0]
#define PPA_PALE_TURQUOISE [UIColor colorWithRed:0.67 green:0.94 blue:0.94 alpha:1.0]
#define PPA_BACKGROUND_COLOR [UIColor colorWithRed:0.96 green:0.96 blue:0.96 alpha:1.0]
#define PPA_LINE_COLOR [UIColor colorWithRed:0.35 green:0.40 blue:0.44 alpha:1.00]

@property (strong, nonatomic) UIColor * topBarColor;
@property (strong, nonatomic) UIColor * backgroundColor;
@property (strong, nonatomic) UIColor * textColor;
@property (strong, nonatomic) UIColor * darkTextColor;
@property (strong, nonatomic) UIColor * lightTextColor;
@property (strong, nonatomic) UIColor * tintColor;
@property (strong, nonatomic) UIColor * passwordSecureColor;
@property (strong, nonatomic) UIColor * passwordAlmostSecureColor;
@property (strong, nonatomic) UIColor * passwordInsecureColor;
@property (strong, nonatomic) NSString * mainFontName;

-(UIFont *) fontForTextStyle:(UIFontTextStyle) fontTextStyle;

+(void) configureTextField:(UITextField *) textField forStyle:(PPATextFieldStyle) style;
+(NSAttributedString *) createAttributedStringFromHtmlFormattedText:(NSString *) htmlFormattedText font:(UIFont *) font;

#define LOCALIZED_STRING(the_string) [[PagoPABundle sharedBundle] localizedStringWithName:the_string]
#define LOCALIZED_ATTRIBUTED_STRING(the_string, the_font) [PPAAppearance createAttributedStringFromHtmlFormattedText:[[PagoPABundle sharedBundle] localizedStringWithName:the_string] font:the_font];

+(BOOL) isMailValid:(NSString *) email;
+(BOOL) isUsernameValid:(NSString *) username;
+(BOOL) isPasswordValid:(NSString *) password;

@end

@protocol PPAAppearanceProtocol

@property (strong, nonatomic) PPAAppearance * ppaAppearance;


@end
