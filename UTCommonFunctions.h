//
//  ButtonPressed.h
//  FoodFriends
//
//  Created by jin on 12-10-11.
//  Copyright (c) 2012年 UThoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UTCommonFunctions : NSObject

//  Message Show
+ (void)showMessageWindow:(id)sender;


// Botton Pressed
+ (void)sendMessageButtonPressed:(NSString *)memberID;

//  Settings
+ (id)checkSetting:(NSInteger)settingID;

@end
