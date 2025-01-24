#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr = (int*)malloc(10*4);//00782F38 
    printf("%p \n",ptr);
    ptr = realloc(ptr,2000*4);//
    printf("%p \n",ptr);//00783F98 
}