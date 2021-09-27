#include <stdio.h>

int main() 
{
    int r,i,j,k;
    printf("Enter the number of rows (even) :");
    scanf("%d",&r);
    printf("The star pattern is :\n\n\n");
    for(i=1;i<=r;i++){
        if(i==r/2){
            for(j=1;j<=12;j++){
                printf("^");
            }
        }
        else{
            for(k=1;k<=5;k++){
                printf(" ");
            }
        }
        printf("^\n");
    }
    return 0;
}
