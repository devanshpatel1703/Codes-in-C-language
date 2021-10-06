#include <stdio.h>
int main() 
{
    int arr[10];
    int i,count=0,t,n;
    printf("Enter 10 numbers in the array :\n");
    for(i=0;i<=9;i++){
        printf("Enter %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search in the array :\n");
    scanf("%d",&n);
    for(i=0;i<=9;i++){
        t=arr[i];
        if(t==n){
            count++;
        }
    }
    printf("Number of time %d occured in the array is :%d",n,count);
    return 0;
}
