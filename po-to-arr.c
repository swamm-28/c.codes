#include<stdio.h>
int main ()
{
    int arr[4]={26,27,28,29};
    int *ptr[4]= &arr;

    printf("first element : %d\n", (*ptr[0]));
    printf("second element : %d\n", (*ptr[1]));

}