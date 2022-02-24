#include <stdio.h>
#include <math.h>
int main() 
{
    int num,m,p;
    printf("Enter any number to divide :");
    scanf("%d",&num);
    printf("Enter the number to divide with :");
    scanf("%d",&m);
    m=log(m)/log(2);
    num=num>>(m);
    printf("Result is :%d",num);
    return 0;
}
