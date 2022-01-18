#include <stdio.h>
#include <math.h>
int main() 
{
    int r,i,j,point=0;
    printf("Enter the radius of circle :");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            point++;
        }
    }
    printf("Points Within the circle : %d",point*4);
    return 0;
}
