#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i=1,sum=0,count=0;
    printf("Keep entering numbers and when you want to stop press 0.\n");
    printf("Enter a number :");
    scanf("%d",&n);
    while(n>0){
        sum=sum+n;
        printf("Enter a number :");
        scanf("%d",&n);
    }
    printf("\nSum of all the number entered is :%d",sum);
    while(sum%10!=0){
        count++;
        sum=sum/10;
    }
    printf("\nNumber of digits in sum :%d",count);
    return 0;
}
