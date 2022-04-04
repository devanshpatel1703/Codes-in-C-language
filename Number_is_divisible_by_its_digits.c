#include<stdio.h>
#include<math.h>
int main()
{
    int temp,check,i,rem;
    printf("Enter a number which do not contain any zero :");
    scanf("%d",&temp);
        i=temp;
        check=1;
        while(temp>0){
            rem=temp%10;
            if(i%rem!=0){
                check=0;
                break;
            }
            temp/=10;
        }
        if(check==1){
            printf("Yes all of its digits divide it completely.");
        }
        else{
            printf("Not all of the digits in the numnber divide it completely.");
        }
    return 0;
}
