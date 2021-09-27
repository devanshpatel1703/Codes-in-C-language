#include <stdio.h>

int main() 
{
    int i, j, r, c;
    printf("Please Enter the Number of rows:");
    scanf("%d", &r);
    printf("\nLARGE\n");
    for(i=1;i<=r;i++){
       for(j=1;j<=i;j++){
           printf("*\t");
       }
       printf("\n");
    }
    printf("\nMEDIUM\n");
    for(i=1;i<=r;i++){
       for(j=1;j<=i;j++){
           printf("* ");
       }
       printf("\n");
    }
    printf("\nSMALL\n");
    for(i=1;i<=r;i++){
       for(j=1;j<=i;j++){
           printf("*");
       }
       printf("\n");
    }
    return 0;
}
