#include <stdio.h>

int main() 
{
    int n,temp,i,r;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter %d element of array :",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the position till you want to rotate the array :");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        temp=a[i];
        a[i]=a[n-(i+1)];
        a[n-(i+1)]=temp;
    }
    printf("\n\nThe new array is :\n\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
