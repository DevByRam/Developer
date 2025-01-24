/*
#include<stdio.h>
int main()
{
    char ch = 'A';//similarily for 'a','Z','z'.'0','1','9'
    //int x = (int)ch; //this is what we call typecast
    //printf("%d",x);
    printf("%d",ch);
    //char ch = 'A';
    //printf("%d",ch);
   return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    char ch = '\0'; //null character
    printf("%d \n",ch); //'\0' is consider as a signal character
    // we can not print 'ab' by taking char arr[]='ab' bcz 'ab' is not signal element 
    char ch1 = '0';
    printf("%d",ch1);
    return 0;
}
*/
// ASCII value : 'A' ->65  'a' ->97  '0' ->48  '9'  ->57



/*
#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4};
    //printf("%p \n",&a[0]);
    //printf("%p \n",&a[1]);
    //printf("%p \n",&a[2]);
   //printf("%p \n",&a[3]);
    char arr[5]={'a','t','l','a','s'};
    printf("%p \n",&arr[0]);
    printf("%p \n",&arr[1]);
    printf("%p \n",&arr[2]);
    printf("%p \n",&arr[3]);
    printf("%p",&arr[4]);
    return 0;
}
*/



#include<stdio.h>
int main()
{
    char arr[] = {'H','e','l','l','o','\0'}; //'\0' is used as checkmark
    int i = 0;
    while(arr[i]!='\0')
    {
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}
