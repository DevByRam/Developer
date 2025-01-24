/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[];//here it is showing error bcz we need to declare the size.
    //1.it is not compulsory to declare the size of the char array when array is declared such as -> char str[] = "college wallah";
    //2.it is compulsory to declare the size of the char array when char array is not declare such as -> char str[56];
    printf("enter the input : ");
    gets(str);
    printf("the output is : %s",str);
    return 0;
}
*/
// 1.can use puts(); instead of printf();
// puts() automatically \n bhi de deta he
// 2.can use gets(); instead of scanf();

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    puts("enter a string : ");
    // scanf("%[^\n]s",str);
    gets(str);
    // puts("the string size is : ");
    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size++;
        k++;
    }
    // printf("%d",size);
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("the reverse string is : ");
    puts(str);
    return 0;
}