#include <stdio.h>
#include <math.h>
 int main()
{ 
    int n,element,position,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    printf("The old array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter the position which you want to delete :");
    scanf("%d",&position);
    position--;
    for(i=position;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("The new array is :\n");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
