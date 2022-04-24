int* targetIndices(int* a, int n, int target, int* returnSize)
{
     int i,j,count=0,index=0,temp;
     for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    int *ptr=(int*)malloc(100*sizeof(int));
    for(i=0;i<n;i++){
        if(a[i]==target){
            ptr[index++]=i;
        }
    }
    *returnSize=index;
    return(ptr);
}
