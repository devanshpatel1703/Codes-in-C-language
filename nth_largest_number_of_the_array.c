#include <stdio.h>
#include <math.h>
 int main()
{ 
    int n,i,j,pos,max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter %d element of array :",i);
        scanf("%d",&array[i]);
    }
    printf("Enter which largest number you want :");
    scanf("%d",&pos);
    for(j=1;j<=pos;j++){
        max=array[0];
        for(i=0;i<n;i++){
            if(array[i]>max){
                max=array[i];
            }
        }
        for(i=0;i<n;i++){
            if(array[i]==max){
                array[i]=0;
            }
        }       
    }
    printf("The %d largest number in the array is : %d",pos,max);
    return 0;
}
