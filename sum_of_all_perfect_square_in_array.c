/* C program to find the sum of perfect square elements in an array */
#include<stdio.h>
#include<math.h>

int isPerfectSquare(int number)
{
int iVar;
float fVar;

fVar=sqrt((double)number);
iVar=fVar;

if(iVar==fVar)
return number;
else
return 0;
}

int main()
{
int n;
scanf(“%d”,&n);
int arr[n];
int i;
for(i = 0; i < n; i++)
{
scanf(“%d”,&arr[i]);
}
int sum = 0;
for(i = 0; i < n; i++)
{
sum = sum + isPerfectSquare(arr[i]);
}
printf(“%d”,sum);
return 0;
}

// Solving th problem statement using C pointers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int sumPositive(int n,int *a)
{
int i,sum=0,m;
for(i=0;i<n;i++)
{
m=sqrt(*(a+i));
if(pow(m,2)==*(a+i))
{
sum+=*(a+i);
}
}
return sum;
}
int main()
{
int i,*a,n;
printf(“Enter the size of array:\n”);
scanf(“%d”,&n);
a=(int*)malloc(n*sizeof(int));
printf(“Enter the elements of array:\n”);
for(i=0;i<n;i++)
{
scanf(“%d”,a+i);
}
printf(“Sum of positive square elements is %d”,sumPositive(n,a));
return 0;
}
