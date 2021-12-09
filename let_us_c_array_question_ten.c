#include <stdio.h>
#include <math.h>
int main()
{
    float sum=0,distance;
    int n,i;
    float temp,num;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int x[n],y[n];
    for(i=0;i<n;i++){
        printf("Enter the value of X1 and Y1 :");
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<n-1;i++){
        distance=sqrt(((x[i+1]-x[i])*(x[i+1]-x[i]))+((y[i+1]-y[i])*(y[i+1]-y[i])))*1.0;
        sum=sum+distance;
    }
    printf("The sum of distance of all the consecutuve points is : %.2f",sum);
    return 0;
}
