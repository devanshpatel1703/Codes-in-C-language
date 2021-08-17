#include <stdio.h>
int main() 
{
    int n1,n2,i=1,j=1,t;
    printf("Enter a range in which you want to print the prime numbers :");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++){
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
