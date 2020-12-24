#include<stdio.h>
int main()
{
    int count , working_hours,over_time;
    float over_time_pay;

    while(count <= 10)
    {
        printf("\nEnter the Working hours of Employee no. %d : ",count);
        scanf("%d",&working_hours);
        if (working_hours>40)
        {
            over_time = working_hours - 40;
            over_time_pay = over_time * 12.00;
            printf("Number of employee %d Over time pay %f",count,over_time_pay);

        }
        else
            {
            printf("You are not eligible for over time pay");
            }
            count++;

    }
}
