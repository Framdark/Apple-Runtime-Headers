//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKLeaderboard, GKPlayer, GKScore, GKTournamentDefinition, GKTournamentInternal, GKTournamentParticipant, NSDate, NSString, NSURL;
@protocol GKCustomTournamentDelegate;

@interface GKTournament : NSObject <NSSecureCoding>
{
    GKTournamentDefinition *_tournamentDefinition;
    GKScore *_bestScore;
    GKPlayer *_winningPlayer;
    GKTournamentParticipant *_localParticipant;
    GKLeaderboard *_leaderboard;
    NSObject<GKCustomTournamentDelegate> *_customTournamentDelegate;
    GKTournamentInternal *_internal;
}

+ (_Bool)supportsSecureCoding;
+ (void)notifyPlayerForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)lookForAcceptedCustomTournament;
+ (id)defaultCustomTournamentForTournamentDefinition:(id)arg1;
+ (void)loadTournamentWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain) GKTournamentInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) NSObject<GKCustomTournamentDelegate> *customTournamentDelegate; // @synthesize customTournamentDelegate=_customTournamentDelegate;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKTournamentParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(retain, nonatomic) GKPlayer *winningPlayer; // @synthesize winningPlayer=_winningPlayer;
@property(retain, nonatomic) GKScore *bestScore; // @synthesize bestScore=_bestScore;
@property(retain, nonatomic) GKTournamentDefinition *tournamentDefinition; // @synthesize tournamentDefinition=_tournamentDefinition;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)getShareURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)declineInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acceptInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verifyPlayerForMatchmaking:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScoresWithScope:(int)arg1 range:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getTournamentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadParticipantsWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getLocalParticipantWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool registrationOpen;
- (void)getFriendCountForGroup:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTotalPlayerCountForGroup:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resumePlayWithTryToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginPlayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resignFromTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerPlayerInGroup:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportProgressScore:(int)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportScore:(int)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) double duration; // @dynamic duration;
@property(retain, nonatomic) NSURL *inviteURLForMessages; // @dynamic inviteURLForMessages;
@property(readonly, nonatomic) int maxPlayers; // @dynamic maxPlayers;
@property(readonly, nonatomic) int maxReplays; // @dynamic maxReplays;
@property(readonly, nonatomic) int minPlayers; // @dynamic minPlayers;
@property(readonly, nonatomic) NSDate *nextTournamentBeginDate; // @dynamic nextTournamentBeginDate;
@property(readonly, nonatomic) NSString *nextTournamentID; // @dynamic nextTournamentID;
@property(readonly, nonatomic) int playerCount; // @dynamic playerCount;
@property(readonly, nonatomic) int randomSeed; // @dynamic randomSeed;
@property(readonly, nonatomic) NSDate *registrationBeginDate; // @dynamic registrationBeginDate;
@property(readonly, nonatomic) NSDate *registrationEndDate; // @dynamic registrationEndDate;
@property(readonly, nonatomic) int scoringMethod; // @dynamic scoringMethod;
@property(readonly, nonatomic) NSDate *tournamentBeginDate; // @dynamic tournamentBeginDate;
@property(readonly, nonatomic) NSDate *tournamentEndDate; // @dynamic tournamentEndDate;
@property(readonly, nonatomic) int tournamentError; // @dynamic tournamentError;
@property(readonly, nonatomic) NSString *tournamentID; // @dynamic tournamentID;
@property(readonly, nonatomic) NSString *tournamentName; // @dynamic tournamentName;
@property(readonly, nonatomic) int tournamentState; // @dynamic tournamentState;

@end

