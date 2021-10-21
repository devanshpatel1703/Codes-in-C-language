#include <stdio.h>
#include <math.h>
int main() 
{
    int a,r,q,num,nnum=0,rev,res=0,rr;
    printf("Enter the number which you want to convert in octal :");
    scanf("%d",&num);
    while(num%8!=0){
        r=num%8;
        q=num/8;
        nnum=nnum*10+r;
        num=q;
    }
    while(nnum%10!=0){
        rr=nnum%10;
        nnum=nnum/10;
        res=res*10+rr;
    }
    printf("the octal of this number is :%d",res);
    return 0;
}
