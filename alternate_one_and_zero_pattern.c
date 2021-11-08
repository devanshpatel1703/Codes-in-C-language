#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        if(i%2!=0){
            for(j=1;j<=c;j++){
            printf("1   ");
            }
        }
        else{
            for(j=1;j<=c;j++){
            printf("0   ");
            }
        }
        printf("\n");
    }
    return 0;
}
