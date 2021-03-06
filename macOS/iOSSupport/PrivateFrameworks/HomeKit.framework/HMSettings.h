//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMSettingGroup;
@protocol HMSettingsDelegate, HMSettingsOwner;

@interface HMSettings : NSObject
{
    id <HMSettingsOwner> _owner;
}

- (void).cxx_destruct;
@property(readonly) __weak id <HMSettingsOwner> owner; // @synthesize owner=_owner;
@property __weak id <HMSettingsDelegate> delegate;
@property(readonly, getter=isControllable) BOOL controllable;
@property(readonly) HMSettingGroup *rootGroup;
- (id)initWithSettingsOwner:(id)arg1;

@end

