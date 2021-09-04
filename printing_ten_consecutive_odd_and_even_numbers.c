#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i=1,j=1,t;
    printf("Enter any number :");
    scanf("%d",&n);
    t=n;
    if(n%2==0){
        printf("\n\n\n10 Even numbers after %d are :\n",n);
        for(i=1;i<=10;i++){
            n=n+2;
            printf("%d ,",n);
        }
        printf("\n\n\n10 Odd numbers after %d are :\n",t);
        t=t+1;
        for(j=1;j<=10;j++){
            printf("%d ,",t);
            t=t+2;
        }
    }
    else{
        printf("10 Odd numbers after %d are :\n",n);
        for(i=1;i<=10;i++){
            n=n+2;
            printf("%d ,",n);
        }
        printf("\n\n\n10 Even numbers after %d are :\n",t);
        t=t+1;
        for(j=1;j<=10;j++){
            printf("%d ,",t);
            t=t+2;
        }
}
return 0;
}
