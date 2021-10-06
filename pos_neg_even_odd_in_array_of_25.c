#include <stdio.h>
int main() 
{
    static int arr[25];
    int i,pos=0,neg=0,even=0,odd=0;
    printf("Enter 25 numbers in the array.\n");
    for(i=0;i<=25;i++){
        printf("Enter %d element of array :",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=25;i++){
        if(arr[i]>0){
            pos++;
        }
        if(arr[i]<0){
            neg++;
        }
        if(arr[i]%2==0){
            even++;
        }
        if(arr[i]%2!=0){
            odd++;
        }
    }
    printf("Positive=%d\nNegetive=%d\nEven=%d\nOdd=%d\n",pos,neg,even,odd);
    return 0;
}
