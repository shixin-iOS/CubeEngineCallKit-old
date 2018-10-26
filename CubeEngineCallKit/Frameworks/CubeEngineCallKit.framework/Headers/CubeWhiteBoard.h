//
//  CubeWhiteBoard.h
//  CubeEngineCallKit
//
//  Created by Ashine on 2018/5/28.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <CubeEngineFoundationKit/CubeEngineFoundationKit.h>
#import <CubeEngineCallKit/CubeWhiteBoardSlide.h>

@interface CubeWhiteBoard : CubeGroup

@property (nonatomic,strong) NSString *whiteboardId; // super.groupId

/**
 所有人分享的幻灯片数据集
 */
@property (nonatomic,strong) NSMutableArray <CubeWhiteBoardSlide *> *whiteboardSlides;



/**
 overwrite super

 @param type 群组类型
 @param displayName 展示名字
 @return 白板实例
 */
-(instancetype)initWithGroupType:(NSString *)type withDisplayName:(NSString *)displayName;


@end
