#include <stdio.h>
int main() 
{
    int clas,sub;
    printf("Enter your class :");
    scanf("%d",&clas);
    printf("Enter the number of subjects you failed :");
    scanf("%d",&sub);
    switch(clas){
        
        case 1:
        switch(sub){
            case 5:
            printf("No grace marks\n");
            break;
            case 4:
            printf("No grace marks\n");
            break;
            default:
            printf("5 Marks each subjects\n");
            break;
        }
        break;
        
        case 2:
        switch(sub){
            case 5:
            printf("No grace marks\n");
            break;
            case 4:
            printf("No grace marks\n");
            break;
            case 3:
            printf("No grace marks\n");
            break;
            default:
            printf("4 Marks each subjects\n");
            break;
        }
        break;
        
        case 3:
        switch(sub){
            case 5:
            printf("No grace marks\n");
            break;
            case 4:
            printf("No grace marks\n");
            break;
            case 3:
            printf("No grace marks\n");
            break;
            case 2:
            printf("No grace marks\n");
            break;
            default:
            printf("5 Marks each subjects\n");
        } 
        break;
            
    }
    return 0;
}
