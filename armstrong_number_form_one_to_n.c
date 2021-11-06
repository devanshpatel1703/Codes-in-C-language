#include <stdio.h>
#include <math.h>
int cube(int);
int main() 
{
    int n,i,temp,sum,j,r;
    printf("Enter the number till where you want PERFECT NUMBERS :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        temp=i;
        sum=0;
        while(temp!=0){
            r=temp%10;
            sum=sum+cube(r);
            temp/=10;
        }
        if(i==sum){
            printf("%d\n",i);
        }
    }
    return 0;
}
int cube(int n)
{
    return (n*n*n);
}
