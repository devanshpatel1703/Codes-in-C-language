#include <stdio.h>
int main()
{
    int i,j,r,k,temp,row;
    printf("Enter the value of rows and column :");
    scanf("%d",&r);
    row=r;
    for(i=1;i<=r;i++){
        temp=i;
        for(j=temp;j<=row;j++){
            printf("%d ",j);
        }
        for(k=i-1;k>=1;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
