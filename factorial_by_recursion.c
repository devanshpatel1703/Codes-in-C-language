#include <stdio.h>
int factorial(int);
int main() 
{
    int a,num,fact;
    printf("Enter any number to gert factorial :");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial is :%d",fact);
    return 0;
}
int factorial(int x)
{
    int t;
    if(x==1){
        return 1;
    }
    else{
        t=x*factorial(x-1);
    return(t);   
    }
}
