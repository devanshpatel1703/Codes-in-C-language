#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1,t,j,sum=0;
    printf("Start entering numbers :");
    scanf( "%d",&n);
    for(i=1;i<=n;i++){
        for(j=2;j<=i-1;j++){
            if(i%j!=0){
            t=1;
            }
            else{
            t=0;
            break;
            }
        }
        if(t==1){
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("\nSum of all the prime numbers between 1 and %d is :%d\n",n,sum);
    return 0;
}
