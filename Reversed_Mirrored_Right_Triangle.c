#include <stdio.h>

int main() 
{
    int i,j,k,r;
    printf("Enter the Number of Rows:  ");
    scanf("%d", &r);
	printf("\nPattern is :\n");
	for(i=1;i<=r;i++){
	    for(j=0;j<i;j++){
	        printf(" ");
	    }
	    for(k=0;k<=r-i;k++){
	        printf("*");
	    }
	    printf("\n");
	}
    return 0;
}
