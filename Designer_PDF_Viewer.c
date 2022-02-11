#include<stdio.h>
#include<string.h>
int main()
{
    int a[26],i,character,max;
    char c[1000];
    for(i=0;i<26;i++){
        scanf("%d",&a[i]);
    }
    scanf("%s",c);
    int length=strlen(c);
    max=a[c[0]-97];
    for(i=0;i<length;i++){
        if(a[c[i]-97]>max){
            max=a[c[i]-97];
        }
    }
    printf("%d",max*length);
    return 0;
}
