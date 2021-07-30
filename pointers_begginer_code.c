#include <stdio.h>

int main() 
{
    int i,*j;
    j=&i;
    i=3;
    printf("Adress of i :%u\n",&i);
    printf("adress of i :%u\n",j);
    printf("adress of j  :%u\n",&j);
    printf("value of j :%d\n",j);
    printf("value of i :%d\n",i);
    printf("value of i :%d\n",*(&i));
    printf("vaalue of i :%d",*j);
    return 0;
}
