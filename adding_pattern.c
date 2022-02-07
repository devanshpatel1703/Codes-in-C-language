#include<stdio.h>
int main()
{
	int num,i,res=0,j,n,sum;
	printf("Enter the number :");
	scanf("%d",&num);
	printf("Enter the times you want multiply and add : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=1;
		for(j=1;j<=i;j++){
			sum=sum*num;
		}
		res=res+sum;
	}
	printf("The result is : %d",res);
}
//n+nn+nnn+nnnn.................
