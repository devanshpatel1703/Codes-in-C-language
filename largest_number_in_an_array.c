#include <stdio.h>
int main() 
{
    int n,i,max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Enter the %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The biggest number in array is :%d",max);
    return 0;
}
