#include<stdio.h>
int main()
{
    int bs,hra,da,gs;

    printf("Enter employee basic salary: ");
    scanf("%d",&bs);

    if(bs < 80000)
    {
        hra = bs * 10/100;
        da = bs * 90/100;
    }
    else
    {
        hra = 500;
        da = bs * 98/100;
    }

    gs = bs + hra + da;
    printf("grass salary = Rs.  %d ", gs );
    getch();
}
