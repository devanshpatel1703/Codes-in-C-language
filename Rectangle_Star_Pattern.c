#include <stdio.h>

int main() 
{
    int r,i,j,k,c;
    printf("Please Enter the Number of rows:");
    scanf("%d",&r);
    printf("Please Enter the Number of Columns:");
    scanf("%d",&c);
    printf("\nThe rectangle pattern is:\n\n");
	for(i=1;i<=c;i++){
	    for(j=1;j<=r;j++){
	        printf("*");
	    }
	    printf("\n");
	} 
    return 0;
}
