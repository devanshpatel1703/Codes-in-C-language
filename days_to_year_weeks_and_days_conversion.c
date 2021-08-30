#include <stdio.h>
#include <math.h>
int main()
{
    int day,temp;
    printf("Enter any number of days :");
    scanf("%d",&day);
    temp=day;
    if(day>365){
        temp=day/365;
        printf("%d Year",temp);
        day=day-temp*365;
    }
    if(day>7){
        temp=day/7;
        printf(" %d Weeks",temp);
        day=day-temp*7;
    }
    printf(" %d Days",day);
    return 0;
}
