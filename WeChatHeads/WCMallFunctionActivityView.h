//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIImageView, WCMallFunctionActivity, WCPayWebImageView;

@interface WCMallFunctionActivityView : MMUIView
{
    WCMallFunctionActivity *m_oWCMallFunctionActivity;
    id <WCMallFunctionActivityViewDelegate> m_delegate;
    UIImageView *m_oPreImageView;
    WCPayWebImageView *activityIconView;
    double m_height;
}

+ (unsigned long long)rowCount;
+ (double)width;
+ (double)height;
@property(retain, nonatomic) UIImageView *m_oPreImageView; // @synthesize m_oPreImageView;
@property(nonatomic) __weak id <WCMallFunctionActivityViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) WCMallFunctionActivity *m_oWCMallFunctionActivity; // @synthesize m_oWCMallFunctionActivity;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initView;
- (void)OnButtonDown;
- (void)dealloc;
- (id)initWithFunctionActivity:(id)arg1 dynamicHeight:(double)arg2;

@end

