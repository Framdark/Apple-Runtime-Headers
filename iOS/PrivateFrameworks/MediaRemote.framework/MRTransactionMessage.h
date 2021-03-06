//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface MRTransactionMessage : MRProtocolMessage
{
    NSMutableArray *_packets;
}

- (void).cxx_destruct;
- (unsigned long long)type;
@property(readonly, nonatomic) unsigned long long name;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) NSArray *packets;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;
- (id)initWithPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2;
- (id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(id)arg3;

@end

