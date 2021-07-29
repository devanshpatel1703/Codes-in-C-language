#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i=2;
    printf("Enter any number :");
    scanf("%d",&num);
    while(num!=1){
        if(num%i==0){
            printf("%d",i);
        }
        else{
            i++;
            continue;
        }
        num=num/i;
    }
    return 0;
}
