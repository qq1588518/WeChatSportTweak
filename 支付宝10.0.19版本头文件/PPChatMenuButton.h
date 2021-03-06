//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class PPChatMenu, PPChatMenuController, PPChatMenuItem;

@interface PPChatMenuButton : UIButton
{
    int _menuType;
    PPChatMenuItem *_menuItem;
    PPChatMenu *_subMenu;
    double _width;
    PPChatMenuController *_menuControl;
}

@property(nonatomic) __weak PPChatMenuController *menuControl; // @synthesize menuControl=_menuControl;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) PPChatMenu *subMenu; // @synthesize subMenu=_subMenu;
@property(nonatomic) int menuType; // @synthesize menuType=_menuType;
@property(retain, nonatomic) PPChatMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void).cxx_destruct;
- (void)onTap;
- (id)hilitedBackgroundImage;
- (void)dealloc;
- (id)initWithType:(int)arg1 menuItem:(id)arg2;

@end

