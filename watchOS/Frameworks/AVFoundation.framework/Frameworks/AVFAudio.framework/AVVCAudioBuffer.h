//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVVCAudioBuffer : NSObject
{
    void *_impl;
}

@property(readonly) _Bool remoteVoiceActivityAvailable;
@property(readonly) unsigned char remoteVoiceActivityVAD;
@property(readonly) unsigned char remoteVoiceActivityRMS;
@property(readonly) struct AudioStreamBasicDescription *streamDescription;
@property(readonly) unsigned long long timeStamp;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription *)arg1 count:(int)arg2;
@property(readonly) struct AudioStreamPacketDescription *packetDescriptions;
@property(readonly) int packetDescriptionCount;
@property(readonly) int packetDescriptionCapacity;
@property(readonly) void *data;
@property int bytesDataSize;
@property(readonly) int bytesCapacity;
@property(readonly) int channels;
- (id)initWithAudioQueueBuffer:(struct MyAudioQueueBuffer *)arg1 channels:(int)arg2 timeStamp:(unsigned long long)arg3;
- (void)dealloc;
- (void)finalize;

@end

