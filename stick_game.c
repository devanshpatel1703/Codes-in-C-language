
#include <stdio.h>

int main() 
{
    int n=21,u;
    while(n!=0){
        printf("pick a stick from 1,2,3,4 :");
        scanf("%d",&u);
        if(u>0&&u<5){
            n=n-u;
            printf("Computer has picked up %d sticks",5-u);
            n=n-(5-u);
        }
        if(n>0){
        printf("\nNow %d stick is left\n",n);
        if(n==1)
        {
            n--;
        printf("u lose ma chudao");
        }
        }
    }
    return 0;
}
