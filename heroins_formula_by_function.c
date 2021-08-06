#include <stdio.h>
#include <math.h>
int artri(float,float,float,float);
int main() 
{
    float sp,a,b,c;
    printf("Enter the sides of the triangle :");
    scanf("%f %f %f",&a,&b,&c);
    sp=(a+b+c)/2;
    artri(sp,a,b,c);
    return 0;
}
int artri(float x,float d,float e,float f)
{
    float area;
    area=pow((x*(x-d)*(x-e)*(x-f)),0.5);
    printf("Area of the triangle is :%f unit sq.",area);
    return 0;
}
