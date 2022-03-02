#include <stdio.h>
#include <math.h>
int main() 
{
    int num,three,six,seven;
    printf("Enter any number (0-255) :");
    scanf("%d",&num);
    three=pow(2,2);
    (num&three)==0 ? printf("Thrid bit --> OFF\n"):printf("Thrid bit --> ON\n");
    six=pow(2,5);
    (num&six)==0 ? printf("Six bit --> OFF\n"):printf("Six bit --> ON\n");
    seven=pow(2,6);
    (num&seven)==0 ? printf("Seven bit --> OFF\n"):printf("Seven bit --> ON\n");
    return 0;
}
