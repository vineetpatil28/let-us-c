#include<stdio.h>
int fact(int i) {
    if (i >= 1) {
        return i*fact(i-1);
    } else {
        return 1;
    }
    
}
int main() {
    int i;
    printf("\n Enter any number:");
    scanf("%d",&i);
    printf("Factorial of %d = %d",i,fact(i));
    return 0;
}
