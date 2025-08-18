#include<stdio.h>
void main ()
{
    int number=7;
    int *p;
    p=&number;

    printf("Address of p variable is %u \n",p);
    p=p-3;

    printf("After subtracting 3: Address of p variable is %u \n",p);
}