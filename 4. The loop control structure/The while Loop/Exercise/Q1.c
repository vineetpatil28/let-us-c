#include<stdio.h>
int main()
{                   //This program shows all even numbers
    int i ;

    for(i = 1; i<=300 ; i++ )
    {
        if( i%2==0 )   //not a prime number

            printf("%d\t",i);
    }

}

