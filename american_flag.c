#include <stdio.h>
int main() 
{
    int i,j;
    for(i=1;i<=10;i++){
        if(i>=1&&i<=5){
            for(j=1;j<=10;j++){
                printf("*");
            }
            for(j=6;j<=25;j++){
                printf("=");
            }
            printf("\n");
        }
        else{
            for(j=1;j<=30;j++){
                printf("=");
            }
            printf("\n");
        }
    }
    return 0;
}
