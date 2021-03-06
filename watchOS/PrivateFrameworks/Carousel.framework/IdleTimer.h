//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IdleReason, NSMutableArray, NSString;

@interface IdleTimer : NSObject
{
    CDUnknownBlockType _idleBlock;
    CDUnknownBlockType _unidleBlock;
    NSMutableArray *_reasons;
    struct os_unfair_recursive_lock_s *_rlockp;
    NSString *_action;
    _Bool _idled;
    _Bool _enabled;
    _Bool _forcedToPresence;
    IdleReason *_activeReason;
}

- (void).cxx_destruct;
- (void)unidle;
- (void)idle;
- (_Bool)removeReason:(id)arg1;
- (_Bool)setIdleReason:(id)arg1 seconds:(double)arg2;
@property(readonly, nonatomic) IdleReason *activeReason;
@property(nonatomic, getter=isForcedToPresence) _Bool forcedToPresence;
@property(nonatomic) _Bool enabled;
@property(nonatomic) _Bool idled;
@property(retain, nonatomic) NSString *action;
- (id)description;
- (id)init;
- (id)initWithAction:(id)arg1 idleBlock:(CDUnknownBlockType)arg2 unidleBlock:(CDUnknownBlockType)arg3 rlockp:(struct os_unfair_recursive_lock_s *)arg4;

@end

