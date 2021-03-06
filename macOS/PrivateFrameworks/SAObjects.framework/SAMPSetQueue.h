//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, SAMPCollection;

@interface SAMPSetQueue : SADomainCommand
{
}

+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setQueue;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *startPlaying;
@property(copy, nonatomic) NSArray *sort;
@property(nonatomic) BOOL shouldShuffle;
@property(nonatomic) BOOL shouldReloadQueue;
@property(nonatomic) BOOL shouldOverrideManuallyCuratedUpNext;
@property(copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property(copy, nonatomic) NSString *requesterSharedUserId;
@property(copy, nonatomic) NSString *recommendationId;
@property(retain, nonatomic) SAMPCollection *mediaItems;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSArray *filters;
@property(nonatomic) BOOL dryRun;
@property(copy, nonatomic) NSString *assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

