#include <stdio.h>
int main() 
{
    int a,b,c,d,e,count=0,sum;
    float avg;
    printf("Enter 1st number :");
    scanf("%d",&a);
    if(a>0){
        a=a;
        count++;
    }
    else if(a<0){
        a=0;
    }
    printf("Enter 2nd number :");
    scanf("%d",&b);
    if(b>0){
        b=b;
        count++;
    }
    else if(b<0){
        b=0;
    }
    printf("Enter 3rd number :");
    scanf("%d",&c);
    if(c>0){
        c=c;
        count++;
    }
    else if(c<0){
        c=0;
    }
    printf("Enter 4th number :");
    scanf("%d",&d);
    if(d>0){
        d=d;
        count++;
    }
    else if(d<0){
        d=0;
    }
    printf("Enter 5th number :");
    scanf("%d",&e);
    if(e>0){
        e=e;
        count++;
    }
    else if(e<0){
        e=0;
    }
    avg=(a+b+c+d+e)/count;
    printf("Number of positive values are :%d\n",count);
    printf("Average of only positive values entered by you is :%f",avg);
    return 0;
}
