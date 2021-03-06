//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVKit/_TVDigitEntryViewController.h>

#import <ATVLegacyContentKit/_TVDigitEntryViewControllerDelegate-Protocol.h>

@class NSString;

@interface TVLJSPINEntryControl : _TVDigitEntryViewController <_TVDigitEntryViewControllerDelegate>
{
    CDUnknownBlockType _submitBlock;
    CDUnknownBlockType _cancelBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
- (void)digitEntryViewControllerDidCancel:(id)arg1;
- (void)digitEntryViewControllerDidFinish:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNumberOfDigits:(unsigned long long)arg1 userEditable:(_Bool)arg2 showsDigits:(_Bool)arg3 title:(id)arg4 prompt:(id)arg5 initialPINCode:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

