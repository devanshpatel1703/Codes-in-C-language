#include <stdio.h>
int main() 
{
    int n,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    int d1[n-1],d2[n-2],d3[n-3];
    for(i=0;i<n;i++){
        printf("Enter %d element :",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nFirst Distance :\n");
    for(i=0;i<n-1;i++){
        d1[i]=a[i+1]-a[i];
        printf("%d ",d1[i]);
    }
    printf("\nSecond Distance :\n");
    for(i=0;i<n-2;i++){
        d2[i]=d1[i+1]-d1[i];
        printf("%d ",d2[i]);
    }
    printf("\nThrid Distance :\n");
    for(i=0;i<n-3;i++){
        d3[i]=d2[i+1]-d2[i];
        printf("%d ",d3[i]);
    }
    return 0;
}
