//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AntSpmInfo : NSObject
{
    NSString *_spm;
    NSString *_entityId;
    NSObject *_page;
    NSArray *_params;
}

@property(copy, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSObject *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(copy, nonatomic) NSString *spm; // @synthesize spm=_spm;
- (void).cxx_destruct;
- (id)initWithSpm:(id)arg1 entityId:(id)arg2 page:(id)arg3 params:(id)arg4;

@end

