//sum of the series 1^4+2^4+4^4+7^4+11^4...........m^4
#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i=1,sum=0,term=1;
    printf("Enter value of number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+pow(term,4);
        term=term+i;
    }
    printf("The sum is :%d",sum);
    return 0;
}
