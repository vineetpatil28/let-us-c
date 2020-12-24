#include<stdio.h>
int main()
{
    int i;

    printf("\nEnter either 1 or 2 = ");
    scanf("%d",&i);

    if(i == 1)
        printf("\nYou would go to heaven ...!!\n");
    else
    {
        if(i == 2)
           printf("\nHell was created with you in mind ... !!\n");;

//        else
//            printf("How about mother earth...!!");
    }
    return 0;
    getch();
}
