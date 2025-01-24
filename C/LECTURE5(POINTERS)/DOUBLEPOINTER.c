#include<stdio.h>
int main()
{
    int a = 25;
    int *x = &a; //int* -> int ka address store karta hai
    //VVIP -> *x = 7; // a is changed.
    int **y = &x; // int** -> int* ka address store karta hai
    printf("%p\n",&x);
    printf("%p\n",y);
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}