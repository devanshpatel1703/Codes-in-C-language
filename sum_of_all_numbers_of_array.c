#include <stdio.h>
int main() 
{
    int arr[5]={1,2,3,4,5};
    int sum=0,i=0;
    for(i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("The sum of all numbers of array is :%d",sum);
    return 0;
}
