#include <stdio.h>
int main() 
{   
    int a , b,c;
    printf("Enter three angles of triangle :");
    scanf("%d %d %d",&a,&b,&c);
    (a+b+c==180)?printf("Yes triangle is possible as the sum of its angles is 180 degrees."):printf("The triangle is not possible as the sum is not 180 degress of ita angles.");
}
