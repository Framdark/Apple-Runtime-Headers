//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface CKDPrivacyManager : NSObject
{
    NSObject<OS_dispatch_queue> *_privacyManagerQueue;
    NSMutableSet *_operations;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *privacyManagerQueue; // @synthesize privacyManagerQueue=_privacyManagerQueue;
- (void)_resetPrivacySettingsForAppContainerAccountTuple:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetPrivacySettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_init;
- (id)init;

@end

