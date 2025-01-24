#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a : ");
    scanf("%d",&a);
    int b;
    printf("enter the value of b : ");
    scanf("%d",&b);
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("the value of a is %d \n",a);
    printf("the value of a is %d \n",b);
    return 0;
}