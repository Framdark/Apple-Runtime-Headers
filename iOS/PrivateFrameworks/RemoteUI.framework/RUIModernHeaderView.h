//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBHeaderView.h>

#import <RemoteUI/RUIHeader-Protocol.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface RUIModernHeaderView : OBHeaderView <RUIHeader>
{
    UILabel *_headerLabel;
    UILabel *_detailLabel;
    NSLayoutConstraint *_heightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (id)initWithAttributes:(id)arg1;
- (double)bottomPadding;
- (double)iconToHeaderLabelPadding;
- (double)iconHeight;
- (double)calculateHeight;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

