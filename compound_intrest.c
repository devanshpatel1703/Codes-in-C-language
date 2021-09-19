#include <stdio.h>
#include <math.h>
int main() 
{
    int p,t,n;
    float r,a;
    printf("Enter Principle :");
    scanf("%d",&p);
    printf("Enter Rate :");
    scanf("%f",&r);
    printf("Enter Time (in yrs) :");
    scanf("%d",&t);
    printf("Enter Times the intrest multiplied :");
    scanf("%d",&n);
    a=p*pow((1+(r/t)),n*t);
    printf("The CI is :%d",a);
    return 0;
}
