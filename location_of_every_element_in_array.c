#include <stdio.h>

int main() 
{
    int arr[]={10,20,30,45,67,56,74};
    int i=1,*j;
    for(i=0;i<=6;i++){
        printf("%d--%u\n",arr[i],&arr[i]);
    }
    return 0;
}
