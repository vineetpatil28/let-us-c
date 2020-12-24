#include<stdio.h>
float main()
{
    float square( float x);
    float a;
    printf("\n Enter any number");
    scanf("%f",&a);
    float b = square(a);
    printf("\n Square of %f is %f",a,b);
}
float square( float x )
{
    float y;
    y = x*x;
    return (y);
}
