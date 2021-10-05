#include <stdio.h>

int main()
{
    float rmside, rmperimeter;
    
    printf("Enter the Rhombus Side = ");
    scanf("%f",&rmside);

    rmperimeter = 4 * rmside;

    printf("The Perimeter of the Rhombus = %.3f\n", rmperimeter);
    
    return 0;
}
