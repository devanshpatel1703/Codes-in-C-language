#include <stdio.h>
void fun();
int main() 
{
    fun();
    fun();
    return 0;
}
void fun(){
    static int a=1;
    a++;
    printf("%d\n",a);
}
