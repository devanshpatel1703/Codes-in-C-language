#include <stdio.h>
int main() 
{
    int r,c,i,j,temp;
    printf("Enter odd rows and odd colunms :");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r/2;i++){
        for(j=1;j<=c;j++){
            printf("1   ");
        }
        printf("\n");    
    }
    for(i=1;i<=c-1;i++){
        if(i==c/2){
            printf("1   0   ");
        }
        else{
            printf("1   ");
        }
    }
    printf("\n");
    for(i=1;i<=r/2;i++){
        for(j=1;j<=c;j++){
            printf("1   ");
        }
        printf("\n");    
    }
    return 0;
}
