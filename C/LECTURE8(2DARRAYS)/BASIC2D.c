/*#include<stdio.h>
int main()
{
 //1 2
 //3 4
  int arr[2][2] = {{1,2},{3,4}};
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  //arr[0][1]=1;
  //arr[0][1]=2;
  //arr[1][1]=3;
  //arr[1][1]=4;
   
  return 0;
}
*/


/*#include<stdio.h>
int main()
{
    int arr[3][3] = {{1,2,3},{3,4,5},{4,5,6}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int r;
    printf("enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("enter the number of columns : ");
    scanf("%d",&c);
    int arr[r][c];//r*c total elements
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}