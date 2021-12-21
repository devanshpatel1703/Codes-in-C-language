#include <stdio.h>
#include <math.h>
int main()
{ 
    int n,j,i,m,max;
    printf("Enter the row and column of array :");
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d Row and %d column element :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The maxtrix you entred is :\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    max=a[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[i][j]=a[j][i];
        }
    }
    printf("\n\nThe transpose of maxtrix is :\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
