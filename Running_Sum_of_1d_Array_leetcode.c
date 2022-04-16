int* runningSum(int* a, int n, int* returnSize)
{
    long long int i;
    int *ptr=(int*)malloc(n*sizeof(long long int));
    ptr[0]=a[0];
    for(i=1;i<n;i++){
        ptr[i]=ptr[i-1]+a[i];
    }
    *returnSize=n;
    return (ptr);
}
