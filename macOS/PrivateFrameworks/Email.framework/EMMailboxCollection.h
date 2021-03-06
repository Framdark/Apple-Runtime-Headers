//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Email/EMCollection.h>

#import <Email/NSSecureCoding-Protocol.h>

@class EMMailboxRepository;

@interface EMMailboxCollection : EMCollection <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailbox:(id)arg1 repository:(id)arg2;
- (id)initWithMailbox:(id)arg1;
- (id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2 repository:(id)arg3;
- (id)initWithAccount:(id)arg1 topLevelOnly:(BOOL)arg2;
- (id)initWithObjectID:(id)arg1 query:(id)arg2;
- (void)setRepository:(id)arg1;
@property(readonly, nonatomic) EMMailboxRepository *repository;

@end

