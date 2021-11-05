#include <stdio.h>
int main() 
{
    int n,p,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter %d entery :",i);
        scanf("%d",&arr[i]);
    }
    p=*arr;
    for(i=1;i<n;i++){
        if(*(arr+i)>p){
            p=*(arr+i);
        }
    }
    printf("The biggest number in the array is :%d",p);
    return 0;
}
