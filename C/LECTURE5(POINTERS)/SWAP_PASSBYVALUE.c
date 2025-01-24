#include<stdio.h>
void swap(int x ,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return ;
}
int main()
{
    int x,y;
    printf("enter the value of x : ");
    scanf("%d",&x);
    printf("enter the value of y : ");
    scanf("%d",&y);
    swap(x,y);
    printf("value of x : %d \n",x);
    printf("value of y : %d",y);
    return 0;
}