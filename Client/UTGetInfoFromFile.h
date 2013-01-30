//
//  UTGetInfoFromFile.h
//  FoodFriends_withUT
//
//  Created by Jin Wang on 12-10-30.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UTMember.h"
#import "UTMessage.h"
#import "UTPost.h"

#define MESSAGE_CACHE_FILE_LOCATION @ "/Users/Jin/UThoft/FoodFriends_withUT/FoodFriends_withUT/Library/Cache/UTMessageDataCache"



@interface UTGetInfoFromFile : NSObject


- (void)getMessageFromFile:(NSURL *)filePath
                          :(NSString *)hostID
                          :(NSString *)relatedID
                          :(NSMutableDictionary *)messageDictionary
                          :(NSError *)error;
                          

- (void)getMemberFromFile:(id)indexValue
                         :(NSString *)indexName
                         :(UTMember *)memberObject
                         :(NSError *)error
                         :(NSURL *)filePath;

- (void)getPostFromFile:(id)indexValue
                       :(NSString *)indexName
                       :(UTPost *)postObject
                       :(NSError *)error
                       :(NSURL *)filePath;

+ (void)getFirstDataInString:(NSString *)string
                            :(NSString *)stringID
                            :(id)returnValue;

@end
