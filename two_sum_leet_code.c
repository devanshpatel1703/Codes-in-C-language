#include <stdio.h>
int main() 
{
    int n,i,target,j;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element in array :",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter target :");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    return 0;
}
