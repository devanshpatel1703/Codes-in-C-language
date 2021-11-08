#include <stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the number of rows and columns :");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(j%2!=0){
                printf("0   ");    
            }
            else{
                printf("1   ");
            }
        }
        printf("\n");
    }
    return 0;
}
