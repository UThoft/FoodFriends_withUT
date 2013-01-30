//
//  UTGetInfoProxy.m
//  FoodFriends_withUT
//
//  Created by Jin Wang on 12-11-1.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import "UTGetInfoProxy.h"
#import "UTGetInfoFromFile.h"


@implementation UTGetInfoProxy


/*
 FunctionName:initWithDefaultDefine
 Description:init the UTGetInfoProxy instance with default settings defined in UTGetInfoProxy.h.
 Parameters:
 Return:
 */
- (id)initWithDefaultDefine
{
    self = [super init];
    if (self)
    {
        currentMethodClass      = [UTGetInfoFromFile new];
        getMessageObjectProxy   = @selector(getMessageFromFile:::::);
        getMemberObjectProxy    = @selector(getMemberFromFile:::::);
        getPostObjectProxy      = @selector(getPostFromFile:::::);
        getMessageObject        = [currentMethodClass methodForSelector:getMessageObjectProxy];
        getMemberObject         = [currentMethodClass methodForSelector:getMemberObjectProxy];
        getPostObject           = [currentMethodClass methodForSelector:getPostObjectProxy];
    }
    return self;

}

/*
 FunctionName:initWithDefaultDefine
 Description:init the UTGetInfoProxy instance with default settings defined in UTGetInfoProxy.h.
 Parameters:
    className:the name of the self-define class that provide some interfaces to get information like objects of message, member or post.
 Return:
 */


- (id)initWithSpecialClass:(id)className
                            :(SEL)getMessageFunction
                            :(SEL)getMemberFunction
                            :(SEL)getPostFunction
{
    self = [super init];
    if (self)
    {
        currentMethodClass      = [className new];
        getMessageObjectProxy   = @selector(getMessageFunction);
        getMemberObjectProxy    = @selector(getMemberFunction);
        getPostObjectProxy      = @selector(getPostFunction);
        getMessageObject        = [currentMethodClass methodForSelector:getMessageObjectProxy];
        getMemberObject         = [currentMethodClass methodForSelector:getMemberObjectProxy];
        getPostObject           = [currentMethodClass methodForSelector:getPostObjectProxy];
    }
    return self;

}

- (id)getMessageOb:(NSURL *)path
                  :(NSString *)hostID
                  :(NSString *)relatedID
                  :(NSMutableDictionary *)messageDictionary
                  :(NSError *)error
{
    return getMessageObject(currentMethodClass, getMessageObjectProxy, path, hostID, relatedID, messageDictionary, error);
}

@end
