#include <stdio.h>
#include <math.h>
int main() 
{
    int i,num1,rem,rev1=0,sq1,sq2,temp,rem2,rev2=0;
    for(i=10;i<=100;i++){
        num1=i;
        rev1=0;
        rev2=0;
        while(num1>0){
            rem=num1%10;
            rev1=rev1*10+rem;
            num1=num1/10;
        }
        sq1=i*i;
        sq2=rev1*rev1;
        temp=sq2;
        while(temp>0){
            rem2=temp%10;
            rev2=rev2*10+rem2;
            temp=temp/10;
        }
        if(sq1==rev2){
            printf("%d\n",i);
        }
    }
    return 0;
}
