#include <stdio.h>
#include <math.h>
int rev(int);
int main() 
{
    int i,num1,rem,rev1=0,sq1,sq2,temp,rem2,rev2=0;
    for(i=10;i<=100;i++){
        num1=i;
        rev1=rev(num1);
        sq1=i*i;
        rev1=rev1*rev1;
        rev2=rev(rev1);
        if(sq1==rev2){
            printf("%d\n",i);
        }
    }
    return 0;
}
int rev(int n)
{
    int rem,num=0;
    while(n>0){
        rem=n%10;
        num=num*10+rem;
        n/=10;
    }
    return (num);
}
