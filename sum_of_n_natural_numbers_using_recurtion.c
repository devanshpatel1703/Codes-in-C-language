#include <stdio.h>
#include <math.h>
int fcn(int);
int main() 
{
    int n;
    printf("Enter number till you want sum :");
    scanf("%d",&n);
    printf("The sum is : %d",fcn(n));
}
int fcn(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return n+fcn(n-1);
    }
}
