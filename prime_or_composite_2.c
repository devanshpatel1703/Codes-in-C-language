// Online C compiler to run C program online
#include <stdio.h>

int main() 
{   
    int num,i,c=0;
    printf("enter any number :");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==0){
        printf("\nPrime");
    }
    else{
        printf("\nComposite");
    }
    return 0;
}
