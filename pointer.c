#include<stdio.h>
int main ()
{
    int num=7;
    int *ptr;

    printf("the value of num using pointer : %d\n");
    *ptr=28;
    printf("New value of num after dereferencing: %d\n", num);
}