/*
we will not be able to write a string that having one or more words by using every letter of the word using single quotes. so here the code for this problem.
*/
/*
#include<stdio.h>
int main()
{
    char arr[] = "College Wallah is best for the c \0";
    int i = 0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}
*/

/*
question time
what is the size of the str in the following?
char str[] = "PhysicsWallah";
if your answer is 13 then it is wrong bcz compiler automatically considers '\0' in the str.So the answer is 14. so we will not type char str[13]="PhysicsWallah"; instead of this we will write char str[14]="PhysicsWallah"; aur it is better to write char str[]="PhysicsWallah"; one more thing is that gap between two words is also counted in the length of the string.
when u takes your cursor to the string then vs code will show the length of the string.
*/

// We can modify the string by changing the character in the string.here the example 
#include<stdio.h>
int main()
{
    char str[]="Physics Wallah";
    str[0] = 'M';
    str[1] = 97;//ASCII value of 97 is a.
    int i = 0;
    while(i<15)
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
// Ways of printing particular element,use these
//arr[i]
//*(arr+i)
//*(i+arr)
//i[arr] instead of arr[i]