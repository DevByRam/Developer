/*
#include <stdio.h>
#include<string.h>
int main()
{
    char str[] = "I am the best";
    //printf("%s",str); //instead of this we can use puts(str);
    puts(str);// this can be used for strings only when taking #include<string.h>
    return 0;
}
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[40];
    printf("enter the input : ");
    scanf("%s",str); // here we do not need to write scanf("%s",&str); this is only when it is %s.
    //but the thing by using this is that it will give the first word of a sentence only.
    //try this by giving input such as "hello everyone,what's up".it will give output hello only.
    // means it will not read the other words after giving space between two words.
    printf("your input is : %s",str);
    return 0;
}
*/
//that's why to solve this problem we will use gets();

#include<stdio.h>
#include<string.h>
int main()
{
    char ram[45];
    printf("enter your input : ");
    gets(ram); // entire sentence can be input.
    //same thing can be done by using scanf("%[^\n]s",ram); instead of gets(ram);
    printf("your input was : %s",ram);
    return 0;
}