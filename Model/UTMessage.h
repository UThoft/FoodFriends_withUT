//
//  Message.h
//  FoodFriends
//
//  Created by jin on 12-10-14.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UTMessage : NSObject
@property   (retain, nonatomic) NSDate      *messageDate; // 本地时间
@property   (nonatomic)         int         messageType; // 消息类型
@property   (retain, nonatomic) NSObject    *messageContent; // 消息内容


@end
