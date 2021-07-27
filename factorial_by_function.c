#include <stdio.h>
int factorial(int);
int main() 
{
    int num,o;
    printf("Enter any number :");
    scanf("%d",&num);
    o=factorial(num);
    printf("Factorial is  =%d",o);
    return 0;
}
int factorial(num)
{
    int i=1;
    int fact=1;
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    return(fact);
}
