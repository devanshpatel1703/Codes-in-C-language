#include <stdio.h>
#include <math.h>
int factorial(int);
int main() 
{
    int sum=0,r,num,t,fac;
    printf("Enter a number to calculate the sum of factoral of the digits :");
    scanf("%d",&num);
    t=num;
    while(num>0){
        r=num%10;
        fac=factorial(r);
        sum=sum+fac;
        num/=10;
    }
    printf("The sum of factorial of all the digits of %d in %d.",t,sum);
    return 0;
}
int factorial(int n)
{
    int i=1,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
