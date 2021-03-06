//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUBaseListItem.h"

#import "AUCheckBoxListItemModelDelegate.h"

@class AUCheckBox, NSString;

@interface AUCheckBoxListItem : AUBaseListItem <AUCheckBoxListItemModelDelegate>
{
    id <AUCheckBoxListItemDelegate> _delegate;
    AUCheckBox *_checkboxView;
}

+ (double)cellHeight;
@property(retain, nonatomic) AUCheckBox *checkboxView; // @synthesize checkboxView=_checkboxView;
@property(nonatomic) __weak id <AUCheckBoxListItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic, getter=isDisableCheck) _Bool disableCheck;
@property(nonatomic, getter=isChecked) _Bool checked;
- (void)checkboxValueChanged:(id)arg1;
- (void)setTag:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

