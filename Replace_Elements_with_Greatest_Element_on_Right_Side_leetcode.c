int* replaceElements(int* a, int n, int* returnSize)
{               
    int i,j,num;
    for(i=0;i<n-1;i++){
        num=a[i+1];
        for(j=i+1;j<n;j++){
            if(a[j]>num){
                num=a[j];
            }
        }
        a[i]=num;
    }
    a[n-1]=-1;
    int* ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        ptr[i]=a[i];
    }
    *returnSize=n;
    return(ptr);
}
