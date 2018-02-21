//
//  PPAButton.h

//
//  Created  on 19/09/17.
//  
//

#import <UIKit/UIKit.h>

// IB_DESIGNABLE
@interface WALButton : UIButton

@property (readwrite, nonatomic) IBInspectable CGFloat cornerRadius;
@property (readwrite, nonatomic) IBInspectable CGFloat borderWidth;
@property (readwrite, nonatomic) IBInspectable UIColor * borderColor;
@property (readwrite, nonatomic) IBInspectable UIColor * backgroundDefaultColor;
@property (readwrite, nonatomic) IBInspectable UIColor * backgroundHighlightedColor;

@end
