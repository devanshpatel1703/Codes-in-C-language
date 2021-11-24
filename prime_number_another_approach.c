#include <stdio.h>
int main() 
{
    int i,num;
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            printf("Not a prime number.");
            return 0;
        }
    }
    printf("Yes prime number");
    return 0;
}
