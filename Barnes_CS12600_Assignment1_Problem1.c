//Riley Barnes CS 12600
//Assignment 1 Problem 1
//C Program that takes the sum and difference from two ints and two floats
//reference https://medium.com/@philomath_tamil/sum-and-difference-of-two-numbers-in-c-hackerrank-solution-9325d297ce62
#include <stdio.h>

int main() {
    //declare the variables
    int int1, int2;
    float float1, float2;

    //read the input
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);

    //perform sum and difference operations and print the outputs
    printf("%d %d\n", int1 + int2, int1 - int2);
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);

    return 0;
}
