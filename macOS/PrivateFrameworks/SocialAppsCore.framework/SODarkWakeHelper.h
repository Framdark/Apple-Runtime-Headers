//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SODarkWakeHelperDelegate;

@interface SODarkWakeHelper : NSObject
{
    id <SODarkWakeHelperDelegate> _delegate;
    struct __CFRunLoopSource *_ioRunLoopSource;
}

+ (BOOL)screenShieldIsRaised;
- (void).cxx_destruct;
@property(nonatomic) struct __CFRunLoopSource *ioRunLoopSource; // @synthesize ioRunLoopSource=_ioRunLoopSource;
@property __weak id <SODarkWakeHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)init;

@end

