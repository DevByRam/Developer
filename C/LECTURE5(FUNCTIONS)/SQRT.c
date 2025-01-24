#include<stdio.h>
#include<math.h>//math is a library
int main()
{
    double a;
    printf("enter a number : ");
    scanf("%lf",&a);
    int root = sqrt(a);
    printf("the square root is : %d",root);
    //int q=pow(2,5);
    //printf("%d",q);
    return 0;
}