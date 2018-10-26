//
//  CubeCallSession.h
//  CubeEngineCallKit
//
//  Created by Ashine on 2018/5/14.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CubeEngineCallKit/CubeCallEnum.h>
#import <CubeEngineFoundationKit/CubeEngineFoundationKit.h>

@class CubeUser;

@interface CubeCallSession : NSObject<CubeJSONObject>
/**
 * 主叫
 */
@property (nonatomic,strong) CubeUser *caller;

/**
 * 被叫
 */
@property (nonatomic,strong) CubeUser *callee;

/**
 * 当前会话是否为主叫
 */
@property (nonatomic,assign) BOOL initiated;

/**
 * 是否开启视频
 */
@property (nonatomic,assign) BOOL videoEnabled;

/**
 * 呼叫方向
 */
@property (nonatomic,assign) CubeCallDirection callDirection;

/**
 * 呼叫状态
 */
@property (nonatomic,assign) CubeCallState callState;

/**
 * 开始通话时间
 */
@property (nonatomic,assign) long startTime;

/**
 * 结束通话时间
 */
@property (nonatomic,assign) long endTime;
/**
 * 主叫行程
 */
@property (nonatomic,assign) long callerLatency;

/**
 * 被叫行程
 */
@property (nonatomic,assign) long calleeLatency;

/**
 * 挂掉动作
 */
@property (nonatomic,copy) NSString *CallAction;

+(CubeCallSession *)callSessionWithCaller:(CubeUser *)caller andCallee:(CubeUser *)callee andVideoEnable:(BOOL)videoEnable;

@end
