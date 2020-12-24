#include<stdio.h>
int main()
{
    int a,b,c,pow=1;

    printf("Enter the value of a:  \n ");
    scanf("%d",&a);
    printf("Enter the value of b:  \n ");
    scanf("%d",&b);
    c = b;
    while(b!=0)
    {
        pow = pow *a;
        b = b - 1;
    }
    printf("%d raised to power %d: %d",a,c,pow);
}
