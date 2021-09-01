#include <stdio.h>
#include <math.h>
//sum of series 1+1/2+1/3+1/4+1/5............n
//result rounded off to 2 digits after decimal
int main() 
{
    float i=1,sum=0;
    int lim;
    printf("Enter the limit till you want the sum :");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++){
        sum=sum+1/i;
    }
    printf("Sum of the series is :%.2f",sum);
    return 0;
}
