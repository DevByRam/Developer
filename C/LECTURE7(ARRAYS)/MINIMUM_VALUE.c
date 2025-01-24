#include<stdio.h>
int main()
{
    int arr[7]={-6,-9,12,6,8,4,18};
    int min = 19;
    for(int i=0;i<=6;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}