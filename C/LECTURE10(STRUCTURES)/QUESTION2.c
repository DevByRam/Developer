#include<stdio.h>
#include<string.h>
int main()
{
    struct person{
        char name[50];
        int salary;
        int age;
    }p1,p2;
    p1.salary = 100;
    p1.age = 20;
    strcpy(p1.name,"Krish");
    printf("%s\n",p1.name);

    p2.salary=110;
    p2.age = 21;
    strcpy(p2.name,"OM");
    printf("%d",p2.age);
    return 0;
}