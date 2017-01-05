//
//  ToDoItem.h
//  ToDoList
//
//  Created by Greg Johnson on 1/12/15.
//  Copyright (c) 2015 Greg Johnson. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;

@property NSString *notes;

@property BOOL completed;

@property (readonly) NSDate *creationDate;

@end
