//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DACalDAV/NSObject-Protocol.h>

@class NSString, REMObjectID;
@protocol DACalDAViCalItemUpdatableBackingModel;

@protocol DACalDAViCalItemBackingModel <NSObject>
@property(readonly, nonatomic) NSString *externalModificationTag;
@property(readonly, nonatomic) NSString *daCalendarItemUniqueIdentifier;
@property(readonly, nonatomic) REMObjectID *objectID;
- (id <DACalDAViCalItemUpdatableBackingModel>)updatableBackingModel;
@end

