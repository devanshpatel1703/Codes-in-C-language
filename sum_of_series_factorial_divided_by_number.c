#include <stdio.h>
#include <math.h>
int factorial(int);
int main()
{
    int i,n,sum=0;
    printf("Enter the number of terms which you want sum :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(factorial(i)/i);
    }
    printf("The sum of %d terms is :%d\n",n,sum);
}
int factorial(int a)
{
    int j=1,new_sum=1;
    for(j=1;j<=a;j++){
        new_sum=new_sum*j;
    }
    return new_sum;
}
