//int size = 10,b[size]; is correct.remember that it sholud be int only not float.
/*#include<stdio.h>
int main()
{
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp=num[25];//swapping
    num[25]=num[0];
    num[0]=temp;
    printf("\n%d %d",num[0],num[25]);
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int sub[50],i;
    for(i=0;i<=48;i++);// ';' -> means no loop,it will just take int i=0
    {
        sub[i]=i;
        printf("\n%d",sub[i]);
    }
    return 0;
}