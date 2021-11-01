#include <stdio.h>
#include <math.h>
int factorial(int);
int main() 
{
    int sum=0,r,num,t,fac;
    printf("Enter a number to check if it is a strong number :");
    scanf("%d",&num);
    t=num;
    while(num>0){
        r=num%10;
        fac=factorial(r);
        sum=sum+fac;
        num/=10;
    }
    if(sum==t){
        printf("Yes it is a strong number.");
    }
    else{
        printf("No it is not a strong number.");
    }
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
