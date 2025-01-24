#include<stdio.h>
int main()
{
    int A[2][2] = {1,2,3,4};
    int B[2][2] = {4,5,6,7};
    int res[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            res[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}