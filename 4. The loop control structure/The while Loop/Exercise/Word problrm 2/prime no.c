#include<stdio.h>
int main()
{
    int i, count,num,prime;
     printf("\nThe list of prime number form 1 to 300: ");
     for(i=1;i<=300;i++)
     {
        if(i == 1)
        {
            printf("\nNumber 1 is neither prime nor composite!\n");
            continue;
        }
        count = sqrt(i);
        prime = 1;
        for(num=2; num <= count; num++)
        {
            if( i % num == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime)
        {
            printf("%d\n",i);
        }
     }
     return 0;
}
