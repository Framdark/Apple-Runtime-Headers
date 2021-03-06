//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemExtensions/NSObject-Protocol.h>

@class NSData, NSString, OSSystemExtensionProperties;

@protocol _OSSystemExtensionClientToServerInterface <NSObject>
- (void)deactivateExtensionWithIdentifier:(NSString *)arg1 authorization:(NSData *)arg2 replyHandler:(void (^)(long long, NSError *))arg3;
- (void)continueActivatingExtensionWithExistingProperties:(OSSystemExtensionProperties *)arg1;
- (void)activateExtensionWithIdentifer:(NSString *)arg1;
@end

