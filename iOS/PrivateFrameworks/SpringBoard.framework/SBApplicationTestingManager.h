//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SBApplicationTestingManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_testEndedHandlers;
    NSMutableDictionary *_idleTimerDisableAssertions;
    NSString *_currentTestName;
    NSString *_scrollTestActiveSubtest;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *scrollTestActiveSubtest; // @synthesize scrollTestActiveSubtest=_scrollTestActiveSubtest;
@property(copy, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(readonly, nonatomic, getter=_idleTimerDisableAssertions) NSMutableDictionary *idleTimerDisableAssertions; // @synthesize idleTimerDisableAssertions=_idleTimerDisableAssertions;
- (void)_installTestEndedHandler:(CDUnknownBlockType)arg1;
- (void)_handleTestEnded;
- (void)_prepareForTestStartup:(id)arg1;
- (void)markUserLaunchInitiationTime;
- (id)init;

@end

