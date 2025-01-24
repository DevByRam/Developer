#include<stdio.h>
int main()
{
  int r;
  printf("enter the value of r");
  scanf("%d",&r);
   float v = 4*3.14*r*r*r/3;
   //output by taking v=4/3*3.14*r*r*r; is different
   printf("the volume is : %f",v);
   return 0;
    }

    //ctrl+/ button by selecting ome part of the code by mouse
    //float maths_marks = 99 is valid but float maths marks = 99 is not valid as this will show error
    //variables can start from an alphabet or underscore _
    //special charcters except _ are not allowed
    //some particular keywords are not allowed 
    //commas or blanks are not allowed //float float is not allowed as a variable whereas float FLOAT variable is allowed 
    