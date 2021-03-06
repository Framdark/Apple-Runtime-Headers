//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/NSUICollectionViewCell.h>

@class GKLeaderboard, GKLeaderboardSet, NSColor, NSImageView, NSString, NSTextField, NSView;

@interface GKDashboardLeaderboardCell : NSUICollectionViewCell
{
    NSString *_bundleIdentifier;
    NSString *_imageName;
    GKLeaderboardSet *_leaderboardSet;
    GKLeaderboard *_leaderboard;
    NSImageView *_iconView;
    NSTextField *_titleLabel;
    NSTextField *_countLabel;
    NSView *_overlayView;
    NSColor *_titleLabelColor;
    NSString *_lastAppearanceName;
}

@property(retain, nonatomic) NSString *lastAppearanceName; // @synthesize lastAppearanceName=_lastAppearanceName;
@property(retain, nonatomic) NSColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) NSTextField *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property(retain, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)canBecomeFocused;
- (void)updateOverlay;
- (void)updateImage;
- (void)updateRank;
@property(readonly, nonatomic) NSView *popoverSourceView;
- (void)dealloc;
- (void)updateLayer;
- (void)awakeFromNib;

@end

