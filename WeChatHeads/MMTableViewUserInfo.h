//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface MMTableViewUserInfo : MMObject
{
    NSMutableDictionary *_dicInfo;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)getUserInfoValueForKey:(id)arg1;
- (void)addUserInfoValue:(id)arg1 forKey:(id)arg2;

@end

