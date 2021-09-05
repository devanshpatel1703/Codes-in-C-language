#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,i,j;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    printf("\n\nSquare of all the even numbers is :\n");
    for(i=a;i<=b;i++){
        if(i%2==0){
            printf("%d^2 =%d\n",i,i*i);
        }
    }
    printf("\n____________\nSquare of all the odd numbers is :\n");
    for(j=a;j<=b;j++){
        if(j%2!=0){
            printf("%d^2 =%d\n",j,j*j);
        }    
    }
    return 0;
}
