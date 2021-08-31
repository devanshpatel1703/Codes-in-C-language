#include <stdio.h>
#include <math.h>
int main() 
{
    int n1,n2,i=1,sum=0;
    printf("Enter the interval in wich you want sum of non-17 multiplies :");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(i=n1;i<=n2;i++){
        if(i%17!=0){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nSum of all the numbers in the range which are not multiple of 17 is :%d",sum);
    return 0;
}
