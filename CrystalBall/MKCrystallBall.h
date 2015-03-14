//
//  MKCrystallBall.h
//  CrystalBall
//
//  Created by Mark Koslow on 7/16/14.
//  Copyright (c) 2014 MarkKoslow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MKCrystallBall : NSObject {
}

@property (strong, nonatomic) NSArray *predictionsList;

- (NSString*) randomPrediction;


@end
