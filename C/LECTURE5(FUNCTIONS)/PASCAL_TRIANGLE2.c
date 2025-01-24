// #include<stdio.h>
// int factorial(int x)
// {
//     int fact = 1;
//     for(int i=1;)
//     fact=fact*1;
// }

#include <stdio.h>
int factorial(int x){
    int fac=1;
    for(int i=1;i<=x;i++){
        fac=fac*i;
    }
    return fac;
}
int fac(int n,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n;
    printf("Enter the n as the number of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            int r=fac(i,k);
            printf("%d ",r);
        }
        printf("\n");

    }                                                
    return 0;
}