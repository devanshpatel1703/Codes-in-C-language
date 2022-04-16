int* sortedSquares(int* a, int n, int* returnSize)
{
    int i,j,temp;
    int* ptr=(int*)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++){
        ptr[i]=a[i]*a[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(ptr[j]>ptr[j+1]){
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
            }
        }
    }
    *returnSize=n;
    return (ptr);
}
