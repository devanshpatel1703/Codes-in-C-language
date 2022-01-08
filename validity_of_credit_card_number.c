#include <stdio.h>
#include <math.h>
 int main()
{ 
    int number[16],array1[8],array2[8];
    int i,j=0,k=0,sum1=0,sum2=0;
    for(i=0;i<16;i++){
        printf("Enter %d number of credit card :",i+1);
        scanf("%d",&number[i]);
    }
    printf("The credit number you entred is : ");
    for(i=0;i<16;i++){
        printf("%d",number[i]);
    }
    for(i=0;i<16;i++){
        if(i%2==0){
            array1[j]=2*number[i];
            j++;
        }
        else{
            array2[k]=number[i];
            k++;
        }
    }
    for(i=0;i<8;i++){
        if(array1[i]>=10){
            array1[i]=array1[i]-9;
        }
    }
    for(i=0;i<8;i++){
        sum1=sum1+array1[i];
        sum2=sum2+array2[i];
    }
    if((sum1+sum2)%10==0){
        printf("\nThe credit card is valid.");
        return 0;
    }
    printf("\nThe credit card is valid.");
    return 0;
}
