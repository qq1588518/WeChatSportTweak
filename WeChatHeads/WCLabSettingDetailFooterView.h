//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface WCLabSettingDetailFooterView : UIView
{
    UIButton *_exposeButton;
    id <WCLabSettingDetailFooterViewDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <WCLabSettingDetailFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initExposeButton;
- (void)onClickExposeButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

