#include <stdio.h>
#include <math.h>
int main() 
{
    int a,r,num=0;
    printf("Enter a number to reverse its digits :");
    scanf("%d",&a);
    while(a>0){
        r=a%10;
        num=num*10+r;
        a=a/10;
    }
    printf("The reversed number is :%d",num);
}
