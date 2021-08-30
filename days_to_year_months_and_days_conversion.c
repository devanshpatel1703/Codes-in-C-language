#include <stdio.h>
int main() 
{
    int days,r;
    printf("Enter three numbers :");
    scanf("%d",&days);
    if(days>365){
        r=days/365;
        printf("%d Year ",r);
        days=days-r*365;
    }
    if(days>30){
        r=days/30;
        printf("%d Months ",r);
        days=days-r*30;
    }
    printf("%d Days",days);
    return 0;
}
