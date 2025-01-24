#include<stdio.h>
#include<stdlib.h>
int main()
{
    // int x = 9;
    // int* ptr = &x;
    // printf("%p \n",ptr);
    // int y = 7;
    // int* p = NULL;//null pointer
    // printf("%p",p);
    int* ptr = (int*) calloc(10,4);
    int* p = ptr;//starting par set kr diya
    ptr--;
    free(p);
}