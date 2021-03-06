/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayer/MPViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MPImageCache, MPVideoView, NSArray, UIMovieChapterListView;

@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate>
{
    MPVideoView *_videoView;
    MPImageCache *_imageCache;
    unsigned int _currentMarker;
    NSArray *_chapterTimeMarkers;
    UIMovieChapterListView *_chapterListView;
    float _timeColumnWidth;
    unsigned int _haveThumbnails:1;
    unsigned int _videoOutActive:1;
}

@property(retain, nonatomic) NSArray *chapterTimeMarkers; // @synthesize chapterTimeMarkers=_chapterTimeMarkers;
@property(retain, nonatomic) MPVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) unsigned int currentMarkerIndex; // @synthesize currentMarkerIndex=_currentMarker;
- (void).cxx_destruct;
- (void)_sizeColumnsToFit;
- (void)_reloadThumbnails;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)newImageRequestWithMediaEntity:(id)arg1 timeMarker:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
@property(nonatomic) BOOL videoOutActive;
@property(nonatomic) float topPadding;
- (void)setCurrentMarker:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

