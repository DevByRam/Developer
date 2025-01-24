#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "physics wallah";
    // char* s2 = s1;//s2 is a shallow copy
    // s1[0] = 'M';
    // printf("%s",s2);
    return 0;
}

// copy one string to another creating a deep copy

/*
strlen(char*str) -> returns the length of th string
strcat(char*s1,char*s2) -> copies the contents of string s2 to string s1
strcat(char*s1,char*s2) -> contact s1 string with s2 and stores the result in s1
strcmp(char*s1,char*s2) -> compares the two strings
strcpy(char*s2,char*s1,int len) -> copy substring of size len starting from s1 character pointer into s2.
*/