//
//  CubeWhiteBoardView.h
//  CubeEngineCallKit
//
//  Created by Ashine on 2018/5/29.
//  Copyright © 2018年 CubeTeam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CubeWhiteBoardView : UIView<UIWebViewDelegate>

@property (nonatomic, strong) UIWebView *webView;

@property (nonatomic, strong) UIView *maskView;

- (void)loadView;

- (void)changeFrame:(CGRect)frame;

- (void)loadWebView:(NSString *)path;

@end
