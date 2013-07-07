/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class NSLayoutConstraint, UIColor, UILabel;

@interface TPStarkInCallButton : UIButton
{
    BOOL _toggledOn;
    UILabel *_buttonLabel;
    NSLayoutConstraint *_horizontalPositioningConstraint;
    int _inCallButtonType;
    UIColor *_unhighlightedBackgroundColor;
}

@property(retain) UIColor *unhighlightedBackgroundColor; // @synthesize unhighlightedBackgroundColor=_unhighlightedBackgroundColor;
@property(nonatomic) BOOL toggledOn; // @synthesize toggledOn=_toggledOn;
@property(readonly) int inCallButtonType; // @synthesize inCallButtonType=_inCallButtonType;
@property(retain) NSLayoutConstraint *horizontalPositioningConstraint; // @synthesize horizontalPositioningConstraint=_horizontalPositioningConstraint;
@property(retain) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
- (void)dealloc;
- (void)setSelected:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly) int specialLayoutType;
- (id)initForButtonType:(int)arg1;

@end
