#include <stdio.h>
int main() 
{
    int r,c,i,j,temp;
    printf("Enter odd rows and odd colunms :");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++){
        if(i%2!=0){
            for(j=1;j<=c;j++){
                if(j%2!=0){
                    printf("1   ");
                }
                else{
                    printf("0   ");
                }
            }
        }
        else{
            for(j=1;j<=c;j++){
                if(j%2==0){
                    printf("1   ");
                }
                else{
                    printf("0   ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
