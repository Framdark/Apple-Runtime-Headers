//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (VVError)
+ (id)errorWithStreamDomain:(long)arg1 code:(long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
- (_Bool)shouldPresentErrorForTaskType:(int)arg1;
- (_Bool)isSecurityError;
- (_Bool)isServerError;
- (_Bool)isConnectivityError;
- (_Bool)isInvalidSubscriberError;
- (_Bool)isNewPasswordError;
- (_Bool)isExpiredPasswordError;
- (_Bool)isPasswordMismatchError;
- (_Bool)isStreamDomain:(long)arg1 error:(long)arg2;
- (_Bool)isEqualToError:(id)arg1;
@end

