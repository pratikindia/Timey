//
//  Task+Additions.h
//  Timey
//
//  Created by Jader Feijo on 19/11/2013.
//  Copyright (c) 2013 Jader Feijo. All rights reserved.
//

#import "Task.h"

@interface Task (Additions)

+ (NSString *)stringFromTimeInterval:(NSTimeInterval)interval;
+ (NSTimeInterval)timeIntervalFromString:(NSString *)intervalString;

- (NSTimeInterval)timeLeft;
- (NSString *)formattedTimeLeft;
- (NSString *)formattedSecondsLeft;

- (void)updateTimeRemaining;

- (void)setFormattedAllocatedTime:(NSString *)allocatedTime;

- (NSComparisonResult)compareTitle:(Task *)task;

@end
