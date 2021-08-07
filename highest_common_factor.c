#include <stdio.h>

int main() 
{
    int r,d,q,num1,num2,i=1;
    printf("You have to enter smaller number 1st and then larger number.\n\n");
    printf("Enter 1st number :");
    scanf("%d",&num1);
    printf("\nEnter 2nd number :");
    scanf("%d",&num2);
    while(num1%num2>0){
        r=num1%num2;
        num1=num2;
        num2=r;
    }
    printf("\nThe Heighest common factor is :%d",num2);
    return 0;
}
