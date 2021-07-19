#include <stdio.h>

int main() 
{
    int totalrow,row,space,symbol;
    printf("Enter the number of rows :");
    scanf("%d",&totalrow);
    for(row=1;row<=totalrow;row++){
        for(space=1;space<=totalrow-row;space++)
        printf(" ");
        for(symbol=1;symbol<=(2*row)-1;symbol++)
        printf("0");
        printf("\n");
    }
    return 0;
}
