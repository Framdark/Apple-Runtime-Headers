//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVVCMetricsManager : NSObject
{
    unsigned long long _voiceTriggerStartHostTime;
    unsigned long long _callToStartRecordHostTime;
    NSMutableDictionary *_publicMetrics;
    NSMutableDictionary *_avvcProfilingInfoDictionary;
}

+ (id)sharedManager;
+ (void)destroySharedManager;
+ (void)createSharedManager;
+ (struct CAMutex *)getLock;
- (void).cxx_destruct;
@property(retain) NSMutableDictionary *avvcProfilingInfoDictionary; // @synthesize avvcProfilingInfoDictionary=_avvcProfilingInfoDictionary;
@property(retain) NSMutableDictionary *publicMetrics; // @synthesize publicMetrics=_publicMetrics;
@property(nonatomic) unsigned long long callToStartRecordHostTime; // @synthesize callToStartRecordHostTime=_callToStartRecordHostTime;
@property(nonatomic) unsigned long long voiceTriggerStartHostTime; // @synthesize voiceTriggerStartHostTime=_voiceTriggerStartHostTime;
- (void)logProfileMetrics:(id)arg1;
- (void)logRecordRoute:(id)arg1 andPlaybackRoute:(id)arg2;
- (void)logRecordAudioFormat:(struct CAStreamBasicDescription)arg1;
- (int)resetAudioIssueDetector;
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList)arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp *)arg3;
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription)arg1 numFrames:(unsigned int)arg2;
- (_Bool)measureElapseTimeForMetric:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)retrieveProfileMetrics;
- (void)resetProfileMetrics;
- (id)getStringDate:(id)arg1;
- (id)retrieveMetrics;
- (void)dealloc;
- (id)init;

@end

