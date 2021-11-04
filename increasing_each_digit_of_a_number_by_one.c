#include<stdio.h>
#include<math.h>
int main(){
    int rem,num,sum=0,count=0;
    printf("Enter a number to increase its each digit by 1 :");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if(rem==9){
            printf("Their is 9 in the number. It cant be further increased.");
            return 0;
        }
        rem=rem+1;
        sum=sum+rem*(pow(10,count));
        num=num/10;
        count++;
        
    }
    printf("The result after increasing each digit by 1 is :%d\n",sum);
    printf("Number of digits in the number are :%d",count);
    return 0;
}
