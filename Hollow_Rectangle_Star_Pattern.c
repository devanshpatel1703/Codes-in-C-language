#include <stdio.h>

int main() 
{
    int i, j, r, c;
    printf("Please Enter the Number of rows:\n");
    scanf("%d", &r);
    printf("Please Enter the Number of Columns:\n");
    scanf("%d", &c);
    for(i=1;i<=r;i++){
        printf("*");
        if(i==1||i==r){
            for(j=1;j<=c-2;j++){
            printf("*");
            }   
        }
        else{
            for(j=1;j<=c-2;j++){
            printf(" ");
        }
        }
        printf("*\n");
    }
    return 0;
}
