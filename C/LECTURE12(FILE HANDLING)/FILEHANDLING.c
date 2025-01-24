#include<stdio.h>
int main()
{
    // FILE* ptr= fopen("RAM.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    // printf("%s",str);
    // // on using if,the output is this much only(Hi,Everyone This is Ram Krishna.)
    // /*
    // but on use of while,the output is Hi,Everyone This is Ram Krishna.
    // It's mine pleasure to meet you Mahi sir.
    // I am a big fan of you.
    // You are always a big inspiration for me and all of yours fans.
    // */
    FILE* ptr= fopen("KRISHNA.txt","w");
    //on run the code this will automatically create a file name KRISHNA.txt.
    //fgets is used for reading the file whereas fputs is used for writing the file.
    char str[] = "I am pretty sure that i will get a BEST placement in either GOOGLE or APPLE ";
    fputs(str,ptr);
    fclose(ptr);
}