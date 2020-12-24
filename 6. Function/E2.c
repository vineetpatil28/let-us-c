#include<stdio.h>
int main()
{
    printf("\nI am in main.\n");
    italy();
    brazil();
    argentina();
}
italy()
{
    printf("\ni am in italy...\n");
    brazil();
}
brazil()
{
    printf("\ni am in brazil...\n");
    argentina();
}
argentina()
{
    printf("\ni am in argentina...\n");
}
