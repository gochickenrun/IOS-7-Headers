/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIGestureRecognizer.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    id <_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;
}

@property(nonatomic) id <_MKUserInteractionGestureRecognizerTouchObserver> touchObserver; // @synthesize touchObserver=_touchObserver;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end
