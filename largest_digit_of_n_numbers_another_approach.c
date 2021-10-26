#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum=0,i;
    printf("Enter number to find its largest digit = ");
    scanf("%d", &n);
    sum=pow(10,n)-1;
    printf("the largest digit of %d digits is = %d",n,sum);
    return 0;
}
