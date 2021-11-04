#include<stdio.h>
#include<math.h>
int main(){
    static int a,b,c,d,e,f,g,h,i,j;
    int num,r;
    printf("Enter any number to get count of each digit :");
    scanf("%d",&num);
   while(num!=0)
   {  r=num%10;
      num=num/10;
       if(r==0)
       a++;
       else if(r==1)
       b++;
       else if(r==2)
       c++;
       else if(r==3)
       d++;
       else if(r==4)
       e++;
       else if(r==5)
       f++;
       else if(r==6)
       g++;
       else if(r==7)
       h++;
       else if(r==8)
       i++;
        else if(r==9)
       j++;
   } 
   printf("Frequncy of 0 is :%d\nFrequncy of 1 is :%d\nFrequncy of 2 is :%d\nFrequncy of 3 is :%d\nFrequncy of 4 is :%d\nFrequncy of 5 is :%d\nFrequncy of 6 is :%d\nFrequncy of 7 is :%d\nFrequncy of 8 is :%d\nFrequncy of 9 is :%d",a,b,c,d,e,f,g,h,i,j);
return 0;
}
