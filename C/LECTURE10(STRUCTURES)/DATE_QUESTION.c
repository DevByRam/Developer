#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a, b;
    // a -> 02/04/2004
    // b -> 07/12/2023
    a.day = 2;
    a.month = 4;
    a.year = 2004;

    b.day = 7;
    b.month = 12;
    b.year = 2023;

    bool flag = true;
    if (a.day != b.day)
        flag = false;
    if (a.month != b.month)
        flag = false;
    if (a.year != b.year)
        flag = false;

    if (flag == true)
        printf("the dates are same");
    else
        printf("the dates are different");
        return 0;
}