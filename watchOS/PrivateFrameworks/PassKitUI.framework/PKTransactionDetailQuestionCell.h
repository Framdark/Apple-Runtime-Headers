//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, PKContinuousButton, PKPaymentTransaction, UIImageView, UILabel;
@protocol PKTransactionDetailQuestionCellDelegate;

@interface PKTransactionDetailQuestionCell : UITableViewCell
{
    UILabel *_title;
    UILabel *_message;
    PKContinuousButton *_leadingButton;
    PKContinuousButton *_trailingButton;
    UIImageView *_imageView;
    _Bool _isTemplateLayout;
    PKPaymentTransaction *_transaction;
    NSString *_submittingAnswer;
    _Bool _smallDevice;
    id <PKTransactionDetailQuestionCellDelegate> _questionDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PKTransactionDetailQuestionCellDelegate> questionDelegate; // @synthesize questionDelegate=_questionDelegate;
- (void)_enableButtons:(_Bool)arg1;
- (void)_leadingButtonTapped:(id)arg1;
- (void)_trailingButtonTapped:(id)arg1;
- (void)setTransaction:(id)arg1 submittingAnswer:(id)arg2;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

