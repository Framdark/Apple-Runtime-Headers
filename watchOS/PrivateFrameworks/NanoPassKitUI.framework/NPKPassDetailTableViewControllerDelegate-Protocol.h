//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoPassKitUI/NSObject-Protocol.h>

@class NPKPassDetailTableViewController, NSDecimalNumber, NSString;
@protocol NPKBalanceField;

@protocol NPKPassDetailTableViewControllerDelegate <NSObject>
- (void)passDetailTableViewController:(NPKPassDetailTableViewController *)arg1 didTopUpAmount:(NSDecimalNumber *)arg2 forBalanceField:(id <NPKBalanceField>)arg3 passWithUniqueID:(NSString *)arg4;
@end

