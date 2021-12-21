#include <stdio.h>
int main() 
{
    int num,r,temp,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if(temp==temp){
        printf("YES");
    }
    else{
        printf("No");
    }
    return 0;
}
