//input and output of string without loop
/*
#include<stdio.h>
#include<string.h>//necessary for string prinout by %s aur using of gets() and puts()
int main()
{
    char str[]= "Jai Shree Ram";
    // printf("%s",str);
    puts(str);
    // we can also print str without char str[]= "Jai shree Ram"; by taking puts("Jai Shree Ram");
    return 0;
} 
*/

//Difference between scanf and gets
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    // scanf("%s",str);//only the first word will be considered
    // gets(str);//entire sentence can be input.
    //OR 
    scanf("%[^\n]s",str);
    printf("Your input was : %s",str);
    return 0;
}
//on running the code when your input is more than one word means when you hit a gap between two characters or words you will find that compiler is able to read only the character or word that is before the gap.so to avoid this we will use gets.