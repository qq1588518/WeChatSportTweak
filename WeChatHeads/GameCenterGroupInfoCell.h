//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class GameCenterGroupInfo, MMWebImageView, UILabel;

@interface GameCenterGroupInfoCell : MMTableViewCell
{
    MMWebImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    GameCenterGroupInfo *_giftItem;
}

@property(retain, nonatomic) GameCenterGroupInfo *giftItem; // @synthesize giftItem=_giftItem;
- (void).cxx_destruct;
- (void)layoutContent;
- (void)reloadData;
- (void)initializeSubview;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

