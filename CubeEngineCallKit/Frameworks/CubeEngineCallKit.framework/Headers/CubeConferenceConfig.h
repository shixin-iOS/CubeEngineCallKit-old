//
//  CubeConferenceConfig.h
//  CubeEngineCallKit
//
//  Created by jianchengpan on 2018/5/30.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <CubeEngineFoundationKit/CubeEngineFoundationKit.h>


@interface CubeConferenceConfig : CubeGroupConfig

/**
 是否容屏
 */
@property (nonatomic, assign) BOOL isMux;

/**
 强制覆盖依赖群组下关联的上一个会议
 */
@property (nonatomic, assign) BOOL force;

/**
 会议号(如果是Cisco等传统会议类型，同时会议号不为空，则创建的新会议的会议号即为App传入的会议号，不要再生成新的会议号)
 */
@property (nonatomic, copy) NSString *number;

@property (nonatomic,assign) long startTime;    //会议开始时间 (voice-conference、video-conference需设置)
@property (nonatomic,assign) long duration;     //会议时长
@property (nonatomic,assign) int maxMember;     //会议最大人数
@property (nonatomic,assign) BOOL autoNotify;   //自动通知

@end
