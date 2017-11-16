//
//  BNRPerson.h
//  
//
//  Created by KevinT on 2017-11-15.
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject
{
  //BNRPerson has instance variables
//  float _heightInMeters;
//  int _weightInKilos;
  NSString *eyeColor;
}

//BNRPerson has methods to read and set its instance variables
//- (float)heightInMeters;
//- (void)setHeightInMeters:(float)h;
//- (int)weightInKilos;
//- (void)setWeightInKilos:(int)w;
- (NSString *)eyeColor;
- (void)setEyeColor:(NSString *)value;

//BNRPerson has a method that calculates the Body Mass Index
//- (float)bodyMassIndex;

@end
