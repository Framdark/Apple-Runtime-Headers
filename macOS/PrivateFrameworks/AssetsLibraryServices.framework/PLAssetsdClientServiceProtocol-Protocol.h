//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NSURL;

@protocol PLAssetsdClientServiceProtocol <NSObject>
- (void)libraryBecameUnavailable:(NSURL *)arg1 reason:(NSError *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
- (void)resourceRepairIdentifier:(NSString *)arg1 finishedWithSuccess:(BOOL)arg2 error:(NSError *)arg3;
- (void)resourceURLReceivedForIdentifier:(NSString *)arg1 url:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)assetAvailableForIdentifier:(NSString *)arg1 success:(BOOL)arg2 error:(NSError *)arg3;
- (void)downloadFinishedForIdentifier:(NSString *)arg1 success:(BOOL)arg2 url:(NSURL *)arg3 data:(NSData *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)downloadStatusForIdentifier:(NSString *)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(NSData *)arg4 error:(NSError *)arg5;
@end

