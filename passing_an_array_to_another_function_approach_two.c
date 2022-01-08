#include <stdio.h>
#include <stdio.h>
int pass_array(int *,int);
int main() 
{
    int n,temp,j,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element of array :",i);
        scanf("%d",&a[i]);
    }
    printf("Adress of array in 1st function : %d\n",&a);
    printf("Array in 1st function :");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    pass_array(&a,n);
    return 0;
}
int pass_array(int *k,int n)
{
    int i;
    printf("\nAdress of array in 2nd function : %d\n",k);
    printf("The array in 2nd function :");
    for(i=0;i<n;i++){
        printf("%d ",*k+i);
    }
    return 0;
}
