#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,n,count=0,j;
    char a[100];
    scanf("%s",a);
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        while(a[i]!='\0'){
            if(a[i]=='a'){
                count++;
            }
            i++;
        }
        i=0;
    }
    printf("%d",count);
    return 0;
}
