#include<stdio.h>
int main()
{
    int i=4;
    printf("\nAddress of i = %u",&i);
    printf("\n Value of i = %d",i);
    printf("\n Value of i = %d",*(&i));
}
