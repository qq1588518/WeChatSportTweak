//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface NebulaStartConfig : NSObject
{
    NSDictionary *_handlers;
}

+ (id)shared;
@property(retain, nonatomic) NSDictionary *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (_Bool)shouldStartApp:(id)arg1 params:(id)arg2 error:(id *)arg3 preferUrl:(id *)arg4;
- (id)initInPrivate;
- (id)init;

@end

