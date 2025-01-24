#include<stdio.h>
int main()
{
    int s1=0,s2=0,s3=0,max,i,j;
    int A[3][4] = {1,2,3,1,0,5,0,2,9,0,0,3};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    if(i=0)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d",max);
        }
    }
    if(s1>s2)
    {
        if(s1>s3)
        {
            max=s1;
            printf("%d",max);
        }
        else
        {
            max=s3;
            printf("%d",max);
        }
    }
    else if(s2>s1)
    {
        if(s2>s3)
        {
            max=s2;
            printf("%d",max);
        }
        else
        {
            max=s3;
            printf("%d",max);
        }
    }
    return 0;
}