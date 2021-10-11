#include<stdio.h>

int main()
{
    int a,b,x,y,res;
    printf("Enter the value of A,B,X :");
    scanf("%d %d %d",&a,&b,&x);
    y=!x;
    res=a*x+b*y;
    printf("\n%d",res);
    return 0;
}
