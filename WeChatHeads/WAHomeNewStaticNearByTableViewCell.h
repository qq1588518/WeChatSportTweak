//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class DotLoadingView, UIImageView, UILabel, UIView, WAHeaderStackDisplayView, WANearByInfo;

@interface WAHomeNewStaticNearByTableViewCell : MMTableViewCell
{
    unsigned long long _status;
    UILabel *_titleLabel;
    UIView *_normalContentView;
    WAHeaderStackDisplayView *_headerStackView;
    UILabel *_numberLabel;
    UIImageView *_arrowImageView;
    UIView *_loadingContentView;
    DotLoadingView *_loadingView;
    UIView *_retryContentView;
    UIImageView *_retryImageView;
    WANearByInfo *_info;
}

@property(nonatomic) __weak WANearByInfo *info; // @synthesize info=_info;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UIView *retryContentView; // @synthesize retryContentView=_retryContentView;
@property(retain, nonatomic) DotLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *loadingContentView; // @synthesize loadingContentView=_loadingContentView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) WAHeaderStackDisplayView *headerStackView; // @synthesize headerStackView=_headerStackView;
@property(retain, nonatomic) UIView *normalContentView; // @synthesize normalContentView=_normalContentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)fixLabelWidth:(id)arg1;
- (void)fillNearByInfo:(id)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

