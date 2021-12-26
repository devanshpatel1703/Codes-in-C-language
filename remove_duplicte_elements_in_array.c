#include <stdio.h>
int main() 
{
    int n,i,max,count=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element in array :",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int size;
    size=++max;
    int brr[size];
    for(i=0;i<size;i++){
        brr[i]=0;
    }
    for(i=0;i<n;i++){
        brr[arr[i]]++;
    }
    printf("\n\nThe original array frequncy is :\n");
    for(i=0;i<size;i++){
        printf("%d occured %d times\n",i,brr[i]);
    }
    for(i=0;i<size;i++){
        if(brr[i]==1){
            continue;
        }
        else if(brr[i] > 1){
            brr[i]=1;
        }
    }
    printf("\nThe result array frequncy is :\n");
    for(i=0;i<size;i++){
        printf("%d elemnt is %d times.\n",i,brr[i]);
    }
    for(i=0;i<size;i++){
        if(brr[i]>0){
            count++;
        }
    }
    int result[count];
    int p=0;
    for(i=0;i<size;i++){
        if(brr[i]>0){
            result[p]=i;
            p++;
        }
    }
    printf("\nAll the unique element are :\n");
    for(i=0;i<count;i++){
        printf("%d ",result[i]);
    }
    return 0;
}
