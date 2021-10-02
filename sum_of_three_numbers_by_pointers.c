#include <stdio.h>
int main() 
{   
    int a,b,c,sum,*d,*e,*f;
    printf("Enter three numbers :");
    scanf("%d %d %d",&a,&b,&c);
    d=&a;
    e=&b;
    f=&c;
    sum=*d + *e + *f;
    printf("Sum is :%d",sum);
}
