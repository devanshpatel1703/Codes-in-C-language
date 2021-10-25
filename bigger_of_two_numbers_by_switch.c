#include <stdio.h>

int main()
{
    int a,b,c=0;
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    switch(a>b){
        case 0: printf("B is bigger than A.");
        break;
        
        default : printf("A is bigger than B.");
    }
    
    return 0;
}
