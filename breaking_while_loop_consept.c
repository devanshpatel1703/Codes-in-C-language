#include <stdio.h>
int main() 
{
    int a,b,c,t=1;
    while(t=1){
        printf("\nEnter a :");
        scanf("%d",&a);
        if(a>0){
            printf("yes it is greater than 1\nt=%d",t);
        }
        else{
            printf("it is not greater than 1");
            t=0;
            break;
        }
    }
    printf("\nThanks");
    return 0;
}
