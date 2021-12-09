#include <stdio.h>
#include <math.h>
int main()
{
    int w;
    printf("Enter the weight of watermelon :");
    scanf("%d",&w);
    if(w==2){
        printf("NO");
    }
    else if(w%2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
