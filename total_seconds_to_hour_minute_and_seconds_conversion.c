#include <stdio.h>
int main() 
{
    int sec,r;
    printf("Enter three numbers :");
    scanf("%d",&sec);
    if(sec>3600){
        r=sec/3600;
        printf("%d Hours ",r);
        sec=sec-r*3600;
    }
    if(sec>60){
        r=sec/60;
        printf("%d Minutes ",r);
        sec=sec-r*60;
    }
    printf("%d Seconds",sec);
    return 0;
}
