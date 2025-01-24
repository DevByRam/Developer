#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon
    {
        /*int hp;
        int speed;
        int attack;
        char tier;
        char name[15];*/
        // instead of writing all these same things again we can write -> pokemon normal;
        pokemon normal;
        char ability[100];
    } legendarypokemon;
    typedef struct godpokemon
    {
        legendarypokemon legend;
        int specialattack;
    } godpokemon;
    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability, "turns anyone to stone");
    arceus.legend.normal.attack = 500;
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack = 180;
    strcpy(mewtwo.normal.name, "MEWTWO");
    mewtwo.normal.speed = 120;
    mewtwo.normal.tier = 's';
    return 0;
}