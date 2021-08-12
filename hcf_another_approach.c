#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,i=1,hcf;
    printf("Enter 2 numbers you want to take HCF of :");
    scanf("%d %d",&a,&b);
    for(i=1;(i<=a)&&(i<=b);++i){
        if((a%i==0)&&(b%i==0)){
            hcf=i;
        }
    }
    printf("The HCF of the numbers is :%d",hcf);
    return 0;
}
