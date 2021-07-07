// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int b=1,h=1,p=1,i=1;
    printf("All pythagorean triplets under 30 :\n");
    for(b=1;b<=30;b++){
        for(p=1;p<=30;p++){
            for(h=1;h<=30;h++){
                if((b*b+p*p==h*h)||(p*p+b*b==h*h)){
                    printf("%d %d %d\n",b,p,h);
                }
            }
        }
    }
    return 0;
}    
