#include <stdio.h>
#include <math.h>
int main() 
{
    int i,x,y;
    printf("Input two pairs values (integer values):");
    scanf("%d %d", &x, &y);
    if(x>y){
        x=x+y;
        y=x-y;
        x=x-y;
    }
    printf("\nSequence from the lowest to highest number :\n");
    for(i=x;i<=y;i++){
        printf("%d\n",i);
    }
    return 0;
}
