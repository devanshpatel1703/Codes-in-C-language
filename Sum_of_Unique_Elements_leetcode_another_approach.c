int sumOfUnique(int* a, int n)
{
    int i,max=a[0],sum=0;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int *ptr;
    ptr=(int*)calloc(max+1,sizeof(int));
    for(i=0;i<n;i++){
        ptr[a[i]]++;
    }
    for(i=0;i<=max;i++){
        if(ptr[i]==1){
            sum+=i;
        }
    }
    return (sum);
}
