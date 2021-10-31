#include <stdio.h>
#include <math.h>
int main() 
{
    int num,t;
    printf("Enter any number to find its first and last digit :");
    scanf("%d",&num);
    t=num%10;
    while(num>10){
        num=num/10;
    }
    printf("The 1st digit is %d\nThe last digit is %d",num,t);
    return 0;
}
