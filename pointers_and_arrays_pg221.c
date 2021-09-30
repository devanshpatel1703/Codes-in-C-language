#include <stdio.h>

int main() 
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;
    printf("Value of i :%d\n",i);
    printf("Value of j :%f\n",j);
    printf("Value of k :%c\n\n",k);
    x=&i;   y=&j;  z=&k;
    printf("Adress of i :%u\n",x);
    printf("Adress of j :%u\n",y);
    printf("Adress of k :%u\n\n",z);
    x++;    y++;    z++;
    printf("new Adress of i :%u\n",x);
    printf("new Adress of j :%u\n",y);
    printf("new Adress of k :%u\n",z);
    return 0;
}
