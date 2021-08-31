#include <stdio.h>
#include <math.h>
int main() 
{
    int n1,n2,i;
    printf("Enter the interval in wich you want numbers which leave remainder 2 or 3 when divided by 7 :");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(i=n1;i<=n2;i++){
        if((i%7==2)||(i%7==3)){
            printf("%d ",i);
        }
    }
    return 0;
}
