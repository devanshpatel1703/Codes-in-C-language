#include<stdio.h>
#include<math.h>
int main()
{
    int num,min,max,n=1;
    printf( "Start entering numbers :" );
    scanf( "%d", &num );
    min=num;
    max=num;
    while(n!=0){
        if(n<min){
            min=n;
        }
        if(n>max){
            max=n;
        }
        printf("Enter next number :");
        scanf("%d",&n);
    }
    printf("The range of the entered numbers is %d - %d = %d",max,min,max-min);
    return 0;
}
