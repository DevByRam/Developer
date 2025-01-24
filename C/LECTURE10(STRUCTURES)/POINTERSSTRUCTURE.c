#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
}pokemon;
int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"pikachu");
    //int* x -> address of integer value
    pokemon* x = &pikachu;
    printf("%p \n",&pikachu.hp);
    printf("%p \n",&pikachu.attack);
    printf("%p \n",&pikachu.speed);
    printf("%p \n",&pikachu.tier);
    printf("%p \n",pikachu.name);
    printf("%p",x);
    /*
    int q = 4;
    int*p = &q;
    *p = 7;//q = 7
    */
   // this thing we have learnt in the pointer
    return 0;
}