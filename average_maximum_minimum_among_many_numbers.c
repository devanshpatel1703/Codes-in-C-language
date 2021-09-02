#include <stdio.h>
int main() 
{
    int a,min,max,ctr=0,sum=0;
    float avg;
    printf("Enter a number :");
    scanf("%d",&a);
    min=a;
    max=a;
    while(a>0){
        ctr++;
        sum=sum+a;
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
        printf("Enter next number :");
        scanf("%d",&a);
    }
    avg = sum/ctr;
    printf("Number of positive values entered is %d\n", ctr);
    printf("Maximum value entered is %d\n", max);
    printf("Minimum value entered is %d\n", min);
    printf("Average value is %f\n", avg);
    return 0;
}
