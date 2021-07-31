
#include <stdio.h>
void swap(int x,int y);
int main() 
{
    int a,b;
    printf("A=");
    scanf("%d",&a);
    printf("B=");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("After swapping\n");
    printf("A=%d\n",x);
    printf("B=%d",y);
}
