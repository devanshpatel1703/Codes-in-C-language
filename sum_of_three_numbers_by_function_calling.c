#include <stdio.h>
int sumt(int x,int y,int z);
int main() 
{
    int a,b,c,sum;
    printf("Entet three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    sum=sumt(a,b,c);
    printf("%d",sum);
    return 0;
}
int sumt(int x,int y,int z)
{
    int t;
    t=x+y+z;
    return (t);
}

