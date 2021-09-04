#include<stdio.h>
#include<math.h>
int main()
{
    int num,sum=0,r,t;
    printf( "Enter a five digit number :" );
    scanf( "%d", &num );
    t=num;
    while(num%10!=0){
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("The reverse of the number is :%d\n",sum);
    (sum==t)?printf("Yes palindrome"):printf("Not palindrome");
    return 0;
}
