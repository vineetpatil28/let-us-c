#include<stdio.h>
int main()
{
    int n, r, c, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    original = n;
    while(n>0){
        r = n%10;
        c = r*r*r;
        sum = sum + c;
        n = n/10;
    }
    if(original==sum) {
        printf("It is  Armstrong number...!");
    } else {
        printf("It is not Armstrong number...!");
    }
}
