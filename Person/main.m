//
//  main.m
//  Person
//
//  Created by KevinT on 2017-11-15.
//  Copyright © 2017 kevint. All rights reserved.
//
//what's the difference between readonly and readwrite?
//readonly cannot write

#import <Foundation/Foundation.h>
#import "BNRPerson.h"

int main(int argc, const char * argv[]) {
  @autoreleasepool {
    
//    new person object of class BNRPerson
    BNRPerson *person = [BNRPerson new];

//    person eye color is blue
    [person setEyeColor:@"blue"];
    
//    display person eye colorx
    NSLog(@"%@", person.eyeColor);
  }
  return 0;
}
