#include <stdio.h>
int main()
{
    struct pokemon
    { // user defined data type
        int hp;
        int speed;
        int attack;
        char tier;//S,A,B,C,D
    };//we can declare pikachu, charizard,mewtwo after } and  before semicolumn ; also(that is struct pokemon{ }pikachu,chirazard,mewtwo;) due to which we do not need to declare struct pokemon pikachu; or struct pokemon charizard; or struct pokemon mewtwo; given below.
    struct pokemon pikachu;
   // pikachu.attack = 60; 
   // . -> dot operator
   printf("enter attack of pikachu : ");
   scanf("%d",&pikachu.attack);
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';
    struct pokemon mewtwo;
    charizard.attack = 170;
    charizard.hp = 150;    charizard.speed = 200;
    charizard.tier = 'G';
    printf("%d \n",pikachu.attack);
    printf("%c",charizard.tier);
    return 0;
}