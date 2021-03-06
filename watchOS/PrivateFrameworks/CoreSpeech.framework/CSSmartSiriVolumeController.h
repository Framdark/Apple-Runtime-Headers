//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAlarmMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeDelegate-Protocol.h>
#import <CoreSpeech/CSTimerMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVolumeMonitorDelegate-Protocol.h>

@class CSXPCClient, NSString;
@protocol CSSmartSiriVolumeControllerDelegate, OS_dispatch_queue;

@interface CSSmartSiriVolumeController : NSObject <CSAlarmMonitorDelegate, CSTimerMonitorDelegate, CSVolumeMonitorDelegate, CSSmartSiriVolumeDelegate>
{
    id <CSSmartSiriVolumeControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSXPCClient *_xpcClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSSmartSiriVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_createXPCClientConnectionIfNeeded;
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(int)arg1;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(int)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
- (void)CSVolumeMonitor:(id)arg1 didReceiveAlarmVolumeChanged:(float)arg2;
- (void)CSVolumeMonitor:(id)arg1 didReceiveMusicVolumeChanged:(float)arg2;
- (void)CSTimerMonitor:(id)arg1 didReceiveTimerChanged:(int)arg2;
- (void)CSAlarmMonitor:(id)arg1 didReceiveAlarmChanged:(int)arg2;
- (float)getEstimatedTTSVolume;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

