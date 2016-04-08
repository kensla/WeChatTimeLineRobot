/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMMQRCodeExt.h"

@class UIImageView, UILabel, CContact, NSString, UIActivityIndicatorView, UIButton, MMHeadImageView;

@interface QRCodeCardView : XXUnknownSuperclass <IMMQRCodeExt> {
	UIActivityIndicatorView* m_loadingView;
	UIImageView* m_imageQRView;
	MMHeadImageView* m_imageHeadView;
	UILabel* m_labelNickName;
	UILabel* m_labelLacation;
	UIImageView* m_sexImageView;
	CContact* m_contact;
	UILabel* changHintLabel;
	UIButton* m_bkgBtn;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) UIActivityIndicatorView* m_loadingView;
@property(readonly, assign, nonatomic) UIImageView* m_imageQRView;
-(void).cxx_destruct;
-(void)stopLoading;
-(void)startLoading;
-(void)onDownloadQRCodeFinish:(id)finish FooterWording:(id)wording;
-(void)getNextQRCode;
-(void)layoutSubviews;
-(void)initView;
-(CGSize)calSelfSize;
-(void)updateLocation;
-(float)getHeight;
-(void)fitNickName;
-(void)updateNickName;
-(void)dealloc;
-(id)initWithContact:(id)contact;
@end
