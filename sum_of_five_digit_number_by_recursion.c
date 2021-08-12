#include <stdio.h>
int sum(int);
int main() 
{
    int num,s;
    printf("Enter any 5 digit number to sum its digits :");
    scanf("%d",&num);
    s=sum(num);
    printf("The sum of digits is :%d",s);
    return 0;
}
int sum(int a)
{
    int su,n,r;
    if(a!=0){
        r=a%10;
        su=r+sum(a/10);
        return su;
    }
    else
        return 0;
}
