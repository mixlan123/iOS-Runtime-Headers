/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIDeviceRGBColor : UIColor 
{
    float redComponent;
    float greenComponent;
    float blueComponent;
    float alphaComponent;
    struct CGColor { } *cachedColor;
}


- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (id)colorSpaceName;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (void)setFill;
- (void)setStroke;
- (float)alphaComponent;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (struct CGColor { }*)CGColor;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (void)set;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)dealloc;

@end