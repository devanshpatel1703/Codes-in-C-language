#include <stdio.h>
int main() 
{
    int x,i=1,j=1;
    printf("Enter the side of the square :");
    scanf("%d",&x);
    printf("\n\n\n");
    for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            printf("# ");
        }
        printf("\n");
    }
    printf("\nnThe grid of this square is :%dx%d",x,x);
    return 0;
}
