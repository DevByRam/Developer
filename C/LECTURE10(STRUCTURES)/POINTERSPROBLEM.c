/*
#include <stdio.h>
int main()
{
    int x = 5, y = 7; // declaring both variables x and y is posible here.
    // int* a = &x, b = &y; // but in pointers declaring both variables a and b that is int* a = &x,b=&y; is not possible.(running code will show error)
    int *a = &x, b = y;
    printf("%p\n", a);
    // printf("%p\n",b);
    printf("%d \n", b);
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    int x = 5, y = 7;
    int* a,b; // if whenever it is declared then it means is int* a(pointers)and int b(not pointers).
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}
*/

#include <stdio.h>
typedef int* int_pointer;//ab se pointer datatype integers.
int main()
{
    int x = 5, y = 7;
    int_pointer a = &x, b = &y;
    printf("%p\n", a);
    printf("%p\n", b);
    return 0;
}