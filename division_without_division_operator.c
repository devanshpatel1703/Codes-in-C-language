#include <stdio.h>

int main()
{
    int num,d,sum=0,count=0;
    printf("Enter the divisor and divident :");
    scanf("%d %d",&num,&d);
    while(sum<num){
        sum=sum+d;
        count++;
    }
    printf("The division is :%d",count);
    return 0;
}
