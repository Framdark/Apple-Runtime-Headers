//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSError, NSLayoutConstraint, UIActivityIndicatorView, UILabel;

@interface ASVLoadingView : UIView
{
    UILabel *_assetLoadingStatusLabel;
    UIActivityIndicatorView *_spinner;
    NSLayoutConstraint *_spinnerLeadingConstraint;
    NSError *_loadingError;
    unsigned long long _spinnerColor;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long spinnerColor; // @synthesize spinnerColor=_spinnerColor;
@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
- (void)_updateLoadingSpinner;
- (void)_updateLoadingText;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

