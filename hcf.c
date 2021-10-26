#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i,r,d;
    printf("Enter two numbers which you want to find HCF :");
    scanf("%d %d",&num,&d);
    if(num<d){
        num=num+d;
        d=num-d;
        num=num-d;
    }
    while(num%d!=0){
        r=num%d;
        num=d;
        d=r;
    }
    printf("the HCF of the entred numbers is :%d",r);
    return 0;
}
