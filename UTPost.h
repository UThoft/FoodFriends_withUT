//
//  Post.h
//  FoodFriends
//
//  Created by jin on 12-10-14.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UTPost : NSObject
{
    NSString    *postID; // post序号
    NSDate      *postDate; // 约会时间
    NSString    *postPlace; // 约会地点
    int         *postPeopleNumber; // 约会人数
    int         *postType; // 约会类型：你请/我请/AA
    NSMutableArray  *postAcceptedMember; // 约会接受情况
}

@end
