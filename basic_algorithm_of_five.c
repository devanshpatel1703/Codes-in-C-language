#include <stdio.h>
#include <math.h>
int function(int,int);
int main()
{
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    c=function(a,b);
    printf("%d",c);
    return 0;
}
int function(int a,int b)
{
    return a==5||b==5||a+b==5||a-b==5||b-a==5;
}
