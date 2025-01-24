/*
WAYS OF PRINTING PARTICULAR ELEMENT
arr[i]
*(arr+i)
*(i+arr)
i[arr]
*/

#include <stdio.h>
int main()
{
    char str[20] = "CollegeWallah";
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", i[str]);
        // or printf("%c",str[i]);
        // or printf("%c",*(str+i));
        // or printf("%c",*(i+str));
        i++;
    }
    return 0;
}