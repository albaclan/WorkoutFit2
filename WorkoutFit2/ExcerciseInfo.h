//
//  ExcerciseInfo.h
//  WorkoutFit2
//
//  Created by Shaun on 17/06/2013.
//  Copyright (c) 2013 ChalkedIt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ExcerciseDetail;

@interface ExcerciseInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * image;
@property (nonatomic, retain) ExcerciseDetail *details;

@end
