#include<stdio.h>
int main()
{
    int P,C,M,B,E,total;
    float percentage;
    printf("Enter the marks of Physics: ");
    scanf("%d",&P);

    printf("Enter the marks of Chamestry: ");
    scanf("%d",&C);

    printf("Enter the marks of Maths: ");
    scanf("%d",&M);

    printf("Enter the marks of Biology: ");
    scanf("%d",&B);

    printf("Enter the marks of English: ");
    scanf("%d",&E);

    total= P+C+M+B+E;
    percentage=total/5;
    printf("Aggregate marks: %d\n",total);
    printf("Percentage obtained: %f %%\n",percentage);
    getch();
    return 0;
}
