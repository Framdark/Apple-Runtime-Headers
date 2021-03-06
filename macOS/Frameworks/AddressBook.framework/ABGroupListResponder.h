//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

@class ABGroupListController;
@protocol ABUserInterfaceAction;

@interface ABGroupListResponder : NSResponder
{
    ABGroupListController *_groupListController;
    id <ABUserInterfaceAction> _createGroupAction;
}

- (void)sendEmailToGroup:(id)arg1;
- (void)editSmartGroup:(id)arg1;
- (void)renameGroup:(id)arg1;
- (void)createGroup:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithGroupListController:(id)arg1 groupListActions:(id)arg2;

@end

