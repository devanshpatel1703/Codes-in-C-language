#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,i,even=0,odd=0;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(i=a;i<=b;i++){
        if(i%2==0){
            even=even+i;
        }
        else{
            odd=odd+i;
        }
    }
    printf("Sum of all even numbers between them is :%d\nSum of all odd numbers between them is :%d",even,odd);
    return 0;
}
