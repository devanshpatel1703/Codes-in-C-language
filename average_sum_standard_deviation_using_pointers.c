#include <stdio.h>
#include <math.h>
void res(float *,float *,double *);
int main() 
{
    float sum,average;
    double stdev;
    res(&sum,&average,&stdev);
    printf("Sum =%f\nAverage =%f\nStandard deviation =%f\n",sum,average,stdev);
    return 0;
}
void res(float *s,float *a,double *std)
{
    int n1,n2,n3,n4,n5;
    printf("Enter any 5 numbers=");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    *s=n1+n2+n3+n4+n5;
    *a=*s/5;
    *std=sqrt((pow((n1-*a),2)+pow((n2-*a),2)+pow((n3-*a),2)+pow((n4-*a),2)+pow((n5-*a),2))/5);
}
