#include<stdio.h>

int main()

{

    int yr,r,t;

    printf("Enter the year to find in which century it is :");

    scanf("%d",&yr);

    while(yr>99){

        yr=yr/10;

    }

    t=yr;

    yr=yr*100;

    printf("The century is :%d",yr);

    printf("\nThis is %d century.",t);

    return 0;

}
