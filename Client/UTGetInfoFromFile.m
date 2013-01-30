//
//  UTGetInfoFromFile.m
//  FoodFriends_withUT
//
//  Created by Jin Wang on 12-10-30.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import "UTGetInfoFromFile.h"

@implementation UTGetInfoFromFile

- (void)getMessageFromFile:(NSURL *)filePath
                          :(NSString *)hostID
                          :(NSString *)relatedID
                          :(NSMutableDictionary *)messageDictionary
                          :(NSError *)error
                          
{
    NSString            *defaultFilePath;
    NSDate              *tempDate = [[NSDate alloc]init];
    NSString            *tempType;
    NSObject            *tempObject;
    UTMessage           *tempMessage;
    NSString            *senderID;
    NSString            *receiverID;
    if (filePath == nil)
    {
         defaultFilePath = MESSAGE_CACHE_FILE_LOCATION;
    }
    else
    {
        defaultFilePath = [filePath absoluteString];
    }
    NSLog(@"getMessageFromFile: filePath: %@", defaultFilePath);
    NSLog(@"getMessageFromFile: hostID: %@", hostID);
    NSLog(@"getMessageFromFile: relatedID: %@", relatedID);
    NSMString    *stringFromFileAtURL = [[NSString alloc]initWithContentsOfFile:defaultFilePath
                                                                     encoding:NSUTF8StringEncoding
                                                                        error:&error];
    NSLog(@"getMessageFromFile: the length of the file is %d", [stringFromFileAtURL length]);
    while (true)
    {
        NSLog(@"enter");
        [UTGetInfoFromFile getFirstDataInString:stringFromFileAtURL
                                               :@"messageDate"
                                               :tempDate];
        NSLog(@"receive %@", tempDate);
        if (tempDate == nil)
        {
            break;
        }
        else
        {
            
        }
        NSLog(@"getMessageFromFile: the length of the file after messageDate is %d", [stringFromFileAtURL length]);
        [UTGetInfoFromFile getFirstDataInString:stringFromFileAtURL
                                               :@"messageType"
                                               :tempType];
        [UTGetInfoFromFile getFirstDataInString:stringFromFileAtURL
                                               :@"messageFromMemberID"
                                               :senderID];
        [UTGetInfoFromFile getFirstDataInString:stringFromFileAtURL
                                               :@"messageToMemberID"
                                               :receiverID];
        [UTGetInfoFromFile getFirstDataInString:stringFromFileAtURL
                                               :@"messageContent"
                                               :tempObject];
        NSLog(@"read over");
        tempMessage = [[UTMessage alloc]initWithAssignedSettings:tempDate
                                    :[tempType intValue]
                                    :tempObject];
        NSLog(@"create over");
        if ([senderID isEqualToString:relatedID])
        {
            if ([hostID isEqualToString:receiverID])
            {
                NSLog(@"count over");
                [messageDictionary setObject:tempMessage
                                   forKey:hostID];
            }
            else
            {
                continue;
            }
        }
        else if ([receiverID isEqualToString:relatedID])
        {
            if ([hostID isEqualToString:senderID])
            {
                NSLog(@"count over");
                [messageDictionary setObject:tempMessage
                                   forKey:relatedID];
            }
            else
            {
                continue;
            }
        }
        else
        {
            continue;
        }
    }
}
 
- (void)getMemberFromFile:(id)indexValue
                         :(NSString *)indexName
                         :(UTMember *)memberObject
                         :(NSError *)error
                         :(NSURL *)filePath
{
    
}

- (void)getPostFromFile:(id)indexValue
                       :(NSString *)indexName
                       :(UTPost *)postObject
                       :(NSError *)error
                       :(NSURL *)filePath
{
    
}

+ (void)getFirstDataInString:(NSString *)string
                            :(NSString *)stringID
                            :(id)returnValue
{
    NSRange     startRange;
    NSRange     endRange;
    NSRange     valueRange;
    startRange                  = [string rangeOfString:stringID];
    if (startRange.location == NSNotFound)
    {
        returnValue = nil;
        return;
    }
    else
    {
        
    }
    NSLog(@"find one %@", stringID);
    if ([string characterAtIndex:(startRange.location - 1)] == '#')
    {
        string                  = [string substringFromIndex:(startRange.location + [stringID length])];
        return [UTGetInfoFromFile getFirstDataInString:string
                                :stringID
                                :returnValue];
    }
    else
    {
        *string                  = [string substringFromIndex:(startRange.location + [stringID length])];
        startRange              = [string rangeOfString:@"="];
        endRange                = [string rangeOfString:@"\n"];
        valueRange.location     = startRange.location + 2;
        valueRange.length       = endRange.location - valueRange.location;
        returnValue             = [string substringWithRange:valueRange];
        string                  = [string substringFromIndex:(valueRange.location + valueRange.length)];
        if ([stringID isEqualToString:@"messageDate"])
        {
            NSDateFormatter *dateFormatter = [[NSDateFormatter alloc]init];
            [dateFormatter setDateFormat:@"yyyy-MM-DD HH:mm:ss"];
            returnValue = [dateFormatter dateFromString:returnValue];
        }
        NSLog(@"return one %@", returnValue);
    }
}

@end
