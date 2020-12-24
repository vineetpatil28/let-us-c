#include<stdio.h>
int main()
/*{
    int num,i;

    printf("Enter a number");
    scanf("%d",&num);

    i=2;
    while(i <= num - 1)
    {
        printf("current i value %d\n", i);
        if(num % i == 0) {
            printf("Not a prime number");
            break;
        }
        i++;
    }
    if (i == num) {
        printf("Prime number");
    }
}*/
{
    int i=1, j=1;

    while(i++ <= 100 )
    {
        while(j++ <= 200 )
        {
            if (j %2 == 0)
                break;
            else
                printf("%d %d\n",i,j);
        }
    }
}
