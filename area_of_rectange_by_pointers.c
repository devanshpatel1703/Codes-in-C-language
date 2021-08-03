#include <stdio.h>
void areamul(float,float,float *);
int main() 
{
    float l,b,area;
    printf("Enter the value of length and breath :");
    scanf("%f %f",&l,&b);
    areamul(l,b,&area);
    printf("The area of rectangle is :%f",area);
    return 0;
}
void areamul(float x,float y,float *a)
{
    *a=x*y;
}
