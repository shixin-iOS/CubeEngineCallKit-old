//
//  CubeControlAction.h
//  CubeEngineCallKit
//
//  Created by jianchengpan on 2018/5/30.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#ifndef CubeControlAction_h
#define CubeControlAction_h

typedef NS_ENUM(NSInteger,CubeControlAction){
	CubeControlActionUnknown = -1,	//未知操作
	CubeControlActionHear,		//禁听操作
	CubeControlActionVMute,		//禁视操作
	CubeControlActionMute,		//禁言操作
	CubeControlActionVoice,		//语音入会
	CubeControlActionVideo,		//视频入会
	CubeControlActionKick,		//踢人操作
	CubeControlActionSpeaker,	//主讲人变更
	CubeControlActionPresenter,	//主持人变更
	
};

#endif /* CubeControlAction_h */
