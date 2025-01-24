#include <stdio.h>
int main()
{
    float r;
    float pi = 3.1415;
    printf("enter the value of radius of the circle : ");
    scanf("%f", &r);
    float A = pi * r * r;
    printf("area of the circle is %f", A);
    return 0;
}