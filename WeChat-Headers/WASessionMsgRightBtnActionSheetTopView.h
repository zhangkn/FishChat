//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMBrandHeadImageView, NSString, UIButton;

@interface WASessionMsgRightBtnActionSheetTopView : UIView
{
    _Bool _isShowDetail;
    NSString *_headImageURL;
    NSString *_titleContent;
    MMBrandHeadImageView *_headImageView;
    UIButton *_titleButton;
    UIButton *_exposeButton;
    id <WASessionMsgRightBtnActionSheetTopViewDelegate> _topViewDelegate;
}

@property(nonatomic) __weak id <WASessionMsgRightBtnActionSheetTopViewDelegate> topViewDelegate; // @synthesize topViewDelegate=_topViewDelegate;
- (void).cxx_destruct;
- (void)onClickExposeBtn:(id)arg1;
- (void)onClickShowDetailBtn:(id)arg1;
- (void)layoutExposeButton;
- (void)layoutTitleButton;
- (void)layoutHeadImageView;
- (void)layoutSubviews;
- (void)initExposeButton;
- (void)initTitleButton;
- (void)initHeadImageView;
- (void)initView;
- (id)initWithShowDetail:(_Bool)arg1 headImageURL:(id)arg2 title:(id)arg3;

@end

