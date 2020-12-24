#include<stdio.h>
int main()
{
    int qty , dis=0;
    float rate , tot;
    printf("\n \t Enter the quantity: ");
    scanf("%d",&qty);

    printf("\n \t Enter the rate: ");
    scanf("%f",&rate);

    if (qty > 1000)
        dis = 10;
    tot= (qty*rate)-(qty*rate*dis/100);
    printf("\n \t Total expenses = Rs.  %f",tot);
    getch();
    return 0;
}
