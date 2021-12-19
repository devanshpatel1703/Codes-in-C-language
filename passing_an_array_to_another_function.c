#include <stdio.h>
#include <math.h>
void function (int a[],int);
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
    function(a,n);
    return 0;
}
void function(int a[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++){
        a[i]=a[i]*2;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
