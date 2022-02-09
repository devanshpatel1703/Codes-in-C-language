#include<stdio.h>
int main()
{
    char a[11],b[9],h1,h2,hour,i;
    scanf("%s",a);
    h1=a[0]-48;
    h2=a[1]-48;
    hour=h1*10+h2;
    if(hour==12&&a[8]=='P'){
        a[0]='1';
        a[1]='2';
        for(i=0;i<8;i++){
            b[i]=a[i];
        }
        b[8]='\0';
        printf("%s",b);
        return 0;
    }
    if(hour==12&&a[8]=='A'){
        a[0]='0';
        a[1]='0';
        for(i=0;i<8;i++){
            b[i]=a[i];
        }
        b[8]='\0';
        printf("%s",b);
        return 0;
    }
    if(a[8]=='P'){
        hour=hour+12;
        h2=hour%10;
        hour/=10;
        h1=hour;
        a[0]=h1+48;
        a[1]=h2+48;
        for(i=0;i<8;i++){
            b[i]=a[i];
        }
        b[8]='\0';
        printf("%s",b);
        return 0;
    }
    if(a[8]=='A'&&hour!=12){
        for(i=0;i<8;i++){
            b[i]=a[i];
        }
        b[8]='\0';
        printf("%s",b);
        return 0;
    }
    return 0;
}
