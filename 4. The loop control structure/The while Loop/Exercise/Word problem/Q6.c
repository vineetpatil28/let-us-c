#include<stdio.h>
int main()
{
    int m = 21, user_choice, computer_choice;
    while(m >= 1) {
        printf("\nThe total number of match-stick: %d",m);
        printf("\nPick up the match-stick 1 to 4 only: ");
        scanf("%d",&user_choice);
        if(user_choice > 4) {
            printf("\nInvalid Entry...! Pick Again\n");
            continue;
        }
        computer_choice = 5 - user_choice;
        printf(" The computer choice is :%d\n",computer_choice);
        m = m -user_choice-computer_choice;
        if (m == 1) {
            printf("\nGAME OVER...!");
            break;
        }
    }
    scanf("Press any key to exit");
    return 0;
}
