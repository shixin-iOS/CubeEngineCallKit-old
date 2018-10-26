//
//  CubeConferenceUtil.h
//  CubeEngineCallKit
//
//  Created by jianchengpan on 2018/5/30.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CubeEngineCallKit/CubeControlAction.h>
@interface CubeConferenceUtil : NSObject

/**
 controlaction转字符串

 @param action action
 @return 字符串
 */
+(NSString *)controlActionToString:(CubeControlAction)action;


/**
 字符串转controlaction

 @param actionString actionString
 @return action
 */
+(CubeControlAction)controlActionFromString:(NSString *)actionString;

@end
