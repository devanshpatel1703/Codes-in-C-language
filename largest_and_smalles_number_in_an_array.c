#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n],max,min,i;
    for(i=0;i<=n-1;i++){
        printf("Enter the %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Maximum :%d\nMinimum :%d",max,min);
    return 0;
}
