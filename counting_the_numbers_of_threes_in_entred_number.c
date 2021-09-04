#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,r,count=0;
    printf( "Enter a five digit number :" );
    scanf( "%d", &num );
    while(num%10!=0){
        r=num%10;
        if(r==3){
            count++;
        }
        num=num/10;
    }
    printf("Number of three in this number is :%d",count);
    return 0;
}
