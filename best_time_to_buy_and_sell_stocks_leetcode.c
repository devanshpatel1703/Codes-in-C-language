#include <stdio.h>
int main() 
{
    int n,i,j,max=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element in array :",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if((arr[j]-arr[i])>max){
                max=(arr[j]-arr[i]);
            }
        }
    }
    printf("The maximum profit is : %d",max);
    return 0;
}
