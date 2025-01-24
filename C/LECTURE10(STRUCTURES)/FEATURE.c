#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    }pokemon;
    pokemon a,b,c;
    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name,"Blastoise");

    // b.attack = a.attack;
    //b.speed = a.speed;
    //b.tier = a.tier;
    //b.hp = a.hp;
    //strcpy(b.name,"a.attack");

    b = a;//b me bhi a aa gya // deep boy
    b.attack = 200;
    strcpy(b.name,"venusaur");
    printf("%s \n",b.name);
    printf("%c \n",b.tier);
    printf("%d \n",b.speed);
    printf("%d \n",b.attack);
    printf("%d \n",b.hp);
    return 0;
}