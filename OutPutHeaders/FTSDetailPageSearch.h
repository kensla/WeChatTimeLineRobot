/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class FTSDetailPageSearchTask, FTSBussinessResult;

@interface FTSDetailPageSearch : MMObject {
	FTSDetailPageSearchTask* _searchTask;
	FTSBussinessResult* _bussinessResult;
	int _status;
}
@property(assign, nonatomic) int status;
@property(retain, nonatomic) FTSBussinessResult* bussinessResult;
@property(retain, nonatomic) FTSDetailPageSearchTask* searchTask;
-(void).cxx_destruct;
-(BOOL)isSearchDone;
-(id)init;
@end
