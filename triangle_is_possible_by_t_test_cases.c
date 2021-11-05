#include <stdio.h>
int main() 
{
    int t,a1,a2,a3,i;
    printf("Enter the test cases you want :");
    scanf("%d",&t);
    char arr[t];
    printf("Start entering the values of angles consecutively.\n");
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&a1,&a2,&a3);
        if((a1+a2+a3)==180){
            arr[i-1]='Y';
        }
        else{
            arr[i-1]='N';
        }
    }
    printf("\nThe result of each test case is as follows.\n");
    for(i=0;i<t;i++){
        printf("%c\n",arr[i]);
    }
    return 0;
}
