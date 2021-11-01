#include <stdio.h>
#include <math.h>
int main() 
{
    int n,i;
    float sum=0,sum1=0,variance,std_deviation,average;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int elements[n];
    for(i=0;i<n;i++){
        printf("Enter the %d element :",i);
        scanf("%d",&elements[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+elements[i];
    }
    average=sum/n;
    for(i=0;i<n;i++){
        sum1=sum1+pow((elements[i]-average),2);
    }
    variance=sum1/n;
    std_deviation=sqrt(variance);
    printf("Average :%.2f\n",average);
    printf("Variance :%.2f\n",variance);
    printf("Standard deviation :%.2f\n",std_deviation);
    return 0;
}
