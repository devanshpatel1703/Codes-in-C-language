#include <stdio.h>
int rev(int);
int main() 
{
    int num,res;
    printf("Enter the rember to get it revered :");
    scanf("%d",&num);
    res=rev(num);
    printf("The reverse od the entred number is :%d",res);
    return 0;
}
int r,sum=0;
int rev(int num)
{
    if(num>0){
        r=num%10;
        sum=sum*10+r;
        rev(num/10);   
    }
    else{
        return sum;
    }
    return sum;
}
