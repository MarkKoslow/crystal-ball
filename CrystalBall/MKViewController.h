//
//  MKViewController.h
//  CrystalBall
//
//  Created by Mark Koslow on 7/14/14.
//  Copyright (c) 2014 MarkKoslow. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MKCrystallBall;

@interface MKViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *myPredictionLabel;
@property (strong, nonatomic) MKCrystallBall* myCrystalBall;
// - (IBAction)buttonPressed;
- (void) makePrediction;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end
