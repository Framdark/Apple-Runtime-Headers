//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol CacheDeleteClientProtocol
- (void)clientRegisterLowDiskFailure:(NSString *)arg1 failureType:(int)arg2 isRoot:(_Bool)arg3;
- (void)clientRequestCacheableSpaceGuidance:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientUpdatePurgeable:(NSDictionary *)arg1;
- (void)clientGetState:(NSString *)arg1 replyBlock:(void (^)(id))arg2;
- (void)clientSetState:(NSDictionary *)arg1 key:(NSString *)arg2;
- (void)clientCancelPurge:(NSDictionary *)arg1;
- (void)clientPerformServiceRequest:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientPerformOperation:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientPurge:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientItemizedPurgeableSpace:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientPurgeableSpace:(NSDictionary *)arg1 replyBlock:(void (^)(NSDictionary *))arg2;
- (void)clientCheckin:(NSString *)arg1 endpoint:(NSXPCListenerEndpoint *)arg2 info:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
@end

