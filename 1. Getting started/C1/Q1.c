#include<stdio.h>
int main()
{
    int basic_salary,dallowance,house_rent,gross_salary;
    printf("Enter Basic salary:");
    scanf("%d",&basic_salary);

    dallowance = 0.4* basic_salary;
    house_rent =0.2* basic_salary;

    gross_salary= basic_salary+dallowance+house_rent;
    printf("\n Basic salary: %d",basic_salary);
    printf("\n Dearness allowance: %d",dallowance);
    printf("\n House rant: %d",house_rent);
    printf("\n Gross salary: %d",gross_salary);

    return 0;

}
