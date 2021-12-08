#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,num;
    float temp;
    printf("Enter the size of array :");
    scanf("%d",&n);
    float a[n],b[n],angle[n],area[n];
    for(i=0;i<n;i++){
        printf("Enter value of A,B,Angle :");
        scanf("%f %f %f",&a[i],&b[i],&angle[i]);
        area[n]=0.5*a[i]*b[i]*sin(angle[i]);
    }
    temp=area[0];
    for(i=1;i<n;i++){
        if(angle[i]>temp){
            temp=angle[i];
            num=i-1;
        }
    }
    printf("The largest triangle is : %d with area : %.2f",num,temp);
    return 0;
}
