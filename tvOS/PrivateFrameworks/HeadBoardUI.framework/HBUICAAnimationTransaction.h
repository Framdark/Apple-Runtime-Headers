//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/BSTransaction.h>

#import <HeadBoardUI/CAAnimationDelegate-Protocol.h>

@class CAAnimation, CALayer, NSString;

__attribute__((visibility("hidden")))
@interface HBUICAAnimationTransaction : BSTransaction <CAAnimationDelegate>
{
    CALayer *_layer;
    CAAnimation *_animation;
    NSString *_key;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)initWithLayer:(id)arg1 animation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

