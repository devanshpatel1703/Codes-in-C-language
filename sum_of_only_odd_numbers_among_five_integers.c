#include <stdio.h>
int main() 
{
    int a,b,c,d,e,sum;
    printf("Enter 1st number :");
    scanf("%d",&a);
    if(a%2==0){
        a=0;
    }
    printf("Enter 2nd number :");
    scanf("%d",&b);
    if(b%2==0){
        b=0;
    }
    printf("Enter 3rd number :");
    scanf("%d",&c);
    if(c%2==0){
        c=0;
    }
    printf("Enter 4th number :");
    scanf("%d",&d);
    if(d%2==0){
        d=0;
    }
    printf("Enter 5th number :");
    scanf("%d",&e);
    if(e%2==0){
        e=0;
    }
    sum=a+b+c+d+e;
    printf("Sum of only odd values entered by you is :%d",sum);
    return 0;
}
