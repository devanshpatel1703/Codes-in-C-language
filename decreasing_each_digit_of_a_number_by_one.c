#include <stdio.h>
#include<math.h>
int main() 
{
    int num,r,count=0,new_num=0;
    printf("Enter the number to decrease its all digits by 1 :");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        if(r==0){
            printf("Their is zero in the number which can't be further decreased.");
            return 0;
        }
        new_num=new_num+(r-1)*pow(10,count);
        count++;
        num/=10;
    }
    printf("The number obtained after decreasing all digits by 1 is :%d",new_num);
    return 0;
}
