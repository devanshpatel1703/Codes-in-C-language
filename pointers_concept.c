#include <stdio.h>
int plus(int *);
int main() 
{
    int a=5,sum;
    printf("a=%d\n",a);
    sum=plus(&a);
    printf("a=%d\n",sum);
    return 0;
}
int plus(int *a)
{
    printf("a=%d\n",*a);
    *a=*a*10;
    printf("a=%d\n",*a);
    return(*a);
}
