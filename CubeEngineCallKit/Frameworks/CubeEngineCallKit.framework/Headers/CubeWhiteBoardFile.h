//
//  CubeWhiteBoardFile.h
//  CubeEngineCallKit
//
//  Created by Ashine on 2018/5/29.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CubeWhiteBoardFile : NSObject

/** 文件ID */
@property (nonatomic, assign) long fileId;

/** 账号 */
@property (nonatomic, strong) NSString *acount;

/** 原始文件名 */
@property (nonatomic, strong) NSString *originFileName;

/** 文件别名 */
@property (nonatomic, strong) NSString *aliasFileName;

/** 文件长度 */
@property (nonatomic, assign) long length;

/** 文件 */
@property (nonatomic, strong) NSData *data;

/** 文件分享地址 */
@property (nonatomic, strong) NSArray *urls;

@end
