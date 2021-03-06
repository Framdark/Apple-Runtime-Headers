//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewController.h>

#import <CoreCDPUI/CoreCDPUIProtocol-Protocol.h>

@class NSArray, NSString, PUICTableHeaderFooterView;
@protocol CDPWatchOSDevicePickerDelegate;

@interface CDPWatchOSDevicePickerViewController : PUICTableViewController <CoreCDPUIProtocol>
{
    NSArray *_devices;
    NSArray *_escapeOffers;
    id <CDPWatchOSDevicePickerDelegate> _delegate;
    PUICTableHeaderFooterView *_sectionHeaderView;
    NSString *_headerTitle;
    NSString *_headerSubTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(copy, nonatomic) NSString *headerSubTitle; // @synthesize headerSubTitle=_headerSubTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)escapeOffers;
- (void)updateTableView;
- (void)viewDidLoad;
- (id)init;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2;
- (id)initWithDevices:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

