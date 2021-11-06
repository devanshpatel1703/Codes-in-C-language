#include <stdio.h>
#include <math.h>
int factorial(int);
int main() 
{
    int fact,i,l,sum,temp,r;
    printf("Enter the number till you want to find strong number :");
    scanf("%d",&l);
    for(i=1;i<=l;i++){
        int temp=i;
        sum=0;
        while(temp!=0){
            r=temp%10;
            fact=factorial(r);
            sum=sum+fact;
            temp/=10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
    return 0;
}
int factorial(int r)
{
    int j=1,fac=1;
    for(j=1;j<=r;j++){
        fac=fac*j;
    }
    return fac;
}
