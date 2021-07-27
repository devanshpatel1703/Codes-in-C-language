#include <stdio.h>
#include <math.h>
int power(int,int);
int main() 
{
    int e,p,r;
    printf("Enter a number which you want to raise :");
    scanf("%d",&e);
    printf("Enter the power wich you want it to raise :");
    scanf("%d",&p);
    r=power(e,p);
    printf("%d to the power %d is = %d",e,p,r);
    return 0;
}
int power(a,b)
{
    int f=pow(a,b);
    return(f);
}
