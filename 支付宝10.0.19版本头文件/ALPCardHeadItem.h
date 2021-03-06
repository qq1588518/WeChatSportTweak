//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZListItem.h"

@class CardInfoResult, NSString;

@interface ALPCardHeadItem : VZListItem
{
    NSString *_logo;
    NSString *_backgroundColor;
    NSString *_name;
    NSString *_type;
    NSString *_cardNo;
    NSString *_integral;
    NSString *_integralUrl;
    NSString *_operation;
    NSString *_unitContext;
    NSString *_rechargeField;
    NSString *_rechargeText;
    NSString *_status;
    NSString *_backgroupImg;
    CardInfoResult *_cardInfo;
}

@property(retain, nonatomic) CardInfoResult *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(retain, nonatomic) NSString *backgroupImg; // @synthesize backgroupImg=_backgroupImg;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *rechargeText; // @synthesize rechargeText=_rechargeText;
@property(retain, nonatomic) NSString *rechargeField; // @synthesize rechargeField=_rechargeField;
@property(retain, nonatomic) NSString *unitContext; // @synthesize unitContext=_unitContext;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *integralUrl; // @synthesize integralUrl=_integralUrl;
@property(retain, nonatomic) NSString *integral; // @synthesize integral=_integral;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (id)initWithResult:(id)arg1;

@end

