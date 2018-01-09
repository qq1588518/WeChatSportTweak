//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIControl.h"

@class ChatBackgroundItem, NSIndexPath;

@interface ChatBackgroundView : MMUIControl
{
    ChatBackgroundItem *m_cbItem;
    NSIndexPath *m_indexPath;
    id <ChatBackgroundViewDelegate> m_delegate;
    long long m_index;
    _Bool _bShowSelect;
}

@property(nonatomic) _Bool bShowSelect; // @synthesize bShowSelect=_bShowSelect;
@property(nonatomic) long long m_index; // @synthesize m_index;
@property(nonatomic) __weak id <ChatBackgroundViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSIndexPath *m_indexPath; // @synthesize m_indexPath;
@property(retain, nonatomic) ChatBackgroundItem *m_cbItem; // @synthesize m_cbItem;
- (void).cxx_destruct;
- (void)startDownloadingAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;
- (void)setStatus:(long long)arg1;
- (long long)getStatus;
- (void)onClick;
- (void)initViewWithData;

@end

