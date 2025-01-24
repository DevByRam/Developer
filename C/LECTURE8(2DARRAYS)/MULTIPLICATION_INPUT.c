#include<stdio.h>
int main()
{
    //1st matrix order
    int m;
    printf("enter the no of rows in first matrix : ");
    scanf("%d",&m);
    int n;
    printf("enter the no of columnns in first matrix : ");
    scanf("%d",&n);
    //input of 1st matrix
    int a[m][n];
    printf("\n enter the elements of first matrix : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[m][n]);
        }
    }
    //2nd matrix order
    int p;
    printf("\n enter the no of rows in second matrix : ");
    scanf("%d",&p);
    int q;
    printf("enter the no of columnns in second matrix : ");
    scanf("%d",&q);
     //input of 2nd matrix
    int b[p][q];
    printf("enter the elements of second matrix : ");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[m][n]);
        }
    }
    //check
    if (n!=p)
    {
        printf("matrices can not be multiplied");
    }
    else
    {
        //multiplication
        int res[m][q];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j] = 0;
                // i row of a,j column of b
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        //print
        printf("the resultant matrix is : \n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                printf("%d",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}