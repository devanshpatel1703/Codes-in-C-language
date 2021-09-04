#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,r,count=0,d;
    printf( "Enter a five digit number :" );
    scanf( "%d", &num );
    printf( "Which specific digit do you want to count :" );
    scanf( "%d", &d );
    while(num%10!=0){
        r=num%10;
        if(r==d){
            count++;
        }
        num=num/10;
    }
    printf("Number of %d in this number is :%d",d,count);
    return 0;
}
