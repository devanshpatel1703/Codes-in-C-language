#include <stdio.h>
int main() 
{
    int num,r,count=0;
    printf("Enter a number :");
    scanf("%d",&num);
    while(num%10!=0){
        r=num%10;
        printf("%d  ",r);
        num=num/10;
        count++;
    }
    printf("\nIt has %d digits",count);
    return 0;
}
