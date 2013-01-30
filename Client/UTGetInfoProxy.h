//
//  UTGetInfoProxy.h
//  FoodFriends_withUT
//
//  Created by Jin Wang on 12-11-1.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>

//  Please change the following default settings when you need.

#define CURRENT_METHOD_CLASS    UTGetInfoFromFile

#ifdef CURRENT_METHOD_CLASS

#define GET_MESSAGE_OBJECT      getMessageFromFile
#define GET_MEMBER_OBJECT       getMemberFromFile
#define GET_POST_OBJECT         getPostFromFile

#endif




@interface UTGetInfoProxy : NSObject
{
    id  currentMethodClass;
    SEL getMessageObjectProxy;
    SEL getMemberObjectProxy;
    SEL getPostObjectProxy;
    

    IMP getMessageObject;
    IMP getMemberObject;
    IMP getPostObject;
    
    
}

- (id)initWithDefaultDefine;
- (id)initWithSpecialClass:(id)className
                            :(SEL)getMessageFunction
                            :(SEL)getMemberFunction
                            :(SEL)getPostFunction;
- (id)getMessageOb:(NSURL *)path
                  :(NSString *)hostID
                  :(NSString *)relatedID
                  :(NSMutableDictionary *)messageDictionary
                  :(NSError *)error;



@end
