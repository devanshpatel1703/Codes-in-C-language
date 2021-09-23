#include <stdio.h>
#define PI 3.14
#define AREAT(b,h)(0.5*b*h)
#define PERIT(x,y,z)(x+y+z)
#define AREAS(x)(x*x)
#define PERIS(x)(4*x)
#define AREAC(x)(PI*x*x)
#define PERIC(x)(2*PI*x)
int main() 
{
    float b,h,result,result_b,x,y,z;
    printf("Enter the value of base and height of triangle :");
    scanf("%f %f",&b,&h);
    result=AREAT(b,h);
    printf("\nArea of triangle is :%.2f",result);
    printf("\nEnter the value of three side of triangle :");
    scanf("%f %f %f",&x,&y,&z);
    result=PERIT(x,y,z);
    printf("\nPerimeter of triangle is :%.2f",result);
    printf("\nEnter the value of side of square :");
    scanf("%f",&x);
    result=AREAS(x);
    result_b=PERIS(x);
    printf("\nArea of square is :%.2f\nperimeter of square is :%.2f",result,result_b);
    printf("\nEnter the value of radius of circle :");
    scanf("%f",&x);
    result=PERIC(x);
    result_b=AREAC(x);
    printf("\nPerimeter of CIRCLE is :%.2f\nCircumfrence of circle is :%.1f",result,result_b);
    
    return 0;
}
