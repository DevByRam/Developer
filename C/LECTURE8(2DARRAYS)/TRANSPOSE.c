/*
#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    printf("enter the number of columns : ");
    scanf("%d",&c);
    printf("enter all the elements\n");
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
         printf("\n");
    }
    return 0;
}
*/


#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    printf("enter the number of columns : ");
    scanf("%d",&c);
    printf("enter all the elements\n");
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int brr[c][r];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            brr[i][j]=arr[j][i];
        }
        printf("\n");
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}