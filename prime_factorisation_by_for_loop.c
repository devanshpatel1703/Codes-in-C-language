#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i;
    printf("Enter any number :");
    scanf("%d",&num);
    for(i=2;i<=num;){
        if(num%i==0){
            printf("%d ",i);
        }
        else{
            i++;
            continue;
        }
        num=num/i;
    }
    return 0;
}
