#include <stdio.h>
    void main()
    {
        int a = 3;
        int b = ++a + a++ + --a;
        printf("Value of b is %d", b);
    }
