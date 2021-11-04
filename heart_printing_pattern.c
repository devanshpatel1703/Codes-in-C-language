#include <stdio.h>
int main()
{
   int i,j,s,k;
   printf("enter an even number : ");
   scanf("%d",&s);
   for(i=1;i<=s/2;i++)
   {
	for(j=s/2-i;j>=1;j--){
	   printf(" ");}  
	for(k=1;k<=2*i-1;k++)
	   printf("*");
    for(k=1;k<=(s-1)-(i-1)*2;k++)
	   printf(" ");
	for(k=1;k<=2*i-1;k++)
	   printf("*");
	printf("\n");
   }
   for(i=s;i>=0;i--)
   {
	for(j=s-i;j>=1;j--){
	   printf(" ");}  
	for(k=1;k<=2*i-1;k++)
	   printf("*");
	printf("\n");
   }
}
