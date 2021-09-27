#include <stdio.h>
int main() 
{
    int i,j,k,r;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    printf("\n The pattern is :\n\n\n");
    for(i=r;i>=1;i--){
        for(j=1;j<=r-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
