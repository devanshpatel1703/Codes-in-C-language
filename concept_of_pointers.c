#include <stdio.h>

int main() 
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("Adress of i=%u\n",&i);
    printf("Adress of i=%u\n",j);
    printf("Adress of i=%u\n",*k);
    printf("Adress of j=%u\n",&j);
    printf("Adress of j=%u\n",k);
    printf("Adress of k=%u\n",&k);
    printf("value of j=%u\n",j);
    printf("Value of k=%u\n",k);
    printf("Value of i=%u\n",i);
    printf("Value of i=%u\n",*(&i));
    printf("Value of i=%u\n",*j);
    printf("Value of i=%u\n",**k);
    return 0;
}
