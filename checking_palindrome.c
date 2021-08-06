#include <stdio.h>
int main() 
{
    int num,r,temp,sum;
    printf("Enter any number :");
    scanf("%d",&num);
    num=temp;
    while(num>0){
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if(num==temp){
        printf("YES");
    }
    else{
        printf("No");
    }
    return 0;
}
