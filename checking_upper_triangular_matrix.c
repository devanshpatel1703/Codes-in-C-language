#include <stdio.h>

int main() 
{
    int rank,i,j,temp1,temp2;
    printf("Enter the rank of matrix :");
    scanf("%d",&rank);
    int array[rank][rank];
    for(i=0;i<rank;i++){
        for(j=0;j<rank;j++){
            printf("Enter %d and %d elememnt of array :",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\nThe matrix you entred is :\n");
    for(i=0;i<rank;i++){
        for(j=0;j<rank;j++){
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<rank;i++){
        for(j=0+i;j<rank;j++){
            if(array[i][j]!=0){
                temp1=1;
            }
        }
    }
    for(i=0;i<rank;i++){
        for(j=0;j<i;j++){
            if(array[i][j]==0){
                temp2=1;
            }
        }
    }
    if( temp1==1 && temp2==1){
        printf("Yes a triangluar matrix.");
    }
    else{
        printf("Not a triangluar matrix.");
    }
    return 0;
}
