//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZTExpressionNode.h"

@class NSString;

@interface VZTIdentifierNode : VZTExpressionNode
{
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)compute:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

