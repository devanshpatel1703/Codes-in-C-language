#include <stdio.h>
int main() 
{
    int n1,n2,n3;
    printf("Enter three numbers :");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1==n3||n2==n3){
        printf("Their is no difference between 2 numbers");
    }
    if(n1>n2){
        if(n1>n3){
            printf("%d Is largest",n1);
        }
        if(n1<n3){
            printf("%d Is largest",n3);
        }
    }
    else if(n2>n1){
        if(n2>n3){
            printf("%d Is largest",n2);
        }
        if(n2<n3){
            printf("%d Is largest",n3);
        }
    }
    else{
        printf("Their is no difference between 2 numbers");
    }
    return 0;
}
