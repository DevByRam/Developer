#include <stdio.h>  
#include <string.h>  
  
#define max 100  

int stack[max]; 
int top; 
  
void push(char x){  
  
      // Push(Inserting Element in stack) operation  
      if(top == max-1){  
          printf("stack overflow");  
      }  else {  
          stack[++top]=x;  
      }  
  
}  
  
void pop(){  
    // Pop (Removing element from stack)  
      printf("%c",stack[top--]);  
}  
  
  
int main()  
{  
   char str[]="sri lanka";  
   int len = strlen(str);  
  
   for(int i=0;i<len;i++)  
        push(str[i]);  
  
   for(int i=0;i<len;i++)  
      pop(); 

      return 0; 
} 