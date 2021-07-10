// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    long long i,num,count=0;
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%lld",count);
    return 0;
}
