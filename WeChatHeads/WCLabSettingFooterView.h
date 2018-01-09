//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ILinkEventExt.h"

@class MMUILabel, NSString, RichTextView;

@interface WCLabSettingFooterView : UIView <ILinkEventExt>
{
    MMUILabel *_tipLabel;
    RichTextView *_agreementView;
    id <WCLabSettingFooterViewDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <WCLabSettingFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initAgreementView;
- (void)initTipLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
