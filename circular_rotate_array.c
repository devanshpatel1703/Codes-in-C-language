// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n,temp;
    printf("Enter element size : ");
    scanf("%d",&n);
    printf("Enter array : \n");
    int a[n],j,i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
        for(i=0;i<n-1;i++){
            temp=a[n-i-1];
            a[n-i-1]=a[n-i-2];
            a[n-i-2]=temp;
        }
    printf("Array afrer Circular rotation :\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
