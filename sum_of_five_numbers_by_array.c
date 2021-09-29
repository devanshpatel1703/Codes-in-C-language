#include <stdio.h>

int main() 
{
    int i=0,sum=0,num[5];
    for(i=1;i<=5;i++){
        printf("Enter %d number :",i);
        scanf("%d",&num[i]);
    }
    for(i=1;i<=5;i++){
        sum=sum+num[i];
    }
    printf("The sum is :%d",sum);
    return 0;
}
