#include <stdio.h>
#include <math.h>
int main() 
{
    float x1,x2,y1,y2,a1,a2,b1,b2;
    printf("For 1st line PQ\nEnter value of P(x1,y1) :");
    scanf("%f %f",&x1,&y1);
    printf("Enter value of P(x2,y2) :");
    scanf("%f %f",&x2,&y2);
    printf("For 2nd line RS\nEnter value of P(a1,b1) :");
    scanf("%f %f",&a1,&b1);
    printf("Enter value of P(a2,b2) :");
    scanf("%f %f",&a2,&b2);
    if(((y2-y1)/(x2-x1))==((a2-a1)/(b2-b1))){
        printf("\nYes they are parallel.");
    }
    else{
        printf("\nNo, They are not parallel.");
    }
    return 0;
}
