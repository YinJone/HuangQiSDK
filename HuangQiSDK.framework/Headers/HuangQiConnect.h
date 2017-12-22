//
//  HuangQiConnect.h
//  HuangQiSDK
//
//  Created by Jone Yin on 2017/11/10.
//  Copyright © 2017年 Gotell. All rights reserved.
//

#import <Foundation/Foundation.h>

@import FonSDKConnect;
@import WisprSDK;

@interface HuangQiConnect : NSObject<FonSDKConnectDelegate>

-(void)start:(NSString *)data;
-(void)stop;
-(void)reset;

@end
