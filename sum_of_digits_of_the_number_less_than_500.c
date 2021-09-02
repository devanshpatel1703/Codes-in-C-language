#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i=1,sum=0,r;
    printf("Enter value of number :");
    scanf("%d",&num);
    if(num<500){
        while(num>0){
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        printf("The sum of its digits is :%d",sum);
    }
    else{
        printf("Number you entred is grater than 500.");
    }
    return 0;
}
