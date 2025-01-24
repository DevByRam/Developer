/*
#include<stdio.h>
typedef float realNumber;
typedef int IntEGER;
int main()
{
    //int x;
    IntEGER x = 5;
    printf("%d \n",x);
    //float y;//realNumber y;
    realNumber y = 3.1415;
    printf("%f",y);
    return 0;
}
//typeeff is used to write something y; such as realNumber y; instead of float y;
// if we declare something before int main then it is applicable for whole inside int main so we do not need to declare everytime inside int main such as suppose,we declare int greeting(){} outside int main which is what we call function which we do not need to declare it(greeting) everytime inside int main.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct Book{
        int noofpages;
        float price;
        char name[50];
    } book;

    book d;
    book a;
    struct Book b;
    struct Book c;
    //both will work

    a.noofpages = 101;
    a.price = 150.53;
    strcpy(a.name,"secret seven");

    b.noofpages = 260;
    b.price = 350.45;
    strcpy(b.name,"famous five");
    printf("%d\n",a.noofpages);
    printf("%f\n",a.price);
    printf("%s\n",a.name);

    printf("%d\n",b.noofpages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);
    return 0;
}