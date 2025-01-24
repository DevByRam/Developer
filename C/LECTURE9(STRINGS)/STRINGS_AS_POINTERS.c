/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "MS DHONI";
    // char* ptr = str; // ptr now points to str[0]
    printf("%p \n",str[0]);
    printf("%p",str);
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "MS DHONI";
    char* ptr = str;
    // ptr stands for address and *ptr stands for value/character fetch krne ke liye use kiya jata he
    int i =0;
    while(*ptr != '\0')
    {
    printf("%c",*ptr);
    ptr++;
    i++;
    }
   return 0;
}
// In normal initialisation,we can modify individual characters but not the entire string.
// pointer initialisation,we can modify entire string but not the individual character.