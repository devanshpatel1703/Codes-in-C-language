#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,c,d,n,count=0;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("a+b+c+d=n\n");
    for(a=0;a<=9;a++){
        for(b=0;b<=9;b++){
            for(c=0;c<=9;c++){
                for(d=0;d<=9;d++){
                    if(n==a+b+c+d){
                        printf("%d+%d+%d+%d=%d\n",a,b,c,d,n);
                        count++;
                    }
                }
            }
        }
    }
    printf("Number of combinations are :%d",count);
    return 0;
}
