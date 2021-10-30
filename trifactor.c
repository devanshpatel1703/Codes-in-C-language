#include <stdio.h>
int main() 
{
    int num,i,count=0;
    printf("Enter a number to check trifactor :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==3){
        printf("Yes the number is tri factor.");
    }
    else{
        printf("No the number is not tri factor.");
    }
    return 0;
}
