#include<stdio.h>
int main()
{
// Let two cities are A and B.Distance between two cities is X (in km.)
    int d_km,d_meter, d_feet,d_inches,d_cm;
    printf("Distance in km. is: ");
    scanf("%d",&d_km);

    d_meter= d_km * 1000;
    d_feet = d_km * 3280.84;
    d_inches= d_km *39370.08;
    d_cm=d_km*1000*100;
    printf("The distance in Meter: %d \n",d_meter);
    printf("The distance in Feet: %d\n",d_feet);
    printf("The distance in Inches: %d\n",d_inches);
    printf("The distance in Centemeter: %d\n",d_cm);
    getch();
    return 0;
}
