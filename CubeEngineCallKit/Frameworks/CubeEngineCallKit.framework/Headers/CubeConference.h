//
//  CubeConference.h
//  CubeEngineCallKit
//
//  Created by Ashine on 2018/5/17.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <CubeEngineFoundationKit/CubeEngineFoundationKit.h>
#import <CubeEngineFoundationKit/CubeGroup.h>
#import <CubeEngineCallKit/CubeConferenceControl.h>

@interface CubeConference : CubeGroup<CubeJSONObject>

@property (nonatomic,copy) NSString *host;      //会议服务器
@property (nonatomic,assign) int port;          //普通端口5060
@property (nonatomic,assign) int sslPort;       //加密端口5061
@property (nonatomic,assign) int wsPort;
@property (nonatomic,assign) int wssPort;
@property (nonatomic,assign) int number;        //会议号
@property (nonatomic,assign) long startTime;    //会议开始时间 (voice-conference、video-conference需设置)
@property (nonatomic,assign) long duration;     //会议时长
@property (nonatomic,assign) int maxMember;     //会议最大人数
@property (nonatomic,assign) BOOL autoNotify;   //自动通知
@property (nonatomic,copy) NSString *domain;
@property (nonatomic,strong) NSMutableArray<CubeConferenceControl *> *actions;  //成员会控动作

@property (nonatomic,strong) NSMutableDictionary *status;  //会议成员状态 hashMap <string , MemberStatus>

- (instancetype)initWithGroupType:(NSString *)type withDisplayName:(NSString *)displayName;

@end
