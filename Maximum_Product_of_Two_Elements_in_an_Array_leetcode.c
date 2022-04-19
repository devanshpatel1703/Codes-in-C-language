int maxProduct(int* a, int n)
{
    int i,max=0,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if((a[i]-1)*(a[j]-1)>max){
                max=(a[i]-1)*(a[j]-1);
            }
        }
    }
    return (max);
}
