/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@class UIImageView;

@interface PBBridgeProgressView : UIView {
    UIImageView *_appleLogo;
    float _currentProgress;
    unsigned int _style;
}

@property(retain) UIImageView * appleLogo;
@property float currentProgress;
@property unsigned int style;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_size;
- (float)_tickLength;
- (id)appleLogo;
- (float)currentProgress;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)setAppleLogo:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)setStyle:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)style;

@end
