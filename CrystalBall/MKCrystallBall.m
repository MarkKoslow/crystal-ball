//
//  MKCrystallBall.m
//  CrystalBall
//
//  Created by Mark Koslow on 7/16/14.
//  Copyright (c) 2014 MarkKoslow. All rights reserved.
//

#import "MKCrystallBall.h"

@implementation MKCrystallBall

- (NSArray *) predictions {
    if (_predictionsList == nil) {
        self.predictionsList = @[@"The future is grim ):", @"The future is promising! :)",
                                 @"Your doom is inevitable!!", @"But I am le tired", @"Well, have a nap", @"Zen fire ze missiles!"];
    }
    return _predictionsList;
}

- (NSString *) randomPrediction {
    int randomNumber = arc4random_uniform(self.predictionsList.count);
    NSLog (@"Random number is %d", randomNumber);
    NSLog(@"The prediction should be %@", [self.predictions objectAtIndex:randomNumber]);
    return [self.predictions objectAtIndex:randomNumber];
}

@end
