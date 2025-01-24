#include<stdio.h>
int main()
{
    int max,i,j;
    int A[3][4] = {1,2,3,1,0,5,0,2,9,0,0,3};
    max=7;
    int sum[3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            sum[i]=sum[i]+A[i][j];
        }
        if((sum[i]>max)&&i!=0)
        max=sum[i];
        printf("%d", sum[i]);
    }
    printf("\n %d", max);
    return 0;
}