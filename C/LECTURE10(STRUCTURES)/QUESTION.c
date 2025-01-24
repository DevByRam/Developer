/*
#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
    char Name[50];
    int noofpages;
    float price;
    }a,b,c;
    a.noofpages = 100;
    a.price = 411.5;
    //a.name = "secret seven";
   //printf("%d\n",a.noofpages);
   //printf("%f\n",a.price);
   // printf("%s\n",a.name);
   //but when we introduce a.name it is showing some error.
   //lets solve this problem 
   //char ch[13] = "secret seven";
   //printf("%s",ch);
   //OR
   char ch[13];
   strcpy(ch,"secret seven");
   printf("%s",ch);
    return 0;
}
*/

//now by solving the above error problem,finally the code is given below

#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        int noofpages;
        float price;
        char name[50];
    }a,b,c;
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

/*
objects and classes
here pokemon is a class and pikachu,charizard,mewtwo are objects of class pokemon.
*/


/*
suppose if one of the pokemons is legendary pokemon and it has a special attack then to declare it's special attack we will write code in the following way: 

struct pokemon{
    int hp;
    int attack;
    int speed;
}
struct legendary pokemon{
    int specialattack;
    struct pokemon X;
}
*/