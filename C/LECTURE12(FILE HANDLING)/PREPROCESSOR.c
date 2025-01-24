/*
#include<stdio.h>
#include<math.h>
#include<limits.h>
// #include is called as preprocessor directive
// <stdio.h> is used for scanf and printf
int main(){
    //printf("hello\n");
    // float x = sqrt(2);
    // float y = cbrt(27);
    // printf("%f \n",x);
    // printf("%f",y);
    //int x = __INT_MAX__;// used in c language.
    //int x = INT_MAX;// used in c++ language.but this will also work in c language when we use #include<limits.h>
    //it is more preferable to use INT_MAX in c by using #include<limits.h>
    //int x = INT_MAX;
    // long y = 2147483649;
    // printf("%ld",y);
    //printf("%d \n",x);
    // int y = INT_MIN;
    // printf("%d \n",y);
    long y = LONG_MAX;
    printf("%ld",y);
    // some error is there for long bcz it is giving same output as the INT_
}
*/

#include<stdio.h>
#define PI 3.14159265359
int main()
{
    printf("%f \n",PI);
    double x = 3.14159265359;
    printf("%0.11f",x);
    //float -> 6 decimal places
}