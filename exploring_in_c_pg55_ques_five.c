#include <stdio.h>
#include <math.h>
int main() 
{
    int num,j,k,rem1,rem2,i,temp1,temp2;
    float num1;
    for(i=1000;i<9999;i++){
        num1=pow(i*1.0,0.5);
        num=num1;
        if(num1-num==0){
            temp1=i%100;
            temp2=i/100;
            for(j=0;j<=9;j++){
                for(k=0;k<=9;k++){
                    if(((j*j)==temp1)&&((k*k)==temp2)){
                        printf("%d\n",i);
                    }
                }
            }
        }
        
    }
    return 0;
}
