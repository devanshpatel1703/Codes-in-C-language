#include <stdio.h>
#include <math.h>
int main() 
{
    int num,b;
    printf("Enter any number (0-255) :");
    scanf("%d",&num);
    printf("Enter the bit you want to turn on :");
    scanf("%d",&b);
    b=pow(2,b-1);
    printf("The result after reversing the entred bit is : %d",num^b);
    return 0;
}
