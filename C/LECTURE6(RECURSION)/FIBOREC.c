#include<stdio.h>
int fibo(int n){
    int ans,ans1,ans2;
    if (n==1 || n==2) return 1;
    /*
    ans1 = fibo(n-1);
    ans2 = fibo(n-2);
    ans = ans1 + ans2;
    return ans;
    */
   return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}