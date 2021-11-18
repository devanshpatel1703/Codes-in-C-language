#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    printf("Enter the size of array :"); 
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("Enter the %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
        for(i=0;i<=n/2;i++){
            if(arr[i]==arr[n-1-i]){
            printf("Element %d = element %d\n--> %d = %d\n",i,n-1-i,arr[i],arr[n-1-i]);
            }
        }
    }
    else{
        for(i=0;i<=n/2+1;i++){
            if(arr[i]==arr[n-1-i]){
            printf("Element %d = element %d\n--> %d = %d\n",i,n-1-i,arr[i],arr[n-1-i]);
            }
        }
    }
    return 0;
}
