//
//  FBCDDetailViewController.h
//  WorkoutFit2
//
//  Created by Shaun on 17/06/2013.
//  Copyright (c) 2013 ChalkedIt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
