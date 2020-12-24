#include<stdio.h>
int main()
{
    int F;
    float C;

    printf("Enter Farenheit degree: ");
    scanf("%d", &F);

    C = (F-32)*5/9;

    printf("Temp. in Centigrade: %f", C);
    getch();
    return 0;
}
