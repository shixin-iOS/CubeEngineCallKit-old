//
//  CubeConferenceControl.h
//  CubeEngineCallKit
//
//  Created by jianchengpan on 2018/5/30.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <CubeEngineFoundationKit/CubeEngineFoundationKit.h>
#import <CubeEngineCallKit/CubeControlAction.h>


@interface CubeConferenceControl : NSObject<CubeJSONObject>

/**
 控制发起者
 */
@property (nonatomic, strong) CubeUser *control;

/**
 控制目标
 */
@property (nonatomic, strong) CubeUser *controlled;

/**
 指令集 CubeConferenceControlAction
 */
@property (nonatomic, strong) NSString *action;


/**
 操作时间
 */
@property (nonatomic, assign) long long timestamp;

/*
public static class State { //结论或原因
    public int    code;
    public String desc;
}
*/

@end
