#include <stdio.h>
int main() 
{
    int x=1;
    printf("Enter a number or press 0 to end the program:\n");
    printf("x\tx+2\tx+4\tx+6\n\n\n");
    printf("_______________\n");
    for(x=1;x<=13;x=x+3){
        printf("%d\t%d\t%d\t%d\n\n",x,x+2,x+4,x+6);
    }
    return 0;
}
//printing this pattern table
//1       3       5       7
//4       6       8       10
//7       9       11      13
//10      12      14      16
//13      15      17      19
