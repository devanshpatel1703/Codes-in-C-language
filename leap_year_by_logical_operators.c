#include <stdio.h>

int main() 
{
    int year;
    printf("Enter any year=");
    scanf("%d",&year);
    if(year%400==0||year%100!=0&&year%4)
        printf("Year is leap");
    else
        printf("Year is not leap");
    return 0;
}
