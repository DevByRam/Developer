/*
#include <stdio.h>
int main()
{
    //char arr[] = "Hello";
    char arr[] = "my favourite cricketer is MS DHONI(MAHI)\0";
    int i = 0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
*/

// here the word hello is small so we can count the no of letters,but for a large sentence it is impossible to count the no of letters.so we will use '\0'.
// at last we use '\0' so that we do not need the size of the array
/*
give data : char str[] = "PhysicsWallah";
what is the size of the str?
Answer is 14 not 13 bcz computer automatically consider '\0' at the end. so we can take char str[14 or >14] = "PhysicsWallah"; or char str[] = "PhysicsWallah";
*/

/*
char str[]="PhysicsWallah";
predict the output of the foloowing
1. printf("%c",str[5]);
2. printf("%d",str[9]);
answer are:
1. output is c
2. output is the ASCII value of a that is 97
*/

/*
char str[] = "PhysicsWallah";
predict str after:
1. str[0] = 'M';
2. str[1] = 97;//ASCII value of a
Answer are:
1. MphysicsWallah
2. PaysicsWallah
*/

#include <stdio.h>
int main()
{
    char str[20] = "Collegewallah";              // here the size of "Collegewallah" is 14 bcz of automatically '\0'.
    char arr[] = {'H', 'e', 'l', 'l', 'o', '!'}; // here the size of given arr[] is 6 not 7,bcz the word Hello is written in 'single letter'.But the computer can take '\0' automatically but it will not count in the size of the char arr[] bcz of word is written in'single letter','another single letter',.......and so on.
    int i = 0;
    while (arr[i] != '\0')
    {
        printf("%c", arr[i]);
        i++;
    }
    return 0;
}