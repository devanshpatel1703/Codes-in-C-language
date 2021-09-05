#include <stdio.h>
#include <math.h>
int main() 
{
    int x,y;
    printf("Input two pairs values (integer values):");
    scanf("%d %d", &x, &y);
    if(x>y){
        printf("Decending Order");
    }
    else{
        printf("Acending Order");
    }
    return 0;
}
