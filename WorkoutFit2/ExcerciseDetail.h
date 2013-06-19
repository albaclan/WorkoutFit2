//
//  ExcerciseDetail.h
//  WorkoutFit2
//
//  Created by Shaun on 17/06/2013.
//  Copyright (c) 2013 ChalkedIt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ExcerciseInfo;

@interface ExcerciseDetail : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSString * muscle;
@property (nonatomic, retain) NSString * imagelarge;
@property (nonatomic, retain) ExcerciseInfo *info;

@end
