
#include <stdio.h>

int main() 
{
    int num,i;
    for(num=1;num<=300;num++){
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
            else
            printf("%d\n",num);
            break;
        }
    }

    return 0;
}
