#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int x=4;
    for(int i=0;i<=6;i++)
    {
        int count = 0;
        if(arr[i]>x)
        {
            printf("%d",arr[i]);
        count++;
        }
    }
    return 0;
}