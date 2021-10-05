#include <stdio.h>
int main() 
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,j;
    int brr[10];
    printf("The 1st array\n");
    for(i=0;i<=9;i++){
        printf("%d\n",arr[i]);
    }
    printf("\n\n");
    
    for(i=0;i<=9;i++){
        brr[9-i]=arr[i];
    }
    printf("The 2nd array\n");
    for(j=0;j<=9;j++){
        printf("%d\n",brr[j]);
    }
    return 0;
}
