//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUCellSeparatorAppearanceDefining-Protocol.h>

@class HFItem, NSArray, NSString, UIImageView, UILayoutGuide, UITextView;
@protocol HUResizableCellDelegate;

@interface HUImageAndTextCell : UITableViewCell <HUCellSeparatorAppearanceDefining, HUCellProtocol>
{
    HFItem *_item;
    UITextView *_messageTextView;
    UIImageView *_infoImageView;
    NSArray *_contentConstraints;
    UILayoutGuide *_infoImageViewTrailingMarginLayoutGuide;
    struct CGSize _imageViewRecommendedSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILayoutGuide *infoImageViewTrailingMarginLayoutGuide; // @synthesize infoImageViewTrailingMarginLayoutGuide=_infoImageViewTrailingMarginLayoutGuide;
@property(retain, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property(readonly, nonatomic) UIImageView *infoImageView; // @synthesize infoImageView=_infoImageView;
@property(nonatomic) struct CGSize imageViewRecommendedSize; // @synthesize imageViewRecommendedSize=_imageViewRecommendedSize;
@property(readonly, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)_resetContentConstraints;
@property(readonly, nonatomic) BOOL prefersSeparatorsHidden;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

