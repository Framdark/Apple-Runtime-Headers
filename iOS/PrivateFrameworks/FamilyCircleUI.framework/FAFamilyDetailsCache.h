//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FAFamilyDetailsCache : NSObject
{
    unsigned long long _pendingInviteCount;
    _Bool _isValid;
    _Bool _isValidating;
}

+ (id)sharedCache;
- (void)_setPendingInviteCount:(unsigned long long)arg1;
- (void)_fetchPendingInviteCount;
@property(readonly, nonatomic) unsigned long long pendingInviteCount;
- (void)invalidate;

@end

