//
//  CubeShareDesktop.h
//  CubeEngineCallKit
//
//  Created by 美少女 on 2018/5/24.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CubeEngineFoundationKit/CubeGroupType.h>
#import <CubeEngineFoundationKit/CubeGroup.h>

@interface CubeShareDesktop : CubeGroup
/**
 共享桌面服务器
 */
@property (nonatomic,strong) NSString * host;

/**
 共享享端口
 */
@property (nonatomic,assign) int    sharePort;

/**
 接收端口
 */
@property (nonatomic,assign) int    receivePort;

/**
 共享桌面号
 */
@property (nonatomic,assign) long    desktopId;

/**
  共享桌面成员
    CubeShareDesktopMember
 */
@property (nonatomic,strong) NSMutableArray  * members;

- (instancetype)initWithGroupType:(NSString *)groupType andDisplayName:(NSString *)displayName;
@end
