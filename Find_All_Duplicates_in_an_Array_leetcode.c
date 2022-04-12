int* findDuplicates(int* a, int n, int* returnSize)
{
    int i,size=0;
    int *count=(int*)calloc(100000,sizeof(long long int));
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    int *array=(int*)malloc(50000*sizeof(long long int));
    for(i=1;i<100000;i++){
        if(count[i]==2){
            array[size++]=i;
        }
    }
    *returnSize=size;
    return (array);
}
