#include <stdio.h>
#include <math.h>
int main() 
{
    int num,nnum,t,count=0;
    printf("Enter any number to find its first and last digit :");
    scanf("%d",&num);
    t=num%10;
    nnum=num-t;
    while(num>10){
        num=num/10;
        count++;
    }
    printf("The 1st digit is %d\nThe last digit is %d",num,t);
    nnum=nnum+num;
    nnum=nnum-num*pow(10,count);
    nnum=nnum+t*pow(10,count);
    printf("\nThe number obtained by interchanging 1st and last digit is : %d",nnum);
    return 0;
}
