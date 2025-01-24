// "%p" se address print hota he
// "c" se character print hota he
/*
#include<stdio.h>
int main()
{
    int a = 5;
    printf("%d",&a); // &a in printf se address print hota he
    printf("%p",&a);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int a = 6;
    int* x = &a;
    printf("%p\n",x);
    printf("%p\n",&x); 
    printf("%d",* x);
    return 0;
}