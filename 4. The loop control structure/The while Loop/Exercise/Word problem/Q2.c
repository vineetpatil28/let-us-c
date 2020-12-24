#include<stdio.h>
int main()
{
    int f = 1, i, num;
    printf("Enter any number: ", num);
    scanf("%d", &num);
    for (i=1; i<=num; i++) { f = f*i; }
    printf("Factorial of %d is %d", num, f);
}

