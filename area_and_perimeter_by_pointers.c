#include <stdio.h>
void areaperi(int,float *,float *);
int main() 
{
    int radius;
    float area,perimeter;
    printf("Enter the value of radius :");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("Area =%f\n",area);
    printf("perimeter =%f",perimeter);
    return 0;
}
void areaperi(int r,float *a,float *p)
{
    *a=3.14*r*r;
    *p=2*3.14*r;
}
