#include <stdio.h>

int main() 
{
    float a,b,c,d,max,min,diff;
    printf("Enter 4 numbers :");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if((a>b)&&(a>c)&&(a>d)){
        max=a;
    }
    else if((b>a)&&(b>c)&&(b>d)){
        max=b;
    }
    else if((c>a)&&(c>b)&&(c>d)){
        max=c;
    }
    else{
        max=d;
    }
    if((a<b)&&(a<c)&&(a<d)){
        min=a;
    }
    else if((b<a)&&(b<c)&&(b<d)){
        min=b;
    }
    else if((c<a)&&(c<b)&&(c<d)){
        min=c;
    }
    else{
        min=d;
    }
    diff=max-min;
    printf("\nThe diffrence of largest and smallest number is :%f",diff);
    return 0;
}
