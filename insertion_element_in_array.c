#include <stdio.h>
#include <math.h>
 int main()
{ 
    int n,element,position,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++){
        printf("Enter %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the new element and position :");
    scanf("%d %d",&element,&position);
    for(i=position;i<n;i++){
        arr[i+1]=arr[i];
    }
    arr[position]=element;
    for(i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
