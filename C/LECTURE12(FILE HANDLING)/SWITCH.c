#include<Stdio.h>
int main()
{
    int n;
    printf("enter day number(1 to 7) : ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4: 
        printf("Thursady \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
        printf("Invalid Number ");
        break;
    }
    return 0;
}
// we do not need to write cases in the order means we can write case 1 then case 3 then case 4 then case 2 and so on but the output will be the same that is written as inside the cases.