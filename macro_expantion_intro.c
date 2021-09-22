#include <stdio.h>
#define PI 3.14
int main() 
{
   float r;
   printf("Enter the value of radius :");
   scanf("%f",&r);
   printf("The area of circle is :%.2f",PI*r*r);
   return 0;
}
