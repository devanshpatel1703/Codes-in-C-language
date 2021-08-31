#include <stdio.h>
#include <math.h>
int main() 
{
    int m,t=1,sum=0,count=0;
    float avg;
    for(t=1;;t++){
        printf("Enter marks :");
        scanf("%d",&m);
        if(m==0){
            break;
        }
        sum=sum+m;
        count++;
    }
    avg=sum/count;
    printf("The average is :%f",avg);
    return 0;
}
