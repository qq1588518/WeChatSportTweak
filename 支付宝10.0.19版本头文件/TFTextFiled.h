//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface TFTextFiled : UITextField
{
    double _textHeight;
}

@property(nonatomic) double textHeight; // @synthesize textHeight=_textHeight;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct UIEdgeInsets)textInsets;
- (void)setFont:(id)arg1;

@end

