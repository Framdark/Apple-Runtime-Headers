//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BBSectionIcon, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface CSLTestDataProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BBSectionIcon *_sectionIcon;
    UNUserNotificationCenter *_unCenter;
    int _mostRecentRecordIdentifier;
}

- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1 id:(id)arg2 clearable:(_Bool)arg3;
- (id)initWithBundleIdentifier:(id)arg1;

@end

