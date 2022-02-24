#include <stdio.h>
#include <math.h>
int main() 
{
    int num,b;
    printf("Enter any number (0-255) :");
    scanf("%d",&num);
    printf("Enter the bit you want to check :");
    scanf("%d",&b);
    b=pow(2,b-1);
    (num&b)==0?printf("No"):printf("Yes");
    return 0;
}
