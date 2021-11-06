#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i,temp,sum,j;
    printf("Enter the number till where you want PERFECT NUMBERS :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        temp=i;
        int sum=0;
        for(j=1;j<i;j++){
            if(temp%j==0){
                sum=sum+j;
            }
        }
        if(temp==sum){
            printf("%d\n",i);
        }
    }
    return 0;
}
