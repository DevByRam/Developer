//swapping method
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number of rows and columns:");
    scanf("%d",&n);
    printf("enter the elements : ");
    int arr[n][n];
    //input
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose
    /* for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }*/
    //OR 
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("\n");
    //output
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0; 
}