//nested loop
#include<stdio.h>
int main()
{
    int n;
    //printf("*****\n*****\n*****\n");
    printf("enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("enter number of columns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)//outer loop ->no of lines
    {
        for(int i=1;i<=m;i++)//inner loop ->no of stars in each line
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}