/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUICountdown, SKUICountdownView, UIColor, UIImage, UIImageView, UILabel, UIView;

@interface SKUIBrickCollectionViewCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    NSString *_accessibilityLabel;
    SKUIClientContext *_clientContext;
    SKUICountdownView *_countdownView;
    BOOL _itemImageHidden;
    } _itemImageInsets;
    UIImageView *_itemImageView;
    UIImageView *_overlayImageView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property(copy) NSString * accessibilityLabel;
@property(retain) SKUIClientContext * clientContext;
@property(retain) SKUICountdown * countdown;
@property(retain) UIImage * itemImage;
@property(getter=isItemImageHidden) BOOL itemImageHidden;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } itemImageInsets;
@property(readonly) UIView * itemImageView;
@property(copy) NSString * title;

- (void).cxx_destruct;
- (void)_reloadHighlight;
- (void)_removeOverlay;
- (id)accessibilityLabel;
- (id)clientContext;
- (id)countdown;
- (BOOL)isItemImageHidden;
- (id)itemImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })itemImageInsets;
- (id)itemImageView;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setCountdown:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemImageHidden:(BOOL)arg1;
- (void)setItemImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
