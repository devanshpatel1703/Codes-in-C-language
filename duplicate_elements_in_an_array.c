#include <stdio.h>
#include <math.h>
int main()
{ 
    int n,i,max,dup=0;
    printf("Enter the size of of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int size=max+1;
    int count[size];
    for(i=0;i<size;i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(i=0;i<size;i++){
        if(count[i]>1){
            dup++;
        }
    }
    printf("Total duplicate elements are : %d",dup);
    return 0;
}
