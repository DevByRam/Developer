/*
#include<stdio.h>
#include<string.h>
int main()
{
    char* str = "Ram Krishna";//length of the str is 12 bcz '\0; is also considered
    int x = strlen(str);
    printf("%d",x);
    return 0;
}
*/

//but in the output the length of the string is 11 bcz here '\0' is not considered by the pc.

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25] = "Ram Krishna";
    char s2[25];
    strcpy(s2,s1);
    s2[0]= 'A';
    printf("%s",s2);
    //or puts(s2);
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "Ram ";
    char s2[] = "Krishna";
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}