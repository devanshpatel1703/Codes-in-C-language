#include <stdio.h>
int main() 
{
    int n,i=1,j=1,t;
    printf("Enter a limit till you want to print the prime numbers :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                t=0;
                break;
            }
            t=1;
        }
        if(t==1){
            printf("%d ",i);
        }
    }
    return 0;
}
