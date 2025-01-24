#include<stdio.h>
int main()
{
    int base,power,result = 1;
    printf("enter the value of base : ");
    scanf("%d",&base);
    printf("enter the value of power : ");
    scanf("%d",&power);
    for(int i=1;i<=power;i++)
    {
        result=result*base;
    }
    printf("%d",result);
    return 0;
}