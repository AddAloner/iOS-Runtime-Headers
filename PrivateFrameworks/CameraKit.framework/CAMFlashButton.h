/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView;

@interface CAMFlashButton : CAMExpandableMenuButton {
    UIImageView *__glyphView;
    UIImageView *__warningIndicatorView;
    BOOL _allowsAutomaticFlash;
    BOOL _unavailable;
}

@property(readonly) UIImageView * _glyphView;
@property(readonly) UIImageView * _warningIndicatorView;
@property BOOL allowsAutomaticFlash;
@property int flashMode;
@property(getter=isUnavailable) BOOL unavailable;

- (void).cxx_destruct;
- (void)_commonCAMFlashButtonInitialization;
- (id)_glyphView;
- (id)_warningIndicatorView;
- (BOOL)allowsAutomaticFlash;
- (int)flashMode;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (int)indexForMode:(int)arg1;
- (id)initWithExpansionOrientation:(int)arg1;
- (BOOL)isUnavailable;
- (int)modeForIndex:(int)arg1;
- (int)numberOfMenuItems;
- (void)reloadData;
- (void)setAllowsAutomaticFlash:(BOOL)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setUnavailable:(BOOL)arg1;
- (BOOL)shouldIgnoreMenuInteraction;
- (id)titleForMenuItemAtIndex:(int)arg1;

@end
