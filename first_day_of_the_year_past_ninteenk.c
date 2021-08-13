#include <stdio.h>

int main() 
{
    int basic_year=1900,year,year_btw,leap_year,normal_year,total_days;
    printf("Enter any year past 1900:");
    scanf("%d",&year);
    year_btw=year-1900-1;
    leap_year=year_btw/4;
    normal_year=year_btw-leap_year;
    total_days=normal_year*365+leap_year*366+1;
    if(total_days%7==0)
    printf("1st day of this year is monday");
    else if(total_days%7==1)
    printf("1st day of this year is tueday");
    else if(total_days%7==2)
    printf("1st day of this year is wednesday");
    else if(total_days%7==3)
    printf("1st day of this year is thursday");
    else if(total_days%7==4)
    printf("1st day of this year is friday");
    else if(total_days%7==5)
    printf("1st day of this year is saturday");
    else
    printf("1st day of this year is sunday");
    return 0;
}
