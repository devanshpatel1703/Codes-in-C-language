#include <stdio.h>
int main() 
{
    int i,j,k,l;
    for(l=1;l<=1000;l++){
        for(j=1;j<l;j++){
            for(k=1;k<j;k++){
                for(i=1;i<k;i++){
                    if((i+j+k)==l){
                        printf("%d + %d + %d = %d\n",i,j,k,l);
                    }
                }
            }
        }
    }
    return 0;
}
