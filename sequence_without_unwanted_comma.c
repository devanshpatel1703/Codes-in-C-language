#include <stdio.h>
#include <math.h>
int main() 
{
    int a,i=1;
    printf("Input two numbers(integer):");
    scanf("%d",&a);
    for(i=1;i<=a-1;i++){
        printf("%d,",i);
    }
    printf("%d",a);
    return 0;
}
