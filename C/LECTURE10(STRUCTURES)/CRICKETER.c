#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[15];
        char lastname[15];
        int age;
        int noOfMatches;
        float average;
    } cricketer;

    cricketer arr[3];
    for (int i = 0; i <= 3; i++)
    {
        scanf("%s", arr[i].firstname);
        scanf("%s", arr[i].lastname);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].noOfMatches);
        scanf("%f", &arr[i].average);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name : %s %s \n", arr[i].firstname, arr[i].lastname);
        printf("Age : %d \n", arr[i].age);
        printf("NO OF MATCHES : %d \n", arr[i].noOfMatches);
        printf("Average : %f \n", arr[i].average);
    }
    return 0;
}