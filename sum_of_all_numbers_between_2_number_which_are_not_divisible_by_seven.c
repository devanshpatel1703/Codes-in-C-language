#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,i,sum=0;
    printf("Input two numbers(integer):");
    scanf("%d %d", &a, &b);
    if(a>b){
        a=a+b;
        b=a-b;a=a-b;
    }
    for(i=a;i<=b;i++){
        if(i%7!=0){
            sum=sum+i;
        }
    }
    printf("\nSum of all numbers between said numbers (inclusive) not divisible by 7 :%d",sum);
    return 0;
}
