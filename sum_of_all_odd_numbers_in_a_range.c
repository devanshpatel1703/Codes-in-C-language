#include <stdio.h>
#include <math.h>
int main() 
{
    int n1,n2,sum=0,count=0,i;
    printf("Enter a range in which you want sum of odd numbers :");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(i=n1;i<=n2;i++){
        if(i%2!=0){
            printf("%d ",i);
            sum=sum+i;
            count++;
        }
    }
    printf("\nBetween %d and %d thier are %d odd numbers and sum of them is %d.",n1,n2,count,sum);
    return 0;
}
