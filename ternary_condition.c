#include <stdio.h>

int main() 
{
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("\nEnter a :");
    scanf("%d",&b);
    (a==b)?printf("triple=%d",(a+b)*3):printf("sum=%d",a+b);
    return 0;
}
