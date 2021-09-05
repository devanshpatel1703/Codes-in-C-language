#include <stdio.h>
#include <math.h>
int main() 
{
    int i=1,a=1,b=100;
    for(i=1;i<=11;i++){
        printf("a\t=\t%d\t\t||\t\tb\t=\t%d\n",a,b);
        a=a+5;
        b=b-10;
    }
    return 0;
}
