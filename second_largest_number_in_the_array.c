#include <stdio.h>
int main() 
{
    int n,max,i,position;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter %d element :",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            position=i;
        }
    }
    arr[position]=0;
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The second largest number in the array is %d",max);
    return 0;
}
