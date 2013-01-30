//
//  Message.m
//  FoodFriends
//
//  Created by jin on 12-10-14.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import "UTMessage.h"

@implementation UTMessage

@synthesize messageDate;
@synthesize messageType;
@synthesize messageContent;

- (id)initWithDefaultSettings
{
    self = [super init];
    if (self)
    {
        self.messageDate    = [[NSDate alloc]init];
        self.messageType    = 0;
        self.messageContent = @"";
    }
    return self;
}

- (id)initWithAssignedSettings:(NSDate *)mesDate
                              :(int)mesType
                              :(NSObject *)mesContent
{
    self = [super init];
    if (self)
    {
        self.messageDate    = mesDate;
        self.messageType    = mesType;
        self.messageContent = mesContent;
    }
    return self;
}



@end
