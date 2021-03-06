//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSURLSession;
@protocol AMSMediaTokenServiceProtocol;

__attribute__((visibility("hidden")))
@interface AMSMediaTaskSharedProperties : NSObject
{
    AMSURLSession *_session;
    id <AMSMediaTokenServiceProtocol> _tokenService;
}

+ (id)sharedPropertiesMapTable;
+ (id)accessQueue;
+ (id)propertiesForMediaTask:(id)arg1;
- (void).cxx_destruct;
@property(readonly) id <AMSMediaTokenServiceProtocol> tokenService; // @synthesize tokenService=_tokenService;
@property(readonly) AMSURLSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithMediaTask:(id)arg1;

@end

