int* findDisappearedNumbers(int* a, int n, int* returnSize)
{
    int i,counter=0,temp,element;
    int *ptr=(int*)malloc(n*sizeof(int));
    int *count=(int*)calloc(n+1, sizeof(int));
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    for(i=1;i<n+1;i++){
        if(count[i]==0){
            ptr[counter++]=i;
        }
    }
    *returnSize = counter;
    return (ptr);
}
