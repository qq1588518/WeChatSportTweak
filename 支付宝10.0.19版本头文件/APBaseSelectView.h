//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface APBaseSelectView : UIView
{
    UIView *_titleView;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    double _heightForDatePicker;
}

@property(nonatomic) double heightForDatePicker; // @synthesize heightForDatePicker=_heightForDatePicker;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)buildSubView;

@end

