/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "IDeviceRankSettingExt.h"

@class MMTableViewInfo, NSString;

@interface BraceletRankMsgSettingViewController : MMUIViewController <IDeviceRankSettingExt> {
	MMTableViewInfo* _tableView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onUpdateSettingFromSVR:(int)svr;
-(void)onLikeSwitchChange:(id)change;
-(void)onRankMsgSwitchChange:(id)change;
-(void)onTakePartInSwitchChange:(id)switchChange;
-(void)onRecordDataChange;
-(void)makeSwitchCell:(id)cell colName:(id)name action:(SEL)action on:(BOOL)on;
-(void)makeLikeMsgCell:(id)cell;
-(void)makeRankMsgCell:(id)cell;
-(void)takePartInCell:(id)cell;
-(void)makeRecordDataCell:(id)cell;
-(void)viewDidLayoutSubviews;
-(void)reloadTableView;
-(void)initView;
-(void)initData;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
@end

