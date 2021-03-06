//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassKit/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CLSAuthTreeNode : NSObject <NSSecureCoding>
{
    NSString *_statusID;
    NSString *_identifier;
    long long _status;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *statusID; // @synthesize statusID=_statusID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusID:(id)arg1 identifier:(id)arg2 status:(long long)arg3;

@end

