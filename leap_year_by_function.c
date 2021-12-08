#include <stdio.h>
#include <math.h>
int year(int);
int main()
{
    int y,res;
    printf("Enter any year :");
    scanf("%d",&y);
    res=year(y);
    if(res==1){
        printf("Yes leap year.");
    }
    else{
        printf("Not a leap year.");
    }
    return 1;
}
int year(int a)
{
    if((a%100!=0&&a%4==0)||(a%100==0&&a%400==0)){
        return 1;
    }
    else{
        return 0;
    }
}
