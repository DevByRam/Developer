//pass by reference
/*
#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
    swap (&a,&b);
    printf("value of a is %d\n",a);
    printf("value of b is %d",b);
    return 0;
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
*/
// above code is right


//pass by value 
#include<stdio.h>
void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
    swap (a,b);
    printf("value of a is %d\n",a);
    printf("value of b is %d",b);
    return 0;
}