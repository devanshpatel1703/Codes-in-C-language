int* smallerNumbersThanCurrent(int* a, int n, int* returnSize){
    int i,j;
    int* ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(a[i]>a[j]){
                count++;
            }
        }
        ptr[i]=count;
    }
    *returnSize=n;
    return(ptr);
}
