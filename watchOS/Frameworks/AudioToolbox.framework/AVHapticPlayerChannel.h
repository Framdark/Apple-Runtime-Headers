//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HapticClient;

@interface AVHapticPlayerChannel : NSObject
{
    unsigned int _chanID;
    unsigned int _behavior;
    HapticClient *_client;
}

- (void).cxx_destruct;
@property __weak HapticClient *client; // @synthesize client=_client;
@property unsigned int chanID; // @synthesize chanID=_chanID;
- (_Bool)resetAtTime:(double)arg1 error:(id *)arg2;
- (_Bool)scheduleParameterCurve:(unsigned int)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id *)arg4;
- (_Bool)setParameter:(unsigned int)arg1 value:(float)arg2 atTime:(double)arg3 error:(id *)arg4;
- (_Bool)clearEvents:(double)arg1 error:(id *)arg2;
- (_Bool)stopEvent:(unsigned int)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)sendEvents:(id)arg1 atTime:(double)arg2 error:(id *)arg3;
- (_Bool)startEvent:(unsigned int)arg1 atTime:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(int)arg4 token:(unsigned int *)arg5 error:(id *)arg6;
- (_Bool)startEvent:(unsigned int)arg1 atTime:(double)arg2 token:(unsigned int *)arg3 error:(id *)arg4;
@property unsigned int eventBehavior;
- (void)invalidate;
- (id)initWithChannelID:(id)arg1 client:(id)arg2;

@end

