#include <stdio.h>
#include <math.h>
int main() 
{
    int num,j,k,rem1,rem2,i,temp1,temp2,n1,n2,n3,n4;
    float num1;
    for(i=1000;i<9999;i++){
        num1=pow(i*1.0,0.5);
        num=num1;
        if(num1-num==0){
            temp1=i%100;
            temp2=i/100;
            n2=temp2%10;
            temp2/=10;
            n1=temp2;
            n4=temp1%10;
            temp1/=10;
            n3=temp1;
            if(n1==n2&&n3==n4){
                printf("%d\n",i);
            }
            
        }
        
    }
    return 0;
}
