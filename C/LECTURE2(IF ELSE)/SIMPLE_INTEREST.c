#include<stdio.h>
int main()
{
  int p,r,t,si;
  printf("enter the value of p : ");
  scanf("%d",&p);
  printf("enter the value of r : ");
  scanf("%d",&r);
  printf("enter the value of t : ");
  scanf("%d",&t);
  si = (p*r*t)/100;
  printf("simple interest is %d",si);
  return 0;

}