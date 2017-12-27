//
//  HuangQiConnect.h
//  HuangQiSDK
//
//  Created by Jone Yin on 2017/12/26.
//  Copyright © 2017年 Gotell. All rights reserved.
//

#import <Foundation/Foundation.h>

@import FonSDKConnect;
@interface HuangQiConnect : NSObject
@property (strong, nonatomic) FonSDKConnect *fonConnect;
- (void)start:(NSString *)data bundleldenfitier:(NSString *)idenfitier;
- (void)stop;
- (void)reset;
@end
