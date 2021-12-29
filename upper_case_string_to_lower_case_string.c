#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter the size of string you want to enter :");
    scanf("%d",&n);
    char array1[n];
    printf("Enter the Capital alphabet string :");
    scanf("%s",array1);
    for(i=0;i<n;i++){
        array1[i]=array1[i]+32;
    }
    printf("\nThe lowercase string is : %s",array1);
    return 0;
}
