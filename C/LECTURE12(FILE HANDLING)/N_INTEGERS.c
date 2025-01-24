#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter no of integers you want : ");
    scanf("%d",&n);
    //taking input without array
    int* ptr = (int*)malloc(n*sizeof(int));// this is what we have create the space for the input of the values.
    //for taking input 
    int* p = ptr;
    for(int i=0;i<n;i++)
    {
        scanf("%d \n",&(*ptr));
        ptr++;
    }
    int* t = p;
    for(int i=0;i<n;i++)
    {
        printf("%d \n",(*p));
        p++;
    }
}