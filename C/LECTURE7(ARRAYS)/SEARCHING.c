#include <stdio.h>
int main(){
    int arr[10]={2,6,8,7,9,5,4,10,15,20};
    int l=0,u=9;
    int s=20;
    while(l<=u){
        int mid=(l+u)/2;
        if(s==arr[mid]){
            printf("The element is found");
            break;
        }
        else if(s>arr[mid]){
            l=mid++;
        }
        else{
            u=mid-1;
        }
    }
    return 0;
}