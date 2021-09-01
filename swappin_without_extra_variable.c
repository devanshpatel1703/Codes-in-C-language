#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b;
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping\n");
    printf("Value of A :%d\n",a);
    printf("Value of B :%d",b);
    return 0;
}
