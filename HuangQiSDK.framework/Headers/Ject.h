//
//  Ject.h
//  GT
//
//  Created by Jone Yin on 2017/12/26.
//  Copyright © 2017年 Gotell. All rights reserved.
//

#import <Foundation/Foundation.h>

@import FonSDKConnect;
@interface Ject : NSObject
@property (strong, nonatomic) FonSDKConnect *fonConnect;

- (void)installMobileConfig;
- (void)start;
- (void)stop;
@end
