#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i=1,flag=2;
    printf("Enter any number :");
    scanf("%d",&num);
    for(i=2;i<=num-1;i++){
        if(num%i==0){
        flag=1;
        break;
        }
    }
    if(flag==1){
        printf("Composite");
    }
    else if(flag==2){
        printf("Prime");
    }
    return 0;
}
