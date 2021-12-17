#include <stdio.h>
#include <math.h>
 int main()
{ 
    int n,temp,j,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element of array :",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is :\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
