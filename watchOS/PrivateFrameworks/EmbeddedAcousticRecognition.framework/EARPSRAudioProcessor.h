//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EARPSRAudioProcessorDelegate, OS_dispatch_queue;

@interface EARPSRAudioProcessor : NSObject
{
    struct shared_ptr<quasar::PSRAudioProcessor> _audioProcessor;
    struct SystemConfig _sysConfig;
    unsigned int _sampleRate;
    NSString *_configRoot;
    id <EARPSRAudioProcessorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <EARPSRAudioProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *configRoot; // @synthesize configRoot=_configRoot;
- (void)dealloc;
- (void)_startComputeTask;
- (void)resetForNewRequest;
- (void)endAudio;
- (void)addAudio:(id)arg1;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned int)arg3 delegate:(id)arg4 queue:(id)arg5;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned int)arg3 delegate:(id)arg4;

@end

