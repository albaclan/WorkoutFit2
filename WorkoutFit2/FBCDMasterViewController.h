//
//  FBCDMasterViewController.h
//  WorkoutFit2
//
//  Created by Shaun on 17/06/2013.
//  Copyright (c) 2013 ChalkedIt. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface FBCDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
