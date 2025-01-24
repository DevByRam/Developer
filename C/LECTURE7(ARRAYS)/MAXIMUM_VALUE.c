/*#include<stdio.h>
int main()
{
    int arr[7] = {1,4,2,8,19,5,12};
    int max = -1;// sabse chhota number he array[7] me usse bhi chota number lena he 
    for(int i=0;i<=6;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}
*/


#include<stdio.h>
int main()
{
    int arr[7] = {-10,-4,-200,-80,-19,-5,-12};
    int max = arr[0];
    //or int max = -202;
    for(int i=0;i<=6;i++)//or (int i=1;i<=6;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}