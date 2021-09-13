#include <stdio.h>
int main() 
{
    int n,t;
    printf("Enter the co efficient and power of X :");
    scanf("%d %d",&n,&t);
    printf("\nThe diffrentiation is : %d X^%d",n*t,t-1);
    return 0;
}
