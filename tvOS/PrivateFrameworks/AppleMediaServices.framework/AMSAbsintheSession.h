//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSAbsintheSession : NSObject
{
    void *_sessionRef;
    NSString *_servKey;
}

+ (id)defaultSession;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *servKey; // @synthesize servKey=_servKey;
@property(nonatomic) void *sessionRef; // @synthesize sessionRef=_sessionRef;
- (_Bool)_prepareContextWithBag:(id)arg1 error:(id *)arg2;
- (_Bool)verifyData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;
- (_Bool)clearSession;
- (id)init;

@end

