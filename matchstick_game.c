#include <stdio.h>
int main()
{
    int match_stick=41,user_slect,new_matchstick;
    while(match_stick>=1){
        printf("Slect matchsticks from 1 to 7 :");
        scanf("%d",&user_slect);
        if(user_slect>7){
            printf("Invalid choice.");
            }
        new_matchstick=8-user_slect;
        printf("\nComputer has selected %d matchsicks:",new_matchstick);
        match_stick=match_stick-user_slect-new_matchstick;
        printf("\nMatchsticks left : %d\n",match_stick);
        if(match_stick ==1){
            printf("\n you lose this game.");
            break;
        }
    }
    return 0;
}
