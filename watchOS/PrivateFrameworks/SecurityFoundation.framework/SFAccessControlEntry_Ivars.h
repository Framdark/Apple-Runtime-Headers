//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFAccessControlEntry_Ivars : NSObject
{
    NSString *bundleID;
    struct {
        unsigned int isOwner:1;
        unsigned int canRead:1;
        unsigned int canWrite:1;
    } accessControlEntryFlags;
}

- (void).cxx_destruct;

@end

