//
//  CubeMemberStatus.h
//  CubeEngineCallKit
//
//  Created by Ashine on 2018/6/8.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CubeEngineFoundationKit/CubeJsonObject.h>
#import <CubeEngineFoundationKit/CubeJsonUtil.h>

@interface CubeMemberStatus : NSObject<CubeJSONObject>

@property (nonatomic,assign) BOOL call;
@property (nonatomic,assign) BOOL isSpeaker;
@property (nonatomic,assign) BOOL canSpeak;
@property (nonatomic,assign) BOOL canHear;
@property (nonatomic,assign) BOOL canWatch;
@property (nonatomic,assign) BOOL videoEnabled;

@property (nonatomic,strong) NSString *deviceId;
@property (nonatomic,strong) NSString *sipName;
@property (nonatomic,strong) NSString *sipPassword;
@end
