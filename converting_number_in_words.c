#include <stdio.h>
#include <math.h>
int main() 
{
    int num,r,nr,nnum=0;
    printf("Enter a number to print it in words :");
    scanf("%d",&num);
    while(num>0){
        nr=num%10;
        nnum=nnum*10+nr;
        num/=10;
    }
    printf(" Nnum %d\n",nnum);
    while(nnum>0){
        r=nnum%10;
        nnum=nnum/10;
        if(r==0){
            printf("Zero ");
        }
        if(r==1){
            printf("One ");
        }
        else if(r==2){
            printf("Two ");
        }
        else if(r==3){
            printf("Three ");
        }
        else if(r==4){
            printf("Four ");
        }
        else if(r==5){
            printf("Five ");
        }
        else if(r==6){
            printf("Six ");
        }
        else if(r==7){
            printf("Seven ");
        }
        else if(r==8){
            printf("Eight ");
        }
        else{
            printf("Nine ");
        }
    }
    return 0;
}
