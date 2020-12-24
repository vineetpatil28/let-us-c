#include<stdio.h>
int main()
{
// Current year  is X
// Year of joining is Y
// Year of service is Z
  int bonus,X,Y,Z ;

  printf("Enter the current year :   ");
  scanf("%d",&X);

  printf("Enter the year of joining:   ");
  scanf("%d",&Y);

  Z=X-Y;
  if(Z > 3)
  {
      bonus = 2500;
      printf("Bonus of employee is = Rs.  %d ",bonus );
  }
  getch();
  return 0;
}
