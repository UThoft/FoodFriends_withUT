//
//  Client.h
//  FoodFriends
//
//  Created by jin on 12-10-14.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UTClient : NSObject

//  Log in

//  Check Autolog
- (bool)checkAutolog;

//  Check Cache
- (bool)checkLogCache;

//  Check Info
- (int)checkLogInfo;


@end