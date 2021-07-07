// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    float x,t,i=2,tn,tns,ans;
    scanf("%f",&x);
    t=(x-1)/x;
    for(i=2;i<=7;i++){
        tn=tn+pow(t,i)*0.5;
        
}
    ans=t+tn;
    printf("%f",ans);
    return 0;
}    
