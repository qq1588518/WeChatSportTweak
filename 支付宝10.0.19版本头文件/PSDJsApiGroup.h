//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface PSDJsApiGroup : NSObject
{
    NSString *_groupId;
    NSMutableDictionary *_jsApisDict;
}

@property(retain, nonatomic) NSMutableDictionary *jsApisDict; // @synthesize jsApisDict=_jsApisDict;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end

