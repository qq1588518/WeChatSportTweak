//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TFHomeRecord, UIImageView, UILabel, UIView;

@interface TFHomeHistoryRecordCell : UITableViewCell
{
    id <TFHomeHistoryRecordCellDelegate> _delegate;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_toCardIndicatorView;
    long long _index;
    TFHomeRecord *_homeRecord;
    long long _cellShowMode;
    UIView *_topLineView;
    UIView *_btmLineView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *btmLineView; // @synthesize btmLineView=_btmLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) long long cellShowMode; // @synthesize cellShowMode=_cellShowMode;
@property(retain, nonatomic) TFHomeRecord *homeRecord; // @synthesize homeRecord=_homeRecord;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIImageView *toCardIndicatorView; // @synthesize toCardIndicatorView=_toCardIndicatorView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <TFHomeHistoryRecordCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)headTapped;
- (id)sepratorLineWithLocX:(double)arg1 locY:(double)arg2;
- (void)layoutBorderLine;
- (id)btmLine;
- (id)topLine;
- (double)btmLineLocX;
- (id)getSubTitleLabel;
- (id)getTitleLabel;
- (id)getToCardInciatorView;
- (id)getIconImageView;
- (void)layoutSubviews;
- (void)reset;
- (void)reloadRecordCellWithHomeRecord:(id)arg1 cellShowMode:(long long)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

