//
//  JMCToDoItem.h
//  ToDoList
//
//  Created by Justin Cano on 9/15/14.
//  Copyright (c) 2014 Justin Cano. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMCToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
