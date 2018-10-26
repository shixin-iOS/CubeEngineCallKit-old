//
//  CubeWhiteboardSlide.h
//  CubeEngineCallKit
//
//  Created by Ashine on 2018/5/28.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CubeWhiteBoardSlide : NSObject

/**
 分享者cubeId
 */
@property (nonatomic,strong) NSString *cubeId;

/**
 白板ID
 */
@property (nonatomic,strong) NSString *whiteboardId;

/**
 原始文件md5名字
 */
@property (nonatomic,strong) NSString *alias;

/**
 原始文件大小
 */
@property (nonatomic,strong) NSString *size;

/**
 原始文件url
 */
@property (nonatomic,strong) NSString *url;

/**
 幻灯片名字
 */
@property (nonatomic,strong) NSString *origin;

/**
 幻灯片
 */
@property (nonatomic,strong) NSMutableArray *urls;

/**
 第几页
 */
@property (nonatomic,assign) int offset;

/**
 总页数
 */
@property (nonatomic,assign) int page;
@end
