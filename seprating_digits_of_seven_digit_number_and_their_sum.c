#include <stdio.h>
int main() 
{
    int num,r,count=0,i=1000000;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num/i!=0){
        for(i=1000000;i>=1;i=i/10){
        r=num/i;
        num=num-r*i;
        printf("%d  ",r);
        count++;
    }
    printf("\nIt has %d digits",count);
    }
    else{
        printf("Number Entred does not contain seven digits");
    }
    return 0;
}
