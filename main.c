//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

typedef struct {
    int age[3];
    int mobile;
} Human;

Human makeHuman(int *a, int m);
int *pointer;

int main() {
    
    int age[] = {18,06,89};
    int mobile = 911;
    
    Human adam = makeHuman(age, mobile);
    printf("I was born %d/%d/%d and my number is %d \n", adam.age[0], adam.age[1], adam.age[2], adam.mobile);
    
    int array[3] = {1,2,3};
    
    int arrayLength = sizeof(array) / sizeof(float);
    printf("the size of array is %d \n", arrayLength);
    
    int zack = 25;
    pointer = &zack;
    
    printf("variable zack = %d and memory of pointer = %d \n", zack, *pointer);
    
    
    
    
    return 0;
}

Human makeHuman(int *a, int m) {
    Human human;
    
    human.age[0] = a[0];
    human.age[1] = a[1];
    human.age[2] = a[2];
    
    human.mobile = m;
    
    return human;
}