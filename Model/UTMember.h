//
//  Member.h
//  FoodFriends
//
//  Created by jin on 12-10-14.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UTMember : NSObject
{
    NSString            *memberID; // 会员号
    NSString            *memberName; // 会员名
    // 会员头像
    NSString            *memberEmail; // 会员邮箱
    NSString            *memberEncryptedPassword; // 会员密码
    NSMutableDictionary *memberExtensions; // 其他信息
    
}

@end
