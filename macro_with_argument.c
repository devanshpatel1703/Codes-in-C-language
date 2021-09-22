#include <stdio.h>
#define AREA(x)(3.14*x*x)
int main() 
{
   float r,area;
   printf("Enter the value of radius :");
   scanf("%f",&r);
   area=AREA(r);
   printf("The area of circle is :%f",area);
   printf("\nEnter the value of radius :");
   scanf("%f",&r);
   area=AREA(r);
   printf("The area of circle is :%f",area);
   return 0;
}
