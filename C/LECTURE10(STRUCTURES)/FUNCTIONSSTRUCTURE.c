#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;
void fun(pokemon p)
{
    printf("%d",p.hp);
    return;
}
void change(pokemon p){
    p.hp = 70;
    p.attack = 60;
    p.speed = 120;
    return;
}
int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 50;
    pikachu.speed = 90;
    change(pikachu);
    printf("%d \n",pikachu.hp);
    printf("%d \n",pikachu.speed);
    printf("%d \n",pikachu.attack);
    //if th 60,50,90 is output then it is pass by value not pass by reference
    //if output is 70,60,120 then it is pass by refence
    return 0;
}