
#include <stdio.h>
void pnt(int);
int main() 
{
    int i=1;
    pnt(i);
    return 0;
}
void pnt(int a)
{
    if(a<=50){
        printf("%d ",a);
        pnt(a+1);
    }
}
