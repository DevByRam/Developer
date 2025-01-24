/*
#include<stdio.h>
#include<stdbool.h>
int main()
{
    // int n;
    // printf("enter array's size : ");
    // scanf("%d",&n);
    // int arr[n];  
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",&arr[i]);
    // } 
    //  for(int i=0;i<n;i++)
    // {
    //     printf("%d",arr[i]);
    // } 
    int a = sizeof(int);
    printf("%d\n ",a);
    int b = sizeof(char);
    printf("%d\n",b);
    int c = sizeof(bool);
    printf("%d",c);
}
*/


#include<stdio.h>
#include<Stdlib.h>
#include<stdbool.h>
int main()
{
    int* ptr = (int*) malloc(10*4);// for malloc we need to take #include<stdlib.h>
    //(10*4) is the size.
    printf("%d \n",*ptr);
    //some garbage value will be the output.
    ptr++;
    printf("%d",*ptr);
}