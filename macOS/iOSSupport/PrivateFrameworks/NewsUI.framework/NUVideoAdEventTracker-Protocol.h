//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NUVideoAdMetadata;

@protocol NUVideoAdEventTracker <NSObject>

@optional
- (void)userEngagedWithCallToActionOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)userSkippedPlaybackOfVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackFinishedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackPausedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)playbackStartedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)loadingFinishedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
- (void)impressionThresholdReachedForVideoAdWithMetadata:(NUVideoAdMetadata *)arg1;
@end

