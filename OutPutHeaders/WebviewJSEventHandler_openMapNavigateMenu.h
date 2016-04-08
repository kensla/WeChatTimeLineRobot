/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WebviewJSEventHandlerBase.h"
#import "INavigateLogicControllerExt.h"
#import "WeChat-Structs.h"
#import "NavigateLogicControllerDelegate.h"

@class NavigateLogicController, NSString;

@interface WebviewJSEventHandler_openMapNavigateMenu : WebviewJSEventHandlerBase <INavigateLogicControllerExt, NavigateLogicControllerDelegate> {
	NavigateLogicController* _navigateLogicController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)delayNotifyCancel;
-(void)delayNotifyOK;
-(void)onMapItemClickOrCancel:(BOOL)cancel;
-(BOOL)isValidCoordinate:(XXStruct_gLbvpC)coordinate;
-(void)onPresentViewControlelr:(id)controlelr Animated:(BOOL)animated;
-(void)showNavigateMenu:(id)menu topMapType:(unsigned)type;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
@end
