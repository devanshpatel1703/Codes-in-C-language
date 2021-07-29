#include <stdio.h>

int main() 
{
    int i=3;
    printf("adress :%u\n",&i);
    printf("value :%d\n",i);
    printf("value :%d\n",*(&i));
    return 0;
}
