#include<stdio.h>
#include<string.h>
int main ()
{
    char string[14]="Happy Birthday";

    printf("Before updating the string : %s\n", string);

    string[1]='h';
    string[6]='b';

}