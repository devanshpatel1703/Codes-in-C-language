// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int h=0;
    for(h=1;h<=23;h++){
        if(h==1){
            printf("12 Midnight\n");
        }
        if(h<12){
            printf("%d A.M\n",h);
        }
        if(h==12){
            printf("%d Noon\n",h);
        }
        if(h>12){
            printf("%d P.M\n",h%12);
        }
    }
    return 0;
}
