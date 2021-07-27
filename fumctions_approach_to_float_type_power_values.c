#include <stdio.h>
#include <math.h>
float power(float,int);
int main() 
{
    float e,r;
    int p;
    printf("Enter a number which you want to raise :");
    scanf("%f",&e);
    printf("Enter the power wich you want it to raise :");
    scanf("%d",&p);
    r=power(e,p);
    printf("%f to the power %d is = %f",e,p,r);
    return 0;
}
float power(float a,int b)
{
    float f;
    f=pow(a,b);
    return(f);
}
