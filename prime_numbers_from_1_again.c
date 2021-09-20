#include <stdio.h>
#include <math.h>
int main() 
{
    int i=1,a,j=1,t;
    printf("Enter any number :");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                t=0;
                break;
            }
            t=1;
        }
        if(t==1){
            printf("%d\n",i);
        }
    }
    return 0;
}
