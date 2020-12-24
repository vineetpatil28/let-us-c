#include<stdio.h>
int main()
{
    int goals ;
    printf("Enter the number of goals scored against india");
    scanf("%d",&goals);
    if (goals<=5)
        goto sos;
    else
    {
        printf("About time soccer players learnt C\n");
        printf("and said goodbye! adieu! to  soccer");

    }
    sos:
        printf("To err is human!");
}
