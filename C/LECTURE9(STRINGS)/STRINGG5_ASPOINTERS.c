// the address of the char array,array,string ka address uske pehle matlab 0th index ke element ka address hota he.
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "college wallah";
    char* ptr = str; // ptr now points to str[0]
    // or char* ptr = &str[0];
    printf("%p\n", &str[0]); // or printf("%p\n",ptr);
    printf("%p", ptr);
    printf("%p", str);
    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "college wallah";
    char *ptr = str; //*ptr represent the value.
    int i = 0;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++; // ptr represents address which can be ++.
        i++;
    }
    return 0;
}
*/

/*
we get another way of initialising strings
char *ptr = "physics wallah";
character's pointers can also be used to store address of a string
NOTE: such direct initialisation using pointers results in a read only memory allocation of character arrays and hence,causes undefined behaviour when we try to change the individual characters.
ptr[0] = 'm'; ERROR!
*/

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "college wallah";
    str[0] = 'p';
    printf("%s",str);
    return 0;
}
*/
// in normal initilisation, we can modify individual character but not the ENTIRE string.

// but in pointer initilisation,we can modify the ENTIRE string but not the individual character.example is given below code

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char* ptr = "college wallah";
    ptr[0] = 'p';
    printf("%s",ptr);
    return 0;
}
// this code will show error
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char *ptr = "college wallah";
    ptr = "physics wallah"; // puri string ko change/modify kiya to code sahi chlega
    ptr[0] = 'p';
    printf("%s", ptr);
    return 0;
}
// showing segmentation fault in c compiler
