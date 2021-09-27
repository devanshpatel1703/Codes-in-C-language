#include <stdio.h>

int main() 
{
    int i, j, r,k; 
 	printf("Enter Right Arrow Star Pattern Rows =  ");
 	scanf("%d", &r);
    for(i=1;i<=r;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=r-i;k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\b\b");
    for(i=r;i>=1;i--){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=r-i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
