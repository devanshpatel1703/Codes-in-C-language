#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    switch(a>0){
        case 1: printf("Number is positive.");
        break;
        
        case 0: 
        switch(a<0){
            case 1: printf("It is negative number.");
            break;
            
            case 0: printf("It is zero.");
        }
    }
    
    return 0;
}
