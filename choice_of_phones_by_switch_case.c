#include <stdio.h>

int main() 
{
    int a,r;
    printf("1 for Samsung.\n2 for Redmi.\n");
    printf("Enter the choice of phone you want :");
    scanf("%d",&a);
    switch(a){
        case 1:
           printf("Enter The choice of Samsung ram and storage :");
           scanf("%d",&r);
           switch(r){
               case 6:
               printf("Price is 12000\n");
               break;
               case 8:
               printf("Price is 15000\n");
               break;
           }
           break;
        case 2:
            printf("Enter The choice of Redmi ram and storage :");
            scanf("%d",&r);
            switch(r){
                case 6:
                printf("Price is 20000\n");
                break;
                case 8:
                printf("Price is 25000\n");
                break;
            }
    }
    return 0;
}
