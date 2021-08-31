#include <stdio.h>
#include <math.h>
int main() 
{
    int num,i=1;
    printf("Enter a limit till you want square of even numbers :");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            printf("%d is even and square is :%d\n",i,i*i);
        }
    }
    return 0;
}
