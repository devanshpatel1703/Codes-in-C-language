#include <stdio.h>
#include <math.h>
int main()
{ 
    int n,temp,j,i,m;
    printf("Enter the row and column of array :");
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d Row and %d column element :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        printf("Row %d -->  ",i);
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
