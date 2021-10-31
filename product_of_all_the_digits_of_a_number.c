#include <stdio.h>
#include <math.h>
int main() 
{
    int num,sum=1,r;
    printf("Enter any number to find its first and last digit :");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        sum=sum*r;
        num/=10;
    }
    printf("The product of the digits is :%d",sum);
    return 0;
}
