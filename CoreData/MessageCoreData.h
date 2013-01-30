//
//  Message.h
//  FoodFriends
//
//  Created by jin on 12-10-14.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface MessageCoreData : NSManagedObject

@property (nonatomic, retain) NSString * sender;
@property (nonatomic, retain) NSString * receiver;
@property (nonatomic, retain) NSDate * datetime;
@property (nonatomic, retain) NSString * messageId;
@property (nonatomic, retain) NSString * content;

@end
