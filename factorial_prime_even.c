#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int num,fact,i,choice,t=1,flag=0;
    while(t){
    printf("\n1.Factorial of a number\n");
    printf("2.Prime or Composite\n");
    printf("3.Even or odd\n");
    printf("4.Exit\n");
    printf("Enter the number what you want to do :");
    scanf("%d",&choice);
    switch(choice)
    {
        
        case 1:
            printf("Enter the number :");
            scanf("%d",&num);
            fact=1;
            for(i=1;i<=num;i++){
                fact=fact*i;
            }
            printf("\nFactorial is =%d",fact);
            break;
        
        case 2:
            printf("Enter the number :");
            scanf("%d",&num);
            for(i=2;i<num/2;i++){
                if(num%i==0){
                    flag=1;
                }
                if(flag==0){
                    printf("The Number is prime\n");
                }
                if(flag==1){
                    printf("The number is composite\n");
                }
            break;
            
        case 3:
            printf("Enter the number :");
            scanf("%d",&num);
            if(num%2==0){
                printf("\nIt is even");
            }
            else
            printf("\nIt is odd");
            break;
            
        case 4:
            exit(0);
            t=0;
        
        default :
            printf("\nWrong Choice");
    
        }        
    }
}
    return 0;
}
