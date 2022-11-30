#include <stdio.h>
int main() 
{
    printf("Enter the size of array :");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter the array :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1=a[0];
    int max2=a[1];
    for(int i=2;i<n;i++){
        if(a[i]>max1){
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1){
            max2=a[i];
        }
    }
    printf("Largest :%d\nSecond largest :%d",max1,max2);
    return 0;
}
