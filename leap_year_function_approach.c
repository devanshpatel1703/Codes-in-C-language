// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void year(int);
int main() 
{
    int yr,o;
    printf("Enter any year :");
    scanf("%d",&yr);
    year(yr);
    return 0;
}
void year(int x)
{
    if((x%100==0)&&(x%400==0)||(x%100!=0)&&(x%4==0)){
        printf("Year is leap");
    }
    else{
        printf("Year is not leap");
    }
}
