#include <stdio.h>
#include <math.h>
int main()
{ 
    int n,j,i,m,max;
    printf("Enter the row and column of array :");
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d Row and %d column element :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    printf("The largest number in the matrix is : %d",max);
    return 0;
}
