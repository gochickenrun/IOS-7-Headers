/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, TKStyleProvider, TKVibrationRecorderProgressView, UIButton, UIImage, UIImageView;

@interface TKVibrationRecorderControlsView : UIView
{
    BOOL _leftButtonEnabled;
    BOOL _rightButtonEnabled;
    id <TKVibrationRecorderControlsViewDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
    int _leftButtonColor;
    int _rightButtonColor;
    NSString *_leftButtonTitle;
    NSString *_rightButtonTitle;
    UIImage *_leftButtonIcon;
    UIImage *_rightButtonIcon;
    TKVibrationRecorderProgressView *_progressView;
    TKStyleProvider *_styleProvider;
    UIImageView *_leftBackgroundImageView;
    UIImageView *_rightBackgroundImageView;
}

@property(retain, nonatomic, setter=_setRightBackgroundImageView:) UIImageView *_rightBackgroundImageView; // @synthesize _rightBackgroundImageView;
@property(retain, nonatomic, setter=_setLeftBackgroundImageView:) UIImageView *_leftBackgroundImageView; // @synthesize _leftBackgroundImageView;
@property(retain, nonatomic, setter=_setStyleProvider:) TKStyleProvider *_styleProvider; // @synthesize _styleProvider;
@property(retain, nonatomic, setter=_setProgressView:) TKVibrationRecorderProgressView *_progressView; // @synthesize _progressView;
@property(nonatomic, getter=_isRightButtonEnabled, setter=_setRightButtonEnabled:) BOOL _rightButtonEnabled; // @synthesize _rightButtonEnabled;
@property(nonatomic, getter=_isLeftButtonEnabled, setter=_setLeftButtonEnabled:) BOOL _leftButtonEnabled; // @synthesize _leftButtonEnabled;
@property(retain, nonatomic, setter=_setRightButtonIcon:) UIImage *_rightButtonIcon; // @synthesize _rightButtonIcon;
@property(retain, nonatomic, setter=_setLeftButtonIcon:) UIImage *_leftButtonIcon; // @synthesize _leftButtonIcon;
@property(copy, nonatomic, setter=_setRightButtonTitle:) NSString *_rightButtonTitle; // @synthesize _rightButtonTitle;
@property(copy, nonatomic, setter=_setLeftButtonTitle:) NSString *_leftButtonTitle; // @synthesize _leftButtonTitle;
@property(nonatomic, setter=_setRightButtonColor:) int _rightButtonColor; // @synthesize _rightButtonColor;
@property(nonatomic, setter=_setLeftButtonColor:) int _leftButtonColor; // @synthesize _leftButtonColor;
@property(retain, nonatomic, setter=_setRightButton:) UIButton *_rightButton; // @synthesize _rightButton;
@property(retain, nonatomic, setter=_setLeftButton:) UIButton *_leftButton; // @synthesize _leftButton;
@property(nonatomic) id <TKVibrationRecorderControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)clearAllVibrationComponents;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;
@property(nonatomic) int roundedCornersCompensationDelayMode;
@property(nonatomic) double currentTimeInterval;
- (void)_buttonTapped:(id)arg1;
@property(nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;
@property(nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;
- (void)setLeftButtonColor:(int)arg1 title:(id)arg2 icon:(id)arg3 enabled:(BOOL)arg4 rightButtonColor:(int)arg5 title:(id)arg6 icon:(id)arg7 enabled:(BOOL)arg8;
- (void)_setLeftButtonColor:(int)arg1 title:(id)arg2 icon:(id)arg3 enabled:(BOOL)arg4 rightButtonColor:(int)arg5 title:(id)arg6 icon:(id)arg7 enabled:(BOOL)arg8;
- (id)_newButtonWithColor:(int)arg1 title:(id)arg2 icon:(id)arg3 enabled:(BOOL)arg4 edgeInsets:(struct UIEdgeInsets)arg5 parentView:(id)arg6;
- (void)dealloc;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
